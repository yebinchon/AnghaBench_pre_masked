
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int scale_shift; long rate; scalar_t__ scale_reg; TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static long FUNC_1(struct clk *VAR_2)
{
 long VAR_3 = VAR_2->parent->rate * 18;

 VAR_3 /= (FUNC_0(VAR_2->scale_reg) >> VAR_2->scale_shift) & 0x3f;
 VAR_3 /= FUNC_0(VAR_1 + VAR_0) & 0x3f;
 VAR_3 = ((VAR_3 + 9) / 10) * 10;
 VAR_2->rate = VAR_3;

 return VAR_3;
}
