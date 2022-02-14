
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct clk {scalar_t__ rate; } ;
struct TYPE_2__ {scalar_t__ rate; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_3, u32 VAR_4)
{
 if (VAR_4) {
  FUNC_0(VAR_3);
  FUNC_2(500);
  VAR_3->rate = VAR_0;
  VAR_2.rate = VAR_1;
 } else {
  FUNC_1(VAR_3);
  VAR_3->rate = 0;
  VAR_2.rate = 0;
 }
 return 0;
}
