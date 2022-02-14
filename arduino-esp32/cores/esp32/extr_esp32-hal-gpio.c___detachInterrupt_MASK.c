
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_6__ {TYPE_1__* pin; } ;
struct TYPE_5__ {int functional; int * arg; int * fn; } ;
struct TYPE_4__ {scalar_t__ int_type; scalar_t__ int_ena; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;

extern void FUNC_3(uint8_t VAR_3)
{
    FUNC_1(VAR_2);
    if (VAR_1[VAR_3].functional && VAR_1[VAR_3].arg)
    {
     FUNC_0(VAR_1[VAR_3].arg);
    }
    VAR_1[VAR_3].fn = ((void*)0);
    VAR_1[VAR_3].arg = ((void*)0);
    VAR_1[VAR_3].functional = 0;

    VAR_0.pin[VAR_3].int_ena = 0;
    VAR_0.pin[VAR_3].int_type = 0;
    FUNC_2(VAR_2);
}
