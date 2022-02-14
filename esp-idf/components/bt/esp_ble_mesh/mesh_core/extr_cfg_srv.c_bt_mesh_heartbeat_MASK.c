
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct TYPE_2__ {scalar_t__ src; scalar_t__ dst; scalar_t__ expiry; int count; int (* func ) (int ,scalar_t__) ;int max_hops; int min_hops; } ;
struct bt_mesh_cfg_srv {TYPE_1__ hb_sub; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,int ,int ,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct bt_mesh_cfg_srv* VAR_0 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__) ;

void FUNC_6(u16_t VAR_1, u16_t VAR_2, u8_t VAR_3, u16_t VAR_4)
{
    struct bt_mesh_cfg_srv *VAR_5 = VAR_0;

    if (!VAR_5) {
        FUNC_1("No configuaration server context available");
        return;
    }

    if (VAR_1 != VAR_5->hb_sub.src || VAR_2 != VAR_5->hb_sub.dst) {
        FUNC_1("No subscription for received heartbeat");
        return;
    }

    if (FUNC_4() > VAR_5->hb_sub.expiry) {
        FUNC_1("Heartbeat subscription period expired");
        return;
    }

    VAR_5->hb_sub.min_hops = FUNC_3(VAR_5->hb_sub.min_hops, VAR_3);
    VAR_5->hb_sub.max_hops = FUNC_2(VAR_5->hb_sub.max_hops, VAR_3);

    if (VAR_5->hb_sub.count < 0xffff) {
        VAR_5->hb_sub.count++;
    }

    FUNC_0("src 0x%04x dst 0x%04x hops %u min %u max %u count %u", VAR_1,
           VAR_2, VAR_3, VAR_5->hb_sub.min_hops, VAR_5->hb_sub.max_hops,
           VAR_5->hb_sub.count);

    if (VAR_5->hb_sub.func) {
        VAR_5->hb_sub.func(VAR_3, VAR_4);
    }
}
