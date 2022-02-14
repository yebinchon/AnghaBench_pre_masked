
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int ,int) ;

void FUNC_1 (struct net_device *VAR_0, u8 VAR_1, u32 VAR_2)
{
 VAR_2 = VAR_2 & 0xff;
 FUNC_0(VAR_0, VAR_1, VAR_2 | 0x10000);
}
