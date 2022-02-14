
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int const enable_shift; long rate; int const scale_shift; scalar_t__ scale_reg; scalar_t__ enable_reg; TYPE_1__* parent; } ;
struct TYPE_2__ {long rate; } ;


 int const FUNC_0 (scalar_t__) ;

__attribute__((used)) static long FUNC_1(struct clk *VAR_0)
{
 long VAR_1 = VAR_0->parent->rate;
 long VAR_2;
 const int VAR_3 = 0xff;

 if (VAR_0->enable_reg &&
   !(FUNC_0(VAR_0->enable_reg) & VAR_0->enable_shift))
  VAR_0->rate = 0;
 else {
  VAR_2 = (FUNC_0(VAR_0->scale_reg) >> VAR_0->scale_shift) & VAR_3;
  if (VAR_2)
   VAR_1 /= VAR_2;
  VAR_0->rate = VAR_1;
 }

 return VAR_0->rate;
}
