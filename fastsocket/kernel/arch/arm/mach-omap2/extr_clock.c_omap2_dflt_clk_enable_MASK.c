
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk {int flags; int enable_bit; TYPE_1__* ops; int * enable_reg; int name; } ;
struct TYPE_2__ {scalar_t__ find_idlest; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct clk *VAR_1)
{
 u32 VAR_2;

 if (FUNC_4(VAR_1->enable_reg == ((void*)0))) {
  FUNC_3("clock.c: Enable for %s without enable code\n",
         VAR_1->name);
  return 0;
 }

 VAR_2 = FUNC_0(VAR_1->enable_reg);
 if (VAR_1->flags & VAR_0)
  VAR_2 &= ~(1 << VAR_1->enable_bit);
 else
  VAR_2 |= (1 << VAR_1->enable_bit);
 FUNC_1(VAR_2, VAR_1->enable_reg);
 VAR_2 = FUNC_0(VAR_1->enable_reg);

 if (VAR_1->ops->find_idlest)
  FUNC_2(VAR_1);

 return 0;
}
