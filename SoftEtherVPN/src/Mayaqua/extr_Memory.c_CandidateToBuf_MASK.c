
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int Str; int LastSelectedTime; } ;
typedef int LIST ;
typedef TYPE_1__ CANDIDATE ;
typedef int BUF ;


 TYPE_1__* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,int ) ;

BUF *FUNC_9(LIST *VAR_0)
{
 BUF *VAR_1;
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_2();
 FUNC_7(VAR_1, FUNC_1(VAR_0));
 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0);VAR_2++)
 {
  CANDIDATE *VAR_3 = FUNC_0(VAR_0, VAR_2);
  FUNC_8(VAR_1, VAR_3->LastSelectedTime);
  FUNC_7(VAR_1, FUNC_4(VAR_3->Str));
  FUNC_6(VAR_1, VAR_3->Str, FUNC_5(VAR_3->Str));
 }

 FUNC_3(VAR_1, 0, 0);

 return VAR_1;
}
