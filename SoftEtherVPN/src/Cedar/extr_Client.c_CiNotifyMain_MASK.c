
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int NotifyCancelList; scalar_t__ Halt; } ;
typedef int SOCKSET ;
typedef int SOCK ;
typedef TYPE_1__ CLIENT ;
typedef int CANCEL ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_9 (int *,char*,int,int) ;
 int FUNC_10 (int ) ;

void FUNC_11(CLIENT *VAR_1, SOCK *VAR_2)
{
 CANCEL *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 VAR_3 = FUNC_6();
 FUNC_5(VAR_1->NotifyCancelList);
 {
  FUNC_0(VAR_1->NotifyCancelList, VAR_3);
 }
 FUNC_10(VAR_1->NotifyCancelList);


 while (1)
 {
  char VAR_4 = '@';
  SOCKSET VAR_5;
  FUNC_4(&VAR_5);
  FUNC_1(&VAR_5, VAR_2);
  FUNC_8(&VAR_5, VAR_0, VAR_3, ((void*)0));

  if (VAR_1->Halt)
  {

   break;
  }


  if (FUNC_9(VAR_2, &VAR_4, 1, 0) == 0)
  {

   break;
  }
 }


 FUNC_3(VAR_2);


 FUNC_5(VAR_1->NotifyCancelList);
 {
  FUNC_2(VAR_1->NotifyCancelList, VAR_3);
 }
 FUNC_10(VAR_1->NotifyCancelList);

 FUNC_7(VAR_3);
}
