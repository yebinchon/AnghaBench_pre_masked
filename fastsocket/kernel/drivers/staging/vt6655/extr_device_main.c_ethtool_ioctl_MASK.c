
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int const member_0; int version; int driver; } ;
typedef int info ;
typedef int ethcmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 scalar_t__ FUNC_0 (int*,void*,int) ;
 int FUNC_1 (void*,struct ethtool_drvinfo*,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, void *VAR_5)
{
 u32 VAR_6;

 if (FUNC_0(&VAR_6, VAR_5, sizeof(VAR_6)))
  return -VAR_2;

        switch (VAR_6) {
 case 128: {
  struct ethtool_drvinfo VAR_7 = {128};
  FUNC_2(VAR_7.driver, VAR_0, sizeof(VAR_7.driver)-1);
  FUNC_2(VAR_7.version, VAR_1, sizeof(VAR_7.version)-1);
  if (FUNC_1(VAR_5, &VAR_7, sizeof(VAR_7)))
   return -VAR_2;
  return 0;
 }

        }

 return -VAR_3;
}
