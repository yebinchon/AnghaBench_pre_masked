
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_test {int flags; } ;
struct bnx2 {int dev; scalar_t__ link_up; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnx2*) ;
 int FUNC_1 (struct bnx2*,int) ;
 int FUNC_2 (struct bnx2*,int) ;
 int FUNC_3 (struct bnx2*,int) ;
 int FUNC_4 (struct bnx2*,int ) ;
 int FUNC_5 (struct bnx2*,int ) ;
 int FUNC_6 (struct bnx2*) ;
 scalar_t__ FUNC_7 (struct bnx2*) ;
 scalar_t__ FUNC_8 (struct bnx2*) ;
 int FUNC_9 (struct bnx2*) ;
 scalar_t__ FUNC_10 (struct bnx2*) ;
 scalar_t__ FUNC_11 (struct bnx2*) ;
 scalar_t__ FUNC_12 (struct bnx2*) ;
 int FUNC_13 (int*,int ,int) ;
 int FUNC_14 (int) ;
 struct bnx2* FUNC_15 (struct net_device*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void
FUNC_17(struct net_device *VAR_6, struct ethtool_test *VAR_7, u64 *VAR_8)
{
 struct bnx2 *VAR_9 = FUNC_15(VAR_6);

 FUNC_5(VAR_9, VAR_4);

 FUNC_13(VAR_8, 0, sizeof(u64) * VAR_1);
 if (VAR_7->flags & VAR_3) {
  int VAR_10;

  FUNC_3(VAR_9, 1);
  FUNC_4(VAR_9, VAR_0);
  FUNC_0(VAR_9);

  if (FUNC_12(VAR_9) != 0) {
   VAR_8[0] = 1;
   VAR_7->flags |= VAR_2;
  }
  if (FUNC_10(VAR_9) != 0) {
   VAR_8[1] = 1;
   VAR_7->flags |= VAR_2;
  }
  if ((VAR_8[2] = FUNC_9(VAR_9)) != 0)
   VAR_7->flags |= VAR_2;

  if (!FUNC_16(VAR_9->dev))
   FUNC_6(VAR_9);
  else {
   FUNC_1(VAR_9, 1);
   FUNC_2(VAR_9, 1);
  }


  for (VAR_10 = 0; VAR_10 < 7; VAR_10++) {
   if (VAR_9->link_up)
    break;
   FUNC_14(1000);
  }
 }

 if (FUNC_11(VAR_9) != 0) {
  VAR_8[3] = 1;
  VAR_7->flags |= VAR_2;
 }
 if (FUNC_7(VAR_9) != 0) {
  VAR_8[4] = 1;
  VAR_7->flags |= VAR_2;
 }

 if (FUNC_8(VAR_9) != 0) {
  VAR_8[5] = 1;
  VAR_7->flags |= VAR_2;

 }
 if (!FUNC_16(VAR_9->dev))
  FUNC_5(VAR_9, VAR_5);
}
