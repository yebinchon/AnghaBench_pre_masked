
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct net_device*,scalar_t__,int) ;

__attribute__((used)) static u8
FUNC_2(struct net_device* VAR_3, u16 VAR_4,u8 *VAR_5)
{
 u8 VAR_6 = 0;
 u8 VAR_7;



 FUNC_1(VAR_3, VAR_0+1, (u8)(VAR_4&0xff));
 FUNC_1(VAR_3, VAR_0+2, ((u8)((VAR_4>>8) &0x03) ) |
 (FUNC_0(VAR_3, VAR_0+2)&0xFC ));

 FUNC_1(VAR_3, VAR_0+3, 0x72);

 while(!(0x80 &FUNC_0(VAR_3, VAR_0+3))&&(VAR_6<100))
 {
  VAR_6++;
 }
 if(VAR_6<100)
 {
  *VAR_5=FUNC_0(VAR_3, VAR_0);
  VAR_7 = VAR_2;
 }
 else
 {
  *VAR_5 = 0xff;
  VAR_7 = VAR_1;
 }
 return VAR_7;
}
