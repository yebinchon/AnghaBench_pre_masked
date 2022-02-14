
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {struct TYPE_4__* Buffer; struct TYPE_4__* FileName; } ;
typedef TYPE_1__ HC ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;

void FUNC_5()
{
 UINT VAR_2;
 for (VAR_2 = 0;VAR_2 < FUNC_3(VAR_0);VAR_2++)
 {
  HC *VAR_3 = FUNC_2(VAR_0, VAR_2);
  FUNC_1(VAR_3->FileName);
  if (VAR_3->Buffer != ((void*)0))
  {
   FUNC_1(VAR_3->Buffer);
  }
  FUNC_1(VAR_3);
 }
 FUNC_4(VAR_0);

 FUNC_0(VAR_1);
 VAR_1 = ((void*)0);
 VAR_0 = ((void*)0);
}
