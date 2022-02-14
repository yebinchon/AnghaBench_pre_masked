
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int scale_shift; long rate; int scale_reg; TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static long FUNC_1(struct clk *VAR_0)
{
 long VAR_1 = VAR_0->parent->rate * 18;
 int VAR_2 = 0x1f;

 VAR_1 /= (FUNC_0(VAR_0->scale_reg) >> VAR_0->scale_shift) & VAR_2;
 VAR_0->rate = VAR_1;

 return VAR_1;
}
