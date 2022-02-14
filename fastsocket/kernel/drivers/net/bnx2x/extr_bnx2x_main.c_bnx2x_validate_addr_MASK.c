
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (struct bnx2x*) ;
 struct bnx2x* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1)
{
 struct bnx2x *VAR_2 = FUNC_4(VAR_1);


 if (FUNC_1(VAR_2))
  FUNC_3(VAR_2);

 if (!FUNC_2(VAR_2, VAR_1->dev_addr)) {
  FUNC_0("Non-valid Ethernet address\n");
  return -VAR_0;
 }
 return 0;
}
