
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk {int dummy; } ;
struct TYPE_2__ {int user_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static u32 FUNC_0(struct clk *VAR_3, u32 VAR_4)
{
 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;
 if (VAR_4 == VAR_1 && VAR_2.user_rate == 1)
  VAR_4 = VAR_1 - VAR_0;
 return (VAR_4 - (VAR_4 % (VAR_2.user_rate * VAR_0)));
}
