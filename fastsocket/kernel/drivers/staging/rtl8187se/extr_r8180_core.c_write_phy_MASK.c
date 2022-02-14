
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int ,int) ;

void FUNC_5(struct net_device *VAR_2, u8 VAR_3, u8 VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_5 = 0xff0000;
 VAR_5 |= VAR_3;
 VAR_5 |= 0x80;
 VAR_5 |= (VAR_4<<8);


 FUNC_4(VAR_2,VAR_1, VAR_5);

 VAR_5= 0xffff00;
 VAR_5 |= VAR_3;

 FUNC_4(VAR_2,VAR_1, VAR_5);
 for(VAR_6=0;VAR_6<VAR_0;VAR_6++){
  VAR_5=FUNC_3(VAR_2,VAR_1);
  VAR_5= VAR_5 & 0xff0000;
  VAR_5= VAR_5 >> 16;
  if(VAR_5 == VAR_4){
   FUNC_1(VAR_2);
   FUNC_2(3);
   return;
  }else{
   FUNC_1(VAR_2);
   FUNC_2(3);
  }
 }
 FUNC_0 ("Phy writing %x %x failed!", VAR_3,VAR_4);
}
