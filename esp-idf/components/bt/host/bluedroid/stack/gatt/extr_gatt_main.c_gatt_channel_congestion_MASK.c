
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int tcb_idx; } ;
typedef TYPE_2__ tGATT_TCB ;
struct TYPE_7__ {int (* p_congestion_cb ) (int ,int ) ;} ;
struct TYPE_9__ {TYPE_1__ app_cb; int gatt_if; scalar_t__ in_use; } ;
typedef TYPE_3__ tGATT_REG ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_10__ {TYPE_3__* cl_rcb; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 TYPE_6__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(tGATT_TCB *VAR_3, BOOLEAN VAR_4)
{
    UINT8 VAR_5 = 0;
    tGATT_REG *VAR_6 = ((void*)0);
    UINT16 VAR_7;


    if (VAR_3 != ((void*)0) && VAR_4 == VAR_0) {
        FUNC_1(VAR_3);
    }


    for (VAR_5 = 0, VAR_6 = VAR_2.cl_rcb ; VAR_5 < VAR_1; VAR_5++, VAR_6++) {
        if (VAR_6->in_use) {
            if (VAR_6->app_cb.p_congestion_cb) {
                VAR_7 = FUNC_0(VAR_3->tcb_idx, VAR_6->gatt_if);
                (*VAR_6->app_cb.p_congestion_cb)(VAR_7, VAR_4);
            }
        }
    }
}
