
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct impd1_module {scalar_t__ base; struct clk* vcos; } ;
struct icst525_vco {int v; int r; int s; } ;
struct clk {struct impd1_module* data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct icst525_vco) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct clk *VAR_4, struct icst525_vco VAR_5)
{
 struct impd1_module *VAR_6 = VAR_4->data;
 int VAR_7 = VAR_4 - VAR_6->vcos;
 u32 VAR_8;

 VAR_8 = VAR_5.v | (VAR_5.r << 9) | (VAR_5.s << 16);

 FUNC_2(0xa05f, VAR_6->base + VAR_0);
 switch (VAR_7) {
 case 0:
  FUNC_2(VAR_8, VAR_6->base + VAR_1);
  break;
 case 1:
  FUNC_2(VAR_8, VAR_6->base + VAR_2);
  break;
 }
 FUNC_2(0, VAR_6->base + VAR_0);
}
