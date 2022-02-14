
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ transport; int remote_bd_addr; scalar_t__ in_use; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef scalar_t__ tBT_TRANSPORT ;
struct TYPE_5__ {TYPE_1__* lcb_pool; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;

tL2C_LCB *FUNC_1 (BD_ADDR VAR_3, tBT_TRANSPORT VAR_4)
{
    int VAR_5;
    tL2C_LCB *VAR_6 = &VAR_2.lcb_pool[0];

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++, VAR_6++) {
        if ((VAR_6->in_use) &&

                VAR_6->transport == VAR_4 &&

                (!FUNC_0 (VAR_6->remote_bd_addr, VAR_3, VAR_0))) {
            return (VAR_6);
        }
    }


    return (((void*)0));
}
