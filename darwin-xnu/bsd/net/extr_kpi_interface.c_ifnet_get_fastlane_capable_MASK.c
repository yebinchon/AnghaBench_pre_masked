
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
typedef int boolean_t ;
struct TYPE_3__ {int if_eflags; } ;


 int VAR_0 ;
 int VAR_1 ;

errno_t
FUNC_0(ifnet_t VAR_2, boolean_t *VAR_3)
{
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_0);
 if (VAR_2->if_eflags & VAR_1)
  *VAR_3 = 1;
 else
  *VAR_3 = 0;
 return (0);
}
