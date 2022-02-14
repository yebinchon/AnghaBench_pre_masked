
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bt_mesh_subnet {scalar_t__ net_idx; } ;
struct bt_mesh_app_key {scalar_t__ net_idx; } ;
struct TYPE_7__ {struct bt_mesh_app_key* app_keys; } ;
struct TYPE_5__ {scalar_t__ net_idx; } ;
struct TYPE_6__ {TYPE_1__ hb_pub; } ;


 int FUNC_0 (struct bt_mesh_app_key*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_4__ VAR_3 ;
 int FUNC_3 (struct bt_mesh_app_key*,int) ;
 int FUNC_4 (struct bt_mesh_subnet*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 TYPE_2__* VAR_4 ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct bt_mesh_subnet*,int ,int) ;

void FUNC_9(struct bt_mesh_subnet *VAR_5, bool VAR_6)
{
    int VAR_7;

    FUNC_1("NetIdx 0x%03x store %u", VAR_5->net_idx, VAR_6);

    if (VAR_4 && VAR_4->hb_pub.net_idx == VAR_5->net_idx) {
        FUNC_7(VAR_4);

        if (FUNC_2(VAR_2) && VAR_6) {
            FUNC_6();
        }
    }


    for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3.app_keys); VAR_7++) {
        struct bt_mesh_app_key *VAR_8 = &VAR_3.app_keys[VAR_7];

        if (VAR_8->net_idx == VAR_5->net_idx) {
            FUNC_3(VAR_8, VAR_6);
        }
    }

    if (FUNC_2(VAR_1)) {
        FUNC_5(VAR_5->net_idx);
    }

    if (FUNC_2(VAR_2) && VAR_6) {
        FUNC_4(VAR_5);
    }

    (void)FUNC_8(VAR_5, 0, sizeof(*VAR_5));
    VAR_5->net_idx = VAR_0;
}
