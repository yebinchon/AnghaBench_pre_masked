
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct clk {int name; TYPE_1__* dpll_data; } ;
struct TYPE_2__ {int modes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clk*,int) ;
 int FUNC_1 (struct clk*,int ) ;
 struct clk VAR_2 ;
 int FUNC_2 (struct clk*) ;
 scalar_t__ FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(struct clk *VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 if (VAR_3 == &VAR_2)
  return -VAR_1;

 if (!(VAR_3->dpll_data->modes & (1 << VAR_0)))
  return -VAR_1;

 FUNC_5("clock: configuring DPLL %s for low-power bypass\n",
   VAR_3->name);

 VAR_5 = FUNC_3(VAR_3);

 FUNC_0(VAR_3, VAR_0);

 VAR_4 = FUNC_1(VAR_3, 0);

 if (VAR_5)
  FUNC_2(VAR_3);
 else
  FUNC_4(VAR_3);

 return VAR_4;
}
