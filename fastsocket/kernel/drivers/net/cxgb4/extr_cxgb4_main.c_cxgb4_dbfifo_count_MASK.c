
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 struct adapter* FUNC_2 (struct net_device const*) ;
 int FUNC_3 (struct adapter*,int ) ;

unsigned int FUNC_4(const struct net_device *VAR_1, int VAR_2)
{
 struct adapter *VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;

 VAR_4 = FUNC_3(VAR_3, VAR_0);
 return VAR_2 ? FUNC_1(VAR_4) : FUNC_0(VAR_4);
}
