
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Active; int lock; int IfList; } ;
typedef TYPE_1__ L3SW ;
typedef int L3IF ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

bool FUNC_5(L3SW *VAR_0, char *VAR_1)
{
 L3IF *VAR_2;
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_3(VAR_0->lock);
 {
  if (VAR_0->Active == 0)
  {
   VAR_2 = FUNC_2(VAR_0, VAR_1);

   if (VAR_2 != ((void*)0))
   {

    FUNC_0(VAR_0->IfList, VAR_2);
    FUNC_1(VAR_2);

    VAR_3 = 1;
   }
  }
 }
 FUNC_4(VAR_0->lock);

 return VAR_3;
}
