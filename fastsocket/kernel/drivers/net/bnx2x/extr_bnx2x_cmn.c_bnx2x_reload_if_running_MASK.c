
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnx2x*,int ) ;
 int FUNC_1 (struct bnx2x*,int ,int) ;
 struct bnx2x* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct net_device *VAR_2)
{
 struct bnx2x *VAR_3 = FUNC_2(VAR_2);

 if (FUNC_4(!FUNC_3(VAR_2)))
  return 0;

 FUNC_1(VAR_3, VAR_1, 1);
 return FUNC_0(VAR_3, VAR_0);
}
