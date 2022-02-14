
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int parent; int id; } ;
struct TYPE_2__ {unsigned int divisor; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 unsigned int FUNC_4 (unsigned long) ;
 TYPE_1__* FUNC_5 (struct clk*) ;

__attribute__((used)) static unsigned long FUNC_6(struct clk *VAR_2)
{
 unsigned long VAR_3 = FUNC_1(VAR_0);
 unsigned int VAR_4;

 VAR_3 >>= FUNC_0(VAR_2->id);
 VAR_3 &= VAR_1;

 if (FUNC_3(VAR_3))
  VAR_4 = FUNC_5(VAR_2)->divisor;
 else
  VAR_4 = FUNC_4(VAR_3);

 return FUNC_2(VAR_2->parent) / VAR_4;
}
