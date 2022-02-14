
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpu_rate {long rate; scalar_t__ xtal; scalar_t__ pll_rate; int ckctl_val; int dpllctl_val; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {scalar_t__ rate; } ;
struct TYPE_3__ {scalar_t__ rate; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 struct mpu_rate* VAR_3 ;
 struct clk VAR_4 ;

__attribute__((used)) static int FUNC_3(struct clk * VAR_5, unsigned long VAR_6)
{

 struct mpu_rate * VAR_7;

 if (VAR_5 != &VAR_4)
  return -VAR_0;

 for (VAR_7 = VAR_3; VAR_7->rate; VAR_7++) {
  if (VAR_7->xtal != VAR_2.rate)
   continue;


  if (FUNC_1(VAR_1!=0) && VAR_7->pll_rate != VAR_1)
   continue;


  if (VAR_7->rate <= VAR_6)
   break;
 }

 if (!VAR_7->rate)
  return -VAR_0;






 if (FUNC_0())
  FUNC_2(VAR_7->dpllctl_val, VAR_7->ckctl_val | 0x2000);
 else
  FUNC_2(VAR_7->dpllctl_val, VAR_7->ckctl_val);

 VAR_1 = VAR_7->pll_rate;
 return 0;
}
