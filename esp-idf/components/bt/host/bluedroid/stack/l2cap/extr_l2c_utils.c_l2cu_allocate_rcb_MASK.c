
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int state; } ;
struct TYPE_6__ {TYPE_1__ ucd; scalar_t__ psm; scalar_t__ in_use; } ;
typedef TYPE_2__ tL2C_RCB ;
typedef scalar_t__ UINT16 ;
struct TYPE_7__ {TYPE_2__* rcb_pool; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;

tL2C_RCB *FUNC_0 (UINT16 VAR_4)
{
    tL2C_RCB *VAR_5 = &VAR_3.rcb_pool[0];
    UINT16 VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_5++) {
        if (!VAR_5->in_use) {
            VAR_5->in_use = VAR_2;
            VAR_5->psm = VAR_4;

            VAR_5->ucd.state = VAR_0;

            return (VAR_5);
        }
    }


    return (((void*)0));
}
