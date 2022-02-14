
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ql_adapter {int ndev; int flags; } ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int) ;
 struct ql_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ql_adapter*,int ,int ,char*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct ql_adapter*,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_5,
    struct ethtool_test *VAR_6, u64 *VAR_7)
{
 struct ql_adapter *VAR_8 = FUNC_3(VAR_5);

 FUNC_1(VAR_7, 0, sizeof(u64) * VAR_2);

 if (FUNC_5(VAR_5)) {
  FUNC_7(VAR_3, &VAR_8->flags);
  if (VAR_6->flags == VAR_1) {

   if (FUNC_6(VAR_8, &VAR_7[0]))
    VAR_6->flags |= VAR_0;

  } else {

   VAR_7[0] = 0;
  }
  FUNC_0(VAR_3, &VAR_8->flags);



  FUNC_2(4 * 1000);
 } else {
  FUNC_4(VAR_8, VAR_4, VAR_8->ndev,
     "is down, Loopback test will fail.\n");
  VAR_6->flags |= VAR_0;
 }
}
