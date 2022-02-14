
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ psm; int security_flags; } ;
typedef TYPE_1__ tBTM_SEC_SERV_REC ;
typedef scalar_t__ UINT16 ;
struct TYPE_5__ {TYPE_1__* p_out_serv; TYPE_1__* sec_serv_rec; } ;
typedef int CONNECTION_TYPE ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;

tBTM_SEC_SERV_REC *FUNC_0 (CONNECTION_TYPE VAR_6, UINT16 VAR_7)
{
    tBTM_SEC_SERV_REC *VAR_8 = &VAR_5.sec_serv_rec[0];
    int VAR_9;
    BOOLEAN VAR_10;



    if ( VAR_6 & VAR_2 ) {
        VAR_10 = VAR_4;
    } else {
        VAR_10 = VAR_3;
    }




    if (VAR_10 && VAR_5.p_out_serv && VAR_5.p_out_serv->psm == VAR_7) {


        return VAR_5.p_out_serv;
    }


    for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++, VAR_8++) {
        if ( (VAR_8->security_flags & VAR_0) && (VAR_8->psm == VAR_7) ) {
            return (VAR_8);
        }
    }
    return (((void*)0));
}
