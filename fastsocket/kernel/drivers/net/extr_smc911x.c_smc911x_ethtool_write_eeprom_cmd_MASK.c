
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc911x_local {int dummy; } ;
struct net_device {int dummy; } ;
typedef int cmd ;
typedef int addr ;


 int VAR_0 ;
 int FUNC_0 (struct smc911x_local*,int) ;
 struct smc911x_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline int FUNC_3(struct net_device *VAR_1,
             int VAR_2, int VAR_3)
{
 struct smc911x_local *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 if ((VAR_5 = FUNC_2(VAR_1))!=0)
  return VAR_5;
 FUNC_0(VAR_4, VAR_0 |
  ((VAR_2) & (0x7<<28)) |
  ((VAR_3) & 0xFF));
 return 0;
}
