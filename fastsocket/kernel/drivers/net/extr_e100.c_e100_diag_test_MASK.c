
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nic {int mii; } ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;
struct ethtool_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nic*) ;
 int FUNC_1 (struct nic*) ;
 int FUNC_2 (struct nic*,int ) ;
 int FUNC_3 (struct nic*) ;
 int FUNC_4 (struct nic*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int *,struct ethtool_cmd*) ;
 int FUNC_7 (int *,struct ethtool_cmd*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 struct nic* FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct net_device*) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_5,
 struct ethtool_test *VAR_6, u64 *VAR_7)
{
 struct ethtool_cmd VAR_8;
 struct nic *VAR_9 = FUNC_10(VAR_5);
 int VAR_10, VAR_11;

 FUNC_5(VAR_7, 0, VAR_0 * sizeof(u64));
 VAR_7[0] = !FUNC_8(&VAR_9->mii);
 VAR_7[1] = FUNC_1(VAR_9);
 if (VAR_6->flags & VAR_2) {


  VAR_11 = FUNC_6(&VAR_9->mii, &VAR_8);

  if (FUNC_11(VAR_5))
   FUNC_0(VAR_9);
  VAR_7[2] = FUNC_3(VAR_9);
  VAR_7[3] = FUNC_2(VAR_9, VAR_3);
  VAR_7[4] = FUNC_2(VAR_9, VAR_4);


  VAR_11 = FUNC_7(&VAR_9->mii, &VAR_8);

  if (FUNC_11(VAR_5))
   FUNC_4(VAR_9);
 }
 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++)
  VAR_6->flags |= VAR_7[VAR_10] ? VAR_1 : 0;

 FUNC_9(4 * 1000);
}
