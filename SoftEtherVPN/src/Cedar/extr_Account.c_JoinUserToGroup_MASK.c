
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; int ref; int Name; } ;
typedef TYPE_1__ USERGROUP ;
struct TYPE_7__ {int lock; int * GroupName; TYPE_1__* Group; } ;
typedef TYPE_2__ USER ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

void FUNC_6(USER *VAR_0, USERGROUP *VAR_1)
{

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 if (VAR_1 != ((void*)0))
 {

  FUNC_3(VAR_0->lock);
  {
   FUNC_3(VAR_1->lock);
   {
    if (VAR_0->Group != ((void*)0))
    {


     FUNC_4(VAR_0->Group);
     VAR_0->Group = ((void*)0);
     FUNC_2(VAR_0->GroupName);
     VAR_0->GroupName = ((void*)0);
    }

    VAR_0->GroupName = FUNC_1(VAR_1->Name);
    VAR_0->Group = VAR_1;
    FUNC_0(VAR_1->ref);
   }
   FUNC_5(VAR_1->lock);
  }
  FUNC_5(VAR_0->lock);
 }
 else
 {

  FUNC_3(VAR_0->lock);
  {
   if (VAR_0->Group != ((void*)0))
   {

    FUNC_4(VAR_0->Group);
    VAR_0->Group = ((void*)0);
    FUNC_2(VAR_0->GroupName);
    VAR_0->GroupName = ((void*)0);
   }
  }
  FUNC_5(VAR_0->lock);
 }
}
