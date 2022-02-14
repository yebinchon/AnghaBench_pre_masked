
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt2x00_dev {scalar_t__ curr_band; int lna_gain; int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static u8 FUNC_2(struct rt2x00_dev *VAR_11)
{
 u8 VAR_12;

 if (VAR_11->curr_band == VAR_1) {
  if (FUNC_0(VAR_11, VAR_2) ||
      FUNC_0(VAR_11, VAR_3) ||
      FUNC_0(VAR_11, VAR_4) ||
      FUNC_0(VAR_11, VAR_5) ||
      FUNC_0(VAR_11, VAR_6) ||
      FUNC_0(VAR_11, VAR_7) ||
      FUNC_0(VAR_11, VAR_8) ||
      FUNC_0(VAR_11, VAR_9) ||
      FUNC_0(VAR_11, VAR_10))
   VAR_12 = 0x1c + (2 * VAR_11->lna_gain);
  else
   VAR_12 = 0x2e + VAR_11->lna_gain;
 } else {
  if (FUNC_0(VAR_11, VAR_7))
   VAR_12 = 0x22 + (VAR_11->lna_gain * 5) / 3;
  else if (FUNC_0(VAR_11, VAR_10))
   VAR_12 = 0x24 + (2 * VAR_11->lna_gain);
  else {
   if (!FUNC_1(VAR_0, &VAR_11->flags))
    VAR_12 = 0x32 + (VAR_11->lna_gain * 5) / 3;
   else
    VAR_12 = 0x3a + (VAR_11->lna_gain * 5) / 3;
  }
 }

 return VAR_12;
}
