
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__*,int ,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*,int ) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void
FUNC_6(struct net_device *VAR_4, struct ethtool_test *VAR_5,
       u64 *VAR_6)
{
 FUNC_0(VAR_6, 0, sizeof(u64) * VAR_3);

 VAR_6[0] = FUNC_4(VAR_4);
 if (VAR_6[0])
  VAR_5->flags |= VAR_0;

 VAR_6[1] = (u64) FUNC_5(VAR_4);
 if (VAR_6[1])
  VAR_5->flags |= VAR_0;

 if (VAR_5->flags & VAR_1) {
  VAR_6[2] = FUNC_2(VAR_4);
  if (VAR_6[2])
   VAR_5->flags |= VAR_0;

  VAR_6[3] = FUNC_3(VAR_4, VAR_2);
  if (VAR_6[3])
   VAR_5->flags |= VAR_0;

  VAR_6[4] = FUNC_1(VAR_4);
  if (VAR_6[4])
   VAR_5->flags |= VAR_0;
 }
}
