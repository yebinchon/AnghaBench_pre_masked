
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (int) ;

u32 FUNC_2(struct net_device* VAR_0, u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3 = 0, VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 VAR_5 = FUNC_1(VAR_2);
 VAR_3 = (VAR_4 & VAR_2) >> VAR_5;

 return (VAR_3);
}
