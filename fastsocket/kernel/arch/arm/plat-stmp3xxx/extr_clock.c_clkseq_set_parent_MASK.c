
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk {int saved_div; int bypass_shift; scalar_t__ bypass_reg; } ;
struct TYPE_2__ {scalar_t__ rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 struct clk VAR_7 ;
 TYPE_1__ VAR_8 ;
 scalar_t__ FUNC_2 () ;
 struct clk VAR_9 ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_10, struct clk *VAR_11)
{
 int VAR_12 = -VAR_3;
 int VAR_13 = 8;


 if (VAR_11 == &VAR_9)
  VAR_13 = 4;

 if (VAR_10->bypass_reg) {
  FUNC_1(1 << VAR_10->bypass_shift, VAR_10->bypass_reg + VAR_13);

  VAR_12 = 0;
 }

 return VAR_12;
}
