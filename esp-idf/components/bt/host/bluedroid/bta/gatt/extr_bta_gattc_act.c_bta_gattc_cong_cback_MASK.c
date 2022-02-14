
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* p_rcb; } ;
typedef TYPE_3__ tBTA_GATTC_CLCB ;
struct TYPE_7__ {int congested; int conn_id; } ;
struct TYPE_10__ {TYPE_1__ congest; } ;
typedef TYPE_4__ tBTA_GATTC ;
typedef int UINT16 ;
struct TYPE_8__ {int (* p_cback ) (int ,TYPE_4__*) ;} ;
typedef int BOOLEAN ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_2 (UINT16 VAR_1, BOOLEAN VAR_2)
{
    tBTA_GATTC_CLCB *VAR_3;
    tBTA_GATTC VAR_4;

    if ((VAR_3 = FUNC_0(VAR_1)) != ((void*)0)) {
        if (VAR_3->p_rcb->p_cback) {
            VAR_4.congest.conn_id = VAR_1;
            VAR_4.congest.congested = VAR_2;

            (*VAR_3->p_rcb->p_cback)(VAR_0, &VAR_4);
        }
    }
}
