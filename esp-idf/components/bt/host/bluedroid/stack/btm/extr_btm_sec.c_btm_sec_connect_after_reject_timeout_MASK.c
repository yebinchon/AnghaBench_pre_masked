
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int sec_bd_name; int dev_class; int bd_addr; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
struct TYPE_7__ {int (* p_auth_complete_callback ) (int ,int ,int ,int ) ;} ;
struct TYPE_6__ {scalar_t__ param; } ;
struct TYPE_9__ {TYPE_2__ api; TYPE_3__* p_collided_dev_rec; TYPE_1__ sec_collision_tle; } ;
typedef int TIMER_LIST_ENT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 TYPE_5__ VAR_3 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_6 (TIMER_LIST_ENT *VAR_4)
{
    tBTM_SEC_DEV_REC *VAR_5 = VAR_3.p_collided_dev_rec;
    FUNC_2(VAR_4);

    FUNC_0 ("btm_sec_connect_after_reject_timeout()\n");
    VAR_3.sec_collision_tle.param = 0;
    VAR_3.p_collided_dev_rec = 0;

    if (FUNC_4(VAR_5) != VAR_0) {
        FUNC_1 ("Security Manager: btm_sec_connect_after_reject_timeout: failed to start connection\n");

        FUNC_3 (VAR_1);

        if (VAR_3.api.p_auth_complete_callback) {
            (*VAR_3.api.p_auth_complete_callback) (VAR_5->bd_addr, VAR_5->dev_class,
                                                    VAR_5->sec_bd_name, VAR_2);
        }
    }
}
