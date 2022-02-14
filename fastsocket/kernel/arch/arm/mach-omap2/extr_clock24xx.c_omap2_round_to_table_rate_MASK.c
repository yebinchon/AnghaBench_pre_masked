
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct prcm_config {long mpu_speed; int flags; scalar_t__ xtal_speed; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {scalar_t__ rate; } ;


 long VAR_0 ;
 int VAR_1 ;
 struct prcm_config* VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct clk VAR_4 ;

__attribute__((used)) static long FUNC_0(struct clk *VAR_5, unsigned long VAR_6)
{
 struct prcm_config *VAR_7;
 long VAR_8;

 if (VAR_5 != &VAR_4)
  return -VAR_0;

 VAR_8 = -VAR_0;

 for (VAR_7 = VAR_2; VAR_7->mpu_speed; VAR_7++) {
  if (!(VAR_7->flags & VAR_1))
   continue;
  if (VAR_7->xtal_speed != VAR_3.rate)
   continue;

  VAR_8 = VAR_7->mpu_speed;


  if (VAR_7->mpu_speed <= VAR_6)
   break;
 }
 return VAR_8;
}
