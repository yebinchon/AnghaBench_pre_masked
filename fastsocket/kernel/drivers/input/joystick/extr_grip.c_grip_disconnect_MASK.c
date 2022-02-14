
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grip {scalar_t__* dev; } ;
struct gameport {int dummy; } ;


 int FUNC_0 (struct gameport*) ;
 struct grip* FUNC_1 (struct gameport*) ;
 int FUNC_2 (struct gameport*,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct grip*) ;

__attribute__((used)) static void FUNC_5(struct gameport *VAR_0)
{
 struct grip *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++)
  if (VAR_1->dev[VAR_2])
   FUNC_3(VAR_1->dev[VAR_2]);
 FUNC_0(VAR_0);
 FUNC_2(VAR_0, ((void*)0));
 FUNC_4(VAR_1);
}
