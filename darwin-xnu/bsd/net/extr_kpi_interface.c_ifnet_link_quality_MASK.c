
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* ifnet_t ;
struct TYPE_6__ {int lqm_state; } ;
struct TYPE_7__ {TYPE_1__ if_interface_state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

int
FUNC_2(ifnet_t VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_1);
 VAR_2 = VAR_1->if_interface_state.lqm_state;
 FUNC_0(VAR_1);

 return (VAR_2);
}
