
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef int UINT ;
struct TYPE_5__ {scalar_t__ Address; int Size; } ;
typedef TYPE_1__ TRACKING_OBJECT ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_1__* FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;

void FUNC_7(UINT64 VAR_0, UINT VAR_1, UINT64 VAR_2)
{
 TRACKING_OBJECT *VAR_3;

 if (VAR_0 == 0)
 {
  return;
 }

 if ((FUNC_3() && FUNC_2()) == 0)
 {

  return;
 }

 FUNC_4();
 {
  VAR_3 = FUNC_5(VAR_0);
  if (VAR_3 == ((void*)0))
  {
   FUNC_6();
   return;
  }

  FUNC_0(VAR_3, 0);

  VAR_3->Size = VAR_1;
  VAR_3->Address = VAR_2;

  FUNC_1(VAR_3);
 }
 FUNC_6();
}
