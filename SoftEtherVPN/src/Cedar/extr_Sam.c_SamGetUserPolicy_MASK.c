
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lock; int * Policy; int ref; } ;
typedef TYPE_1__ USERGROUP ;
struct TYPE_7__ {int lock; TYPE_1__* Group; int * Policy; } ;
typedef TYPE_2__ USER ;
typedef int POLICY ;
typedef int HUB ;


 TYPE_2__* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;

POLICY *FUNC_9(HUB *VAR_0, char *VAR_1)
{
 POLICY *VAR_2 = ((void*)0);

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_1(VAR_0);
 {
  USER *VAR_3;
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  if (VAR_3)
  {
   USERGROUP *VAR_4 = ((void*)0);
   FUNC_5(VAR_3->lock);
   {
    if (VAR_3->Policy != ((void*)0))
    {
     VAR_2 = FUNC_4(VAR_3->Policy);
    }

    VAR_4 = VAR_3->Group;

    if (VAR_4 != ((void*)0))
    {
     FUNC_3(VAR_4->ref);
    }
   }
   FUNC_8(VAR_3->lock);

   FUNC_7(VAR_3);
   VAR_3 = ((void*)0);

   if (VAR_2 == ((void*)0))
   {
    if (VAR_4 != ((void*)0))
    {
     FUNC_5(VAR_4->lock);
     {
      VAR_2 = FUNC_4(VAR_4->Policy);
     }
     FUNC_8(VAR_4->lock);
    }
   }

   if (VAR_4 != ((void*)0))
   {
    FUNC_6(VAR_4);
   }
  }
 }
 FUNC_2(VAR_0);

 return VAR_2;
}
