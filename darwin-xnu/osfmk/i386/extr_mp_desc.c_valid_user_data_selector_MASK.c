
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ ti; scalar_t__ index; } ;
typedef TYPE_1__ sel_t ;
typedef int boolean_t ;
struct TYPE_5__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (scalar_t__) ;
 TYPE_1__ FUNC_1 (scalar_t__) ;

boolean_t
FUNC_2(uint16_t VAR_5)
{
    sel_t VAR_6 = FUNC_1(VAR_5);

    if (VAR_5 == 0)
     return (VAR_4);

    if (VAR_6.ti == VAR_3)
 return (VAR_4);
    else if (VAR_6.index < VAR_2) {
 if ((FUNC_0(VAR_5)->access & VAR_0) == VAR_0)
     return (VAR_4);
    }
    return (VAR_1);
}
