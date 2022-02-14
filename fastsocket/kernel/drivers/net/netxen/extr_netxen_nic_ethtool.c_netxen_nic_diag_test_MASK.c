
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ u64 ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_2, struct ethtool_test *VAR_3,
       u64 * VAR_4)
{
 FUNC_0(VAR_4, 0, sizeof(uint64_t) * VAR_1);
 if ((VAR_4[0] = FUNC_1(VAR_2)))
  VAR_3->flags |= VAR_0;

 if ((VAR_4[1] = (u64) FUNC_2(VAR_2)))
  VAR_3->flags |= VAR_0;
}
