
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk {int rate; int scale_reg; TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_0, u32 VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_0->scale_reg);
 VAR_2 &= ~(0x1f << 2);
 VAR_2 |= ((VAR_0->parent->rate / VAR_0->rate) - 1) << 2;
 FUNC_1(VAR_2, VAR_0->scale_reg);
 VAR_0->rate = VAR_1;
 return 0;
}
