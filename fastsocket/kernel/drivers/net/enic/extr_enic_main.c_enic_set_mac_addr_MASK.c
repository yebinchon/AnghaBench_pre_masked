
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_assign_type; int addr_len; int dev_addr; } ;
struct enic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct enic*) ;
 scalar_t__ FUNC_1 (struct enic*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int ) ;
 struct enic* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, char *VAR_3)
{
 struct enic *VAR_4 = FUNC_5(VAR_2);

 if (FUNC_0(VAR_4) || FUNC_1(VAR_4)) {
  if (!FUNC_2(VAR_3) && !FUNC_3(VAR_3))
   return -VAR_0;
 } else {
  if (!FUNC_2(VAR_3))
   return -VAR_0;
 }

 FUNC_4(VAR_2->dev_addr, VAR_3, VAR_2->addr_len);
 VAR_2->addr_assign_type &= ~VAR_1;

 return 0;
}
