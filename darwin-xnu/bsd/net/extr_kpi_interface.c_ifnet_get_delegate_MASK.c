
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* ifnet_t ;
typedef int errno_t ;
struct TYPE_10__ {TYPE_2__* ifp; } ;
struct TYPE_11__ {TYPE_1__ if_delegated; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

errno_t
FUNC_5(ifnet_t VAR_2, ifnet_t *VAR_3)
{
 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_0);
 else if (!FUNC_1(VAR_2, 1))
  return (VAR_1);

 FUNC_3(VAR_2);
 if (VAR_2->if_delegated.ifp != ((void*)0))
  FUNC_4(VAR_2->if_delegated.ifp);
 *VAR_3 = VAR_2->if_delegated.ifp;
 FUNC_2(VAR_2);


 FUNC_0(VAR_2);

 return (0);
}
