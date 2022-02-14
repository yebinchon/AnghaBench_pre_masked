
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sleep_save {int val; int reg; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct sleep_save *VAR_0, int VAR_1)
{
 for (; VAR_1 > 0; VAR_1--, VAR_0++) {
  VAR_0->val = FUNC_1(VAR_0->reg);
  FUNC_0("saved %p value %08lx\n", VAR_0->reg, VAR_0->val);
 }
}
