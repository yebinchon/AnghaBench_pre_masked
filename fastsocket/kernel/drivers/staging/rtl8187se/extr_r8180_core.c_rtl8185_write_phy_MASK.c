
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int,int) ;

void FUNC_1(struct net_device *VAR_0, u8 VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 VAR_1 |= 0x80;

 VAR_3= ((VAR_2<<8) | VAR_1);


 FUNC_0(VAR_0, 0x7f, ((VAR_3 & 0xff000000) >> 24));
 FUNC_0(VAR_0, 0x7e, ((VAR_3 & 0x00ff0000) >> 16));
 FUNC_0(VAR_0, 0x7d, ((VAR_3 & 0x0000ff00) >> 8));
 FUNC_0(VAR_0, 0x7c, ((VAR_3 & 0x000000ff) ));





}
