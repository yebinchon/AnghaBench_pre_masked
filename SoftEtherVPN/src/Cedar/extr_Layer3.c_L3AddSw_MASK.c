
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int L3SwList; } ;
struct TYPE_11__ {int ref; } ;
typedef TYPE_1__ L3SW ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;

L3SW *FUNC_7(CEDAR *VAR_0, char *VAR_1)
{
 L3SW *VAR_2 = ((void*)0);

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_3(VAR_0->L3SwList);
 {
  VAR_2 = FUNC_2(VAR_0, VAR_1);

  if (VAR_2 == ((void*)0))
  {
   VAR_2 = FUNC_4(VAR_0, VAR_1);

   FUNC_1(VAR_0->L3SwList, VAR_2);

   FUNC_0(VAR_2->ref);
  }
  else
  {
   FUNC_5(VAR_2);
   VAR_2 = ((void*)0);
  }
 }
 FUNC_6(VAR_0->L3SwList);

 return VAR_2;
}
