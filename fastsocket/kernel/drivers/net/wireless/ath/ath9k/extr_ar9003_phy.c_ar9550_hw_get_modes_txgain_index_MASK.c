
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw {int dummy; } ;
struct ath9k_channel {int chanmode; int channel; } ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct ath_hw *VAR_1,
         struct ath9k_channel *VAR_2)
{
 int VAR_3;

 switch (VAR_2->chanmode) {
 case 136:
 case 135:
  if (VAR_2->channel <= 5350)
   VAR_3 = 1;
  else if ((VAR_2->channel > 5350) && (VAR_2->channel <= 5600))
   VAR_3 = 3;
  else
   VAR_3 = 5;
  break;

 case 133:
 case 134:
  if (VAR_2->channel <= 5350)
   VAR_3 = 2;
  else if ((VAR_2->channel > 5350) && (VAR_2->channel <= 5600))
   VAR_3 = 4;
  else
   VAR_3 = 6;
  break;

 case 131:
 case 130:
 case 132:
  VAR_3 = 8;
  break;

 case 128:
 case 129:
  VAR_3 = 7;
  break;

 default:
  VAR_3 = -VAR_0;
 }

 return VAR_3;
}
