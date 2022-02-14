
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe {int cnt; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct stripe*) ;
 scalar_t__ FUNC_3 (struct stripe*) ;
 int FUNC_4 (struct stripe*) ;

__attribute__((used)) static void FUNC_5(struct stripe *VAR_0)
{
 if (FUNC_1(&VAR_0->cnt)) {
  FUNC_0(FUNC_2(VAR_0));
  FUNC_4(VAR_0);
 } else
  FUNC_0(FUNC_3(VAR_0) < 0);
}
