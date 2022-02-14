
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int * Str; int LastSelectedTime; } ;
typedef int LIST ;
typedef TYPE_1__ CANDIDATE ;
typedef int BUF ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int) ;

LIST *FUNC_8(BUF *VAR_0)
{
 LIST *VAR_1;
 UINT VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_4(VAR_0);
 VAR_1 = FUNC_2();

 for (VAR_2 = 0;VAR_2 < VAR_3;VAR_2++)
 {
  CANDIDATE *VAR_4;
  wchar_t *VAR_5;
  UINT64 VAR_6;
  UINT VAR_7, VAR_8;
  VAR_6 = FUNC_5(VAR_0);
  VAR_7 = FUNC_4(VAR_0);
  if (VAR_7 >= 65536)
  {
   break;
  }
  VAR_8 = (VAR_7 + 1) * 2;
  VAR_5 = FUNC_7(VAR_8);
  if (FUNC_3(VAR_0, VAR_5, VAR_8) != VAR_8)
  {
   FUNC_1(VAR_5);
   break;
  }
  else
  {
   VAR_4 = FUNC_7(sizeof(CANDIDATE));
   VAR_4->LastSelectedTime = VAR_6;
   VAR_4->Str = VAR_5;
   FUNC_0(VAR_1, VAR_4);
  }
 }

 FUNC_6(VAR_1);
 return VAR_1;
}
