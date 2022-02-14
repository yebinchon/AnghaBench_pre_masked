
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct net_device*,scalar_t__,int) ;

extern u8
FUNC_2(struct net_device* VAR_2, u16 VAR_3)
{
 u8 VAR_4;
 u8 VAR_5 = {0x00};
 u8 VAR_6 = {0x00};
 u32 VAR_7=0;

 if (VAR_3 < VAR_1)
 {

  VAR_6 = VAR_3 & 0xFF;
  FUNC_1(VAR_2, VAR_0+1, VAR_6);
  VAR_5 = FUNC_0(VAR_2, VAR_0+2);

  VAR_6 = ((VAR_3 >> 8) & 0x03) | (VAR_5 & 0xFC);
  FUNC_1(VAR_2, VAR_0+2, VAR_6);


  VAR_5 = FUNC_0(VAR_2, VAR_0+3);
  VAR_6 = VAR_5 & 0x7F;
  FUNC_1(VAR_2, VAR_0+3, VAR_6);


  VAR_5 = FUNC_0(VAR_2, VAR_0+3);
  while(!(VAR_5 & 0x80))
  {
   VAR_5 = FUNC_0(VAR_2, VAR_0+3);
   VAR_7++;
   if(VAR_7==1000)
   {
    VAR_7=0;
    break;
   }
  }
  VAR_4=FUNC_0(VAR_2, VAR_0);
  return VAR_4;
 }
 else
  return 0xFF;

}
