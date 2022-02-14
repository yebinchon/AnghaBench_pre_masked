
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {int SockList; } ;
typedef TYPE_1__ SOCKLIST ;
typedef int SOCK ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int ** FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(SOCKLIST *VAR_0)
{
 SOCK **VAR_1;
 UINT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_4(VAR_0->SockList);
 {
  VAR_2 = FUNC_3(VAR_0->SockList);
  VAR_1 = FUNC_6(VAR_0->SockList);

  FUNC_0(VAR_0->SockList);
 }
 FUNC_7(VAR_0->SockList);

 for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
 {
  SOCK *VAR_4 = VAR_1[VAR_3];

  FUNC_1(VAR_4);
  FUNC_5(VAR_4);
 }

 FUNC_2(VAR_1);
}
