
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8180_priv {scalar_t__ card_8185; } ;
typedef int s8 ;
typedef int s32 ;
typedef scalar_t__ WIRELESS_MODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

s8 FUNC_0(struct r8180_priv *VAR_3, WIRELESS_MODE VAR_4,
   s32 VAR_5)
{
  bool VAR_6 = 1;
 s8 VAR_7 = 0;





 if (VAR_3->card_8185 >= VAR_0) {
  s32 VAR_8 = 0;

  if (VAR_4 == VAR_2) {
   VAR_6 = 0;
   VAR_8 = (2 * VAR_5);

   if (VAR_8 < 0)
    VAR_7 = 0;
   else if (VAR_8 > 40)
    VAR_7 = 40;
   else
    VAR_7 = (s8)VAR_8;
  } else if (VAR_4 == VAR_1) {
   VAR_6 = 0;
   VAR_8 = (4 * VAR_5) - 52;

   if(VAR_8 < 0)
    VAR_7 = 0;
   else if (VAR_8 > 28)
    VAR_7 = 28;
   else
    VAR_7 = (s8)VAR_8;
  }
 }






 if (VAR_6) {
  if (VAR_5 < 0)
   VAR_7 = 0;
  else if (VAR_5 > 35)
   VAR_7 = 35;
  else
   VAR_7 = (u8)VAR_5;
 }

 return VAR_7;
}
