
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ transport; int remote_addr; scalar_t__ in_use; } ;
typedef TYPE_2__ tACL_CONN ;
typedef size_t UINT8 ;
struct TYPE_6__ {TYPE_1__* pm_mode_db; TYPE_2__* acl_db; } ;
struct TYPE_4__ {int state; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,int ) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(BD_ADDR VAR_4)
{
    tACL_CONN *VAR_5 = &VAR_3.acl_db[0];
    UINT8 VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++, VAR_5++) {
        if ((VAR_5->in_use) && (!FUNC_1 (VAR_5->remote_addr, VAR_4, VAR_0))

                && VAR_5->transport == VAR_1

           ) {

            FUNC_0( "btm_pm_find_acl_ind ind:%d, st:%d", VAR_6, VAR_3.pm_mode_db[VAR_6].state);

            break;
        }
    }
    return VAR_6;
}
