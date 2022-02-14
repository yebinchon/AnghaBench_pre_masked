
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
struct TYPE_3__ {int if_lastchange; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

errno_t
FUNC_1(ifnet_t VAR_1)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 FUNC_0(&VAR_1->if_lastchange);

 return (0);
}
