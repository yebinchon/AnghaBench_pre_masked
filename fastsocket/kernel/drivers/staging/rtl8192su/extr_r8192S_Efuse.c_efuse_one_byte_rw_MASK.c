
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
 int VAR_2 ;
 int FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct net_device*,scalar_t__,int) ;

int FUNC_2(struct net_device* VAR_3, u8 VAR_4, u16 VAR_5, u8 *VAR_6)
{
 u32 VAR_7;

 u8 VAR_8 = 0;
 u8 VAR_9=0;



 FUNC_1(VAR_3, VAR_0+1, (u8)(VAR_5&0xff));
 VAR_9 = ((u8)((VAR_5>>8) &0x03) ) | (FUNC_0(VAR_3, VAR_0+2)&0xFC );
 FUNC_1(VAR_3, VAR_0+2, VAR_9);

 if(VAR_2==VAR_4){

  FUNC_1(VAR_3, VAR_0+3, 0x72);

  while(!(0x80 & FUNC_0(VAR_3, VAR_0+3)) && (VAR_8<100) ){
   VAR_8++;
  }
  if(VAR_8<100){
   *VAR_6=FUNC_0(VAR_3, VAR_0);
   VAR_7 = VAR_2;
  }
  else
  {
   *VAR_6 = 0;
   VAR_7 = VAR_1;
  }

 }
 else{

  FUNC_1(VAR_3, VAR_0, *VAR_6);

  FUNC_1(VAR_3, VAR_0+3, 0xF2);

  while((0x80 & FUNC_0(VAR_3, VAR_0+3)) && (VAR_8<100) ){
   VAR_8++;
  }
  if(VAR_8<100)
  {
   *VAR_6=FUNC_0(VAR_3, VAR_0);
   VAR_7 = VAR_2;
  }
  else
  {
   *VAR_6 = 0;
   VAR_7 = VAR_1;
  }

 }
 return VAR_7;
}
