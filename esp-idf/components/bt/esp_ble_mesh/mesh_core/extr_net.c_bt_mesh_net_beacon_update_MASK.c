
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
struct bt_mesh_subnet_keys {int net_id; int beacon; } ;
struct bt_mesh_subnet {int auth; struct bt_mesh_subnet_keys* keys; int net_idx; scalar_t__ kr_flag; } ;
struct TYPE_2__ {int iv_index; } ;


 int FUNC_0 (char*,int ,...) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct bt_mesh_subnet*) ;

int FUNC_3(struct bt_mesh_subnet *VAR_1)
{
    u8_t VAR_2 = FUNC_2(VAR_1);
    struct bt_mesh_subnet_keys *VAR_3;

    if (VAR_1->kr_flag) {
        FUNC_0("NetIndex %u Using new key", VAR_1->net_idx);
        VAR_3 = &VAR_1->keys[1];
    } else {
        FUNC_0("NetIndex %u Using current key", VAR_1->net_idx);
        VAR_3 = &VAR_1->keys[0];
    }

    FUNC_0("flags 0x%02x, IVI 0x%08x", VAR_2, VAR_0.iv_index);

    return FUNC_1(VAR_3->beacon, VAR_2, VAR_3->net_id,
                               VAR_0.iv_index, VAR_1->auth);
}
