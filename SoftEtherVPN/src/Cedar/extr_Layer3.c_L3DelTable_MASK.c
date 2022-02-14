
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Active; int lock; int TableList; } ;
typedef int L3TABLE ;
typedef TYPE_1__ L3SW ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

bool FUNC_5(L3SW *VAR_0, L3TABLE *VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_0->lock);
 {
  if (VAR_0->Active == 0)
  {
   L3TABLE *VAR_3 = FUNC_3(VAR_0->TableList, VAR_1);

   if (VAR_3 != ((void*)0))
   {
    FUNC_0(VAR_0->TableList, VAR_3);
    FUNC_1(VAR_3);

    VAR_2 = 1;
   }
  }
 }
 FUNC_4(VAR_0->lock);

 return VAR_2;
}
