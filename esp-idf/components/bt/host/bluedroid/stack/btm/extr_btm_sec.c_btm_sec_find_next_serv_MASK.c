
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int security_flags; scalar_t__ psm; } ;
typedef TYPE_1__ tBTM_SEC_SERV_REC ;
struct TYPE_6__ {TYPE_1__* sec_serv_rec; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;

__attribute__((used)) static tBTM_SEC_SERV_REC *FUNC_0 (tBTM_SEC_SERV_REC *VAR_3)
{
    tBTM_SEC_SERV_REC *VAR_4 = &VAR_2.sec_serv_rec[0];
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_4++) {
        if ((VAR_4->security_flags & VAR_0)
                && (VAR_4->psm == VAR_3->psm) ) {
            if (VAR_3 != VAR_4) {
                return (VAR_4);
            }
        }
    }
    return (((void*)0));
}
