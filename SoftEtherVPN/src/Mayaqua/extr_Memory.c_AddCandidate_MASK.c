
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {struct TYPE_13__* Str; void* LastSelectedTime; } ;
typedef TYPE_1__ wchar_t ;
typedef int UINT ;
typedef int LIST ;
typedef TYPE_1__ CANDIDATE ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 () ;
 void* FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (int) ;

void FUNC_10(LIST *VAR_0, wchar_t *VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 bool VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }
 if (VAR_2 == 0)
 {
  VAR_2 = 0x7fffffff;
 }


 VAR_1 = FUNC_6(VAR_1);
 FUNC_8(VAR_1);

 VAR_4 = 0;
 for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_0);VAR_3++)
 {
  CANDIDATE *VAR_5 = FUNC_3(VAR_0, VAR_3);
  if (FUNC_7(VAR_5->Str, VAR_1) == 0)
  {

   VAR_5->LastSelectedTime = FUNC_5();
   VAR_4 = 1;
   break;
  }
 }

 if (VAR_4 == 0)
 {

  CANDIDATE *VAR_6 = FUNC_9(sizeof(CANDIDATE));
  VAR_6->LastSelectedTime = FUNC_5();
  VAR_6->Str = FUNC_6(VAR_1);
  FUNC_2(VAR_0, VAR_6);
 }


 FUNC_1(VAR_1);



 if (FUNC_4(VAR_0) > VAR_2)
 {
  while (FUNC_4(VAR_0) > VAR_2)
  {
   UINT VAR_7 = FUNC_4(VAR_0) - 1;
   CANDIDATE *VAR_8 = FUNC_3(VAR_0, VAR_7);
   FUNC_0(VAR_0, VAR_8);
   FUNC_1(VAR_8->Str);
   FUNC_1(VAR_8);
  }
 }
}
