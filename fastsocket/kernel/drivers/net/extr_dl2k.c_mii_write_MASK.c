
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int,int) ;

__attribute__((used)) static int
FUNC_2 (struct net_device *VAR_0, int VAR_1, int VAR_2, u16 VAR_3)
{
 u32 VAR_4;


 FUNC_1 (VAR_0, 0xffffffff, 32);


 VAR_4 = (0x5002 << 16) | (VAR_1 << 23) | (VAR_2 << 18) | VAR_3;
 FUNC_1 (VAR_0, VAR_4, 32);

 FUNC_0 (VAR_0);
 return 0;
}
