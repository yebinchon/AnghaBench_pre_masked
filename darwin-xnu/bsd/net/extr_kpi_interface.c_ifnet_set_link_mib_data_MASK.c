
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
typedef TYPE_1__* ifnet_t ;
typedef int errno_t ;
struct TYPE_5__ {int if_linkmiblen; void* if_linkmib; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

errno_t
FUNC_2(ifnet_t VAR_1, void *VAR_2, u_int32_t VAR_3)
{
 if (VAR_1 == ((void*)0))
  return (VAR_0);

 FUNC_1(VAR_1);
 VAR_1->if_linkmib = (void*)VAR_2;
 VAR_1->if_linkmiblen = VAR_3;
 FUNC_0(VAR_1);
 return (0);
}
