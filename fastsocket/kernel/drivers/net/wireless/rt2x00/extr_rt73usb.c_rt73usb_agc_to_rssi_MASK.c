
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {int lna_gain; scalar_t__ curr_band; int cap_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct rt2x00_dev *VAR_4, int VAR_5)
{
 u8 VAR_6 = VAR_4->lna_gain;
 u8 VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_3);
 switch (VAR_7) {
 case 3:
  VAR_6 += 90;
  break;
 case 2:
  VAR_6 += 74;
  break;
 case 1:
  VAR_6 += 64;
  break;
 default:
  return 0;
 }

 if (VAR_4->curr_band == VAR_1) {
  if (FUNC_1(VAR_0, &VAR_4->cap_flags)) {
   if (VAR_7 == 3 || VAR_7 == 2)
    VAR_6 += 10;
  } else {
   if (VAR_7 == 3)
    VAR_6 += 6;
   else if (VAR_7 == 2)
    VAR_6 += 8;
  }
 }

 return FUNC_0(VAR_5, VAR_2) * 2 - VAR_6;
}
