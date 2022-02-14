
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nv_ethtool_str {int dummy; } ;
struct net_device {int dummy; } ;




 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,int const) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2, u32 VAR_3, u8 *VAR_4)
{
 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_4, &VAR_0, FUNC_1(VAR_2, 129)*sizeof(struct nv_ethtool_str));
  break;
 case 128:
  FUNC_0(VAR_4, &VAR_1, FUNC_1(VAR_2, 128)*sizeof(struct nv_ethtool_str));
  break;
 }
}
