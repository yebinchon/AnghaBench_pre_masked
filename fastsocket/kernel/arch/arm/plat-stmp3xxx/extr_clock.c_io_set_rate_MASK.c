
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk {int scale_shift; scalar_t__ busy_reg; int scale_reg; TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct clk*) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5;
 int VAR_6, VAR_7 = 0, VAR_8 = 0x1f;

 VAR_5 = (VAR_2->parent->rate * 18 + VAR_3 - 1) / VAR_3;

 if (VAR_5 < 18 || VAR_5 > 35) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_4 = FUNC_0(VAR_2->scale_reg);
 VAR_4 &= ~(VAR_8 << VAR_2->scale_shift);
 FUNC_1(VAR_4 | (VAR_5 << VAR_2->scale_shift),
    VAR_2->scale_reg);
 if (VAR_2->busy_reg) {
  for (VAR_6 = 10000; VAR_6; VAR_6--)
   if (!FUNC_2(VAR_2))
    break;
  if (!VAR_6)
   VAR_7 = -VAR_1;
  else
   VAR_7 = 0;
 }
out:
 return VAR_7;
}
