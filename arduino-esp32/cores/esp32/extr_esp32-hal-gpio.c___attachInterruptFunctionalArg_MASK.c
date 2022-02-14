
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ voidFuncPtrArg ;
typedef scalar_t__ voidFuncPtr ;
typedef size_t uint8_t ;
struct TYPE_6__ {TYPE_1__* pin; } ;
struct TYPE_5__ {int functional; void* arg; scalar_t__ fn; } ;
struct TYPE_4__ {int int_ena; int int_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ,int,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;

extern void FUNC_5(uint8_t VAR_6, voidFuncPtrArg VAR_7, void * VAR_8, int VAR_9, bool VAR_10)
{
    static bool VAR_11 = 0;

    if(!VAR_11) {
        VAR_11 = 1;
        FUNC_1(VAR_1, (int)VAR_0, VAR_3, ((void*)0), &VAR_5);
    }


    if (VAR_4[VAR_6].functional && VAR_4[VAR_6].arg)
    {
     FUNC_0(VAR_4[VAR_6].arg);
    }
    VAR_4[VAR_6].fn = (voidFuncPtr)VAR_7;
    VAR_4[VAR_6].arg = VAR_8;
    VAR_4[VAR_6].functional = VAR_10;

    FUNC_2(VAR_5);
    if(FUNC_4(VAR_5)) {
        VAR_2.pin[VAR_6].int_ena = 1;
    } else {
        VAR_2.pin[VAR_6].int_ena = 4;
    }
    VAR_2.pin[VAR_6].int_type = VAR_9;
    FUNC_3(VAR_5);
}
