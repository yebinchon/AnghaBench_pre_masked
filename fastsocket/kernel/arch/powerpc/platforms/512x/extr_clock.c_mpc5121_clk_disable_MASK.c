
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int flags; size_t reg; int bit; } ;
struct TYPE_2__ {int * sccr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct clk *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_2->flags & VAR_0) {
  VAR_3 = FUNC_0(&VAR_1->sccr[VAR_2->reg]);
  VAR_3 &= ~(1 << VAR_2->bit);
  FUNC_1(&VAR_1->sccr[VAR_2->reg], VAR_3);
 }
}
