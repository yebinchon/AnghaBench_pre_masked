
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct igbvf_adapter {int state; } ;
struct ethtool_test {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct igbvf_adapter*,int *) ;
 int FUNC_2 (int) ;
 struct igbvf_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2,
                            struct ethtool_test *VAR_3, u64 *VAR_4)
{
 struct igbvf_adapter *VAR_5 = FUNC_3(VAR_2);

 FUNC_4(VAR_1, &VAR_5->state);





 if (FUNC_1(VAR_5, &VAR_4[0]))
  VAR_3->flags |= VAR_0;

 FUNC_0(VAR_1, &VAR_5->state);
 FUNC_2(4 * 1000);
}
