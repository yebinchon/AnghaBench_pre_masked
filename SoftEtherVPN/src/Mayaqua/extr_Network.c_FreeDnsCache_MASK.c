
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {struct TYPE_4__* HostName; } ;
typedef TYPE_1__ DNSCACHE ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;

void FUNC_6()
{
 FUNC_3();
 {
  DNSCACHE *VAR_1;
  UINT VAR_2;
  for (VAR_2 = 0;VAR_2 < FUNC_2(VAR_0);VAR_2++)
  {

   VAR_1 = FUNC_1(VAR_0, VAR_2);
   FUNC_0(VAR_1->HostName);
   FUNC_0(VAR_1);
  }
 }
 FUNC_5();


 FUNC_4(VAR_0);
 VAR_0 = ((void*)0);
}
