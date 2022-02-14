
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpu_rate {long rate; scalar_t__ xtal; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {scalar_t__ rate; } ;


 long VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct mpu_rate* VAR_2 ;
 struct clk VAR_3 ;

__attribute__((used)) static long FUNC_0(struct clk * VAR_4, unsigned long VAR_5)
{

 struct mpu_rate * VAR_6;
 long VAR_7;

 if (VAR_4 != &VAR_3)
  return -VAR_0;

 VAR_7 = -VAR_0;

 for (VAR_6 = VAR_2; VAR_6->rate; VAR_6++) {
  if (VAR_6->xtal != VAR_1.rate)
   continue;

  VAR_7 = VAR_6->rate;


  if (VAR_6->rate <= VAR_5)
   break;
 }

 return VAR_7;
}
