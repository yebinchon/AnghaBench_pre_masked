
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dev; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,scalar_t__*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct link_params *VAR_6,
          struct bnx2x_phy *VAR_7,
          u8 VAR_8)
{
 struct bnx2x *VAR_9 = VAR_6->bp;
 u16 VAR_10;
 u16 VAR_11;
 FUNC_0(VAR_9, VAR_7,
     VAR_4,
     VAR_2, &VAR_10);


 FUNC_1(VAR_9, VAR_7,
     VAR_4,
     VAR_2,
     (VAR_10 |
      VAR_3));
 if (VAR_8)
  FUNC_3(VAR_9, VAR_6->port);


 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  FUNC_5(5);


  FUNC_0(VAR_9, VAR_7,
      VAR_4,
      VAR_2,
      &VAR_10);

  if (!(VAR_10 & VAR_3)) {
   FUNC_5(5);
   return 0;
  }
 }

 FUNC_4(VAR_9->dev, "Warning: PHY was not initialized,"
         " Port %d\n",
    VAR_6->port);
 FUNC_2(VAR_5, "BUG! XGXS is still in reset!\n");
 return -VAR_0;

}
