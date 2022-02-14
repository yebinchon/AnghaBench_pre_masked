
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* Session; } ;
struct TYPE_5__ {int SessionKey; } ;
typedef int SOCK ;
typedef int PACK ;
typedef TYPE_2__ CONNECTION ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int * FUNC_3 (int ) ;

bool FUNC_4(CONNECTION *VAR_0, SOCK *VAR_1)
{
 PACK *VAR_2 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_3(VAR_0->Session->SessionKey);

 FUNC_2(VAR_2, VAR_0);

 if (FUNC_1(VAR_1, VAR_2) == 0)
 {
  FUNC_0(VAR_2);
  return 0;
 }
 FUNC_0(VAR_2);

 return 1;
}
