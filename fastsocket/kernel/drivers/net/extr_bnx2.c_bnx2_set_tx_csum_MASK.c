
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct bnx2 {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 struct bnx2* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_1, u32 VAR_2)
{
 struct bnx2 *VAR_3 = FUNC_3(VAR_1);

 if (FUNC_0(VAR_3) == VAR_0)
  return (FUNC_2(VAR_1, VAR_2));
 else
  return (FUNC_1(VAR_1, VAR_2));
}
