
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_2__ {int (* exitHaltToOff ) (int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

kern_return_t
FUNC_2(int VAR_3)
{
    kern_return_t VAR_4 = VAR_0;

    if (VAR_2
 && VAR_1 != ((void*)0)
 && VAR_1->exitHaltToOff != ((void*)0))
 VAR_4 = VAR_1->exitHaltToOff(FUNC_0(VAR_3));

    return(VAR_4);
}
