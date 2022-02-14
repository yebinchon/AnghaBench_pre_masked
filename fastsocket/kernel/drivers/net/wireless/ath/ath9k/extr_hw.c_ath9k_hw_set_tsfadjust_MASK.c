
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int misc_mode; } ;


 int VAR_0 ;

void FUNC_0(struct ath_hw *VAR_1, bool VAR_2)
{
 if (VAR_2)
  VAR_1->misc_mode |= VAR_0;
 else
  VAR_1->misc_mode &= ~VAR_0;
}
