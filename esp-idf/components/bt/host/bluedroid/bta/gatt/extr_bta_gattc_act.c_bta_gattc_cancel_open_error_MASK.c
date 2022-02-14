
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tBTA_GATTC_DATA ;
struct TYPE_7__ {TYPE_1__* p_rcb; } ;
typedef TYPE_2__ tBTA_GATTC_CLCB ;
struct TYPE_8__ {int status; } ;
typedef TYPE_3__ tBTA_GATTC ;
struct TYPE_6__ {int (* p_cback ) (int ,TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_3__*) ;

void FUNC_2(tBTA_GATTC_CLCB *VAR_2, tBTA_GATTC_DATA *VAR_3)
{
    tBTA_GATTC VAR_4;
    FUNC_0(VAR_3);

    VAR_4.status = VAR_1;

    if ( VAR_2 && VAR_2->p_rcb && VAR_2->p_rcb->p_cback ) {
        (*VAR_2->p_rcb->p_cback)(VAR_0, &VAR_4);
    }
}
