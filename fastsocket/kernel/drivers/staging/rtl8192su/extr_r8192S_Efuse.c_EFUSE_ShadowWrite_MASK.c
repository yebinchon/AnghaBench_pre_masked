
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int,int) ;
 int FUNC_1 (struct net_device*,int,int) ;
 int FUNC_2 (struct net_device*,int,scalar_t__) ;

extern void
FUNC_3( struct net_device* VAR_0, u8 VAR_1, u16 VAR_2,u32 VAR_3)
{


 if (VAR_2 >= 0x18 && VAR_2 <= 0x1F)
  return;

 if (VAR_1 == 1)
  FUNC_0(VAR_0, VAR_2, (u8)VAR_3);
 else if (VAR_1 == 2)
  FUNC_1(VAR_0, VAR_2, (u16)VAR_3);
 else if (VAR_1 == 4)
  FUNC_2(VAR_0, VAR_2, (u32)VAR_3);

}
