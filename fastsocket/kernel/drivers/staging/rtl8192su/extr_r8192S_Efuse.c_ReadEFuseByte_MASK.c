
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct net_device*,scalar_t__) ;
 int FUNC_2 (struct net_device*,scalar_t__,int) ;

void
FUNC_3(struct net_device* VAR_1,u16 VAR_2, u8 *VAR_3)
{


 u32 VAR_4;
 u8 VAR_5;
 u16 VAR_6;



 FUNC_2(VAR_1, VAR_0+1, (VAR_2 & 0xff));
 VAR_5 = FUNC_0(VAR_1, VAR_0+2);
 FUNC_2(VAR_1, VAR_0+2, ((VAR_2 >> 8) & 0x03) | (VAR_5 & 0xfc));


 VAR_5 = FUNC_0(VAR_1, VAR_0+3);
 FUNC_2(VAR_1, VAR_0+3, (VAR_5 & 0x7f));


 VAR_6 = 0;
 VAR_4 = FUNC_1(VAR_1, VAR_0);

 while(!(((VAR_4 >> 24) & 0xff) & 0x80) && (VAR_6<10000))
 {
  VAR_4 = FUNC_1(VAR_1, VAR_0);
  VAR_6++;
 }
 *VAR_3 = (u8)(VAR_4 & 0xff);
}
