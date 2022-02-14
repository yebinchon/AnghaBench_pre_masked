
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef TYPE_1__* ifnet_t ;
typedef scalar_t__ errno_t ;
struct TYPE_5__ {scalar_t__ if_linkmiblen; int * if_linkmib; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,void*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

errno_t
FUNC_3(ifnet_t VAR_3, void *VAR_4, u_int32_t *VAR_5)
{
 errno_t VAR_6 = 0;

 if (VAR_3 == ((void*)0))
  return (VAR_0);

 FUNC_2(VAR_3);
 if (*VAR_5 < VAR_3->if_linkmiblen)
  VAR_6 = VAR_1;
 if (VAR_6 == 0 && VAR_3->if_linkmib == ((void*)0))
  VAR_6 = VAR_2;

 if (VAR_6 == 0) {
  *VAR_5 = VAR_3->if_linkmiblen;
  FUNC_0(VAR_3->if_linkmib, VAR_4, *VAR_5);
 }
 FUNC_1(VAR_3);

 return (VAR_6);
}
