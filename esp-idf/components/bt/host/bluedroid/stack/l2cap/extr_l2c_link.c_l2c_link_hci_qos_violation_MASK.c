
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_5__* p_first_ccb; } ;
struct TYPE_11__ {TYPE_1__ ccb_queue; } ;
typedef TYPE_4__ tL2C_LCB ;
struct TYPE_12__ {TYPE_3__* p_rcb; struct TYPE_12__* p_next_ccb; } ;
typedef TYPE_5__ tL2C_CCB ;
typedef int UINT16 ;
struct TYPE_9__ {scalar_t__ pL2CA_QoSViolationInd_Cb; } ;
struct TYPE_10__ {TYPE_2__ api; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ,int *) ;
 TYPE_4__* FUNC_1 (int ) ;

BOOLEAN FUNC_2 (UINT16 VAR_3)
{
    tL2C_LCB *VAR_4;

    tL2C_CCB *VAR_5;


    VAR_4 = FUNC_1 (VAR_3);


    if (!VAR_4) {
        return (VAR_0);
    }


    for (VAR_5 = VAR_4->ccb_queue.p_first_ccb; VAR_5; VAR_5 = VAR_5->p_next_ccb) {
        if (VAR_5->p_rcb->api.pL2CA_QoSViolationInd_Cb) {
            FUNC_0 (VAR_5, VAR_1, ((void*)0));
        }
    }

    return (VAR_2);
}
