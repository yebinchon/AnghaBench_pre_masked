
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_device {int dummy; } ;


 int*** VAR_0 ;

u16 FUNC_0( struct ieee80211_device* VAR_1, u8 VAR_2)
{

 u16 VAR_3[12] = {0x02 , 0x04 , 0x0b , 0x16 , 0x0c , 0x12 , 0x18 , 0x24 , 0x30 , 0x48 , 0x60 , 0x6c};
 u8 VAR_4 = 0;
 u8 VAR_5 = 0;

 if(VAR_2 < 12)
 {
  return VAR_3[VAR_2];
 }
 else
 {
  if (VAR_2 >= 0x10 && VAR_2 <= 0x1f)
  {
   VAR_4 = 0;
   VAR_5 = 0;


  }
  else if(VAR_2 >=0x20 && VAR_2 <= 0x2f )
  {
   VAR_4 = 1;
   VAR_5 = 0;


  }
  else if(VAR_2 >= 0x30 && VAR_2 <= 0x3f )
  {
   VAR_4 = 0;
   VAR_5 = 1;


  }
  else if(VAR_2 >= 0x40 && VAR_2 <= 0x4f )
  {
   VAR_4 = 1;
   VAR_5 = 1;


  }
  return VAR_0[VAR_4][VAR_5][VAR_2&0xf];
 }
}
