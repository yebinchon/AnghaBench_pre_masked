
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ,int) ;

void
FUNC_2(
 struct net_device *VAR_2,
 u32 VAR_3
 )
{

 u8 VAR_4;
 u8 VAR_5;

 VAR_5 = (u8)((VAR_3 & 0x0000ff00) >> 8);
 FUNC_1(VAR_2, VAR_0, VAR_3);

 {
  FUNC_1(VAR_2, VAR_0, VAR_3 & 0xffffff7f);
  VAR_4 = FUNC_0(VAR_2, VAR_1);


 }
}
