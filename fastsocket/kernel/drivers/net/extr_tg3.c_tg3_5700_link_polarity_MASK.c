
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tg3 {scalar_t__ led_ctrl; int phy_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct tg3 *VAR_4, u32 VAR_5)
{
 if (VAR_4->led_ctrl == VAR_0)
  return 1;
 else if ((VAR_4->phy_id & VAR_3) == VAR_2) {
  if (VAR_5 != VAR_1)
   return 1;
 } else if (VAR_5 == VAR_1)
  return 1;

 return 0;
}
