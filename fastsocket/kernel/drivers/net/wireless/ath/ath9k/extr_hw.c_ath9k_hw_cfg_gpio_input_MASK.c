
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int num_gpio_pins; } ;
struct ath_hw {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ath_hw*,int ,int,int) ;

void FUNC_3(struct ath_hw *VAR_6, u32 VAR_7)
{
 u32 VAR_8;

 FUNC_1(VAR_7 >= VAR_6->caps.num_gpio_pins);

 if (FUNC_0(VAR_6)) {
  VAR_8 = VAR_7;
  FUNC_2(VAR_6, VAR_0,
   (VAR_1 << VAR_8),
   (VAR_2 << VAR_8));
  return;
 }

 VAR_8 = VAR_7 << 1;
 FUNC_2(VAR_6,
  VAR_3,
  (VAR_5 << VAR_8),
  (VAR_4 << VAR_8));
}
