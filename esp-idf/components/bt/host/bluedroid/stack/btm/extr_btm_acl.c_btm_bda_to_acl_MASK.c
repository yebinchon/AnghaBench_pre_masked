
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tBT_TRANSPORT ;
struct TYPE_4__ {scalar_t__ transport; int remote_addr; scalar_t__ in_use; } ;
typedef TYPE_1__ tACL_CONN ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {TYPE_1__* acl_db; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;

tACL_CONN *FUNC_2 (BD_ADDR VAR_3, tBT_TRANSPORT VAR_4)
{
    tACL_CONN *VAR_5 = &VAR_2.acl_db[0];
    UINT16 VAR_6;
    if (VAR_3) {
        for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_5++) {
            if ((VAR_5->in_use) && (!FUNC_1 (VAR_5->remote_addr, VAR_3, VAR_0))

                    && VAR_5->transport == VAR_4

               ) {
                FUNC_0 ("btm_bda_to_acl found\n");
                return (VAR_5);
            }
        }
    }


    return ((tACL_CONN *)((void*)0));
}
