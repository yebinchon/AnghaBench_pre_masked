
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct link_params {int loopback_mode; struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_line_speed; int supported; int flags; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int ) ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_5 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_6 (struct link_params*,struct bnx2x_phy*) ;

__attribute__((used)) static void FUNC_7(struct bnx2x_phy *VAR_11,
     struct link_params *VAR_12)
{
 struct bnx2x *VAR_13 = VAR_12->bp;
 u16 VAR_14;
 u32 VAR_15;
 FUNC_1(VAR_8, "Setting Warpcore loopback type %x, speed %d\n",
         VAR_12->loopback_mode, VAR_11->req_line_speed);

 if (VAR_11->req_line_speed < VAR_9 ||
     VAR_11->supported & VAR_10) {



  FUNC_0(VAR_13, VAR_11, VAR_2,
      VAR_1, 0);

  FUNC_3(VAR_13, VAR_11, VAR_3,
      VAR_6,
      0x10);

  VAR_15 = FUNC_5(VAR_11, VAR_12);
  FUNC_2(VAR_13, VAR_11, VAR_3,
    VAR_7, &VAR_14);
  VAR_14 |= (1<<VAR_15);
  if (VAR_11->flags & VAR_0)
   VAR_14 |= (2<<VAR_15);
  FUNC_4(VAR_13, VAR_11, VAR_3,
     VAR_7,
     VAR_14);


  FUNC_6(VAR_12, VAR_11);
 } else {

  FUNC_3(VAR_13, VAR_11, VAR_3,
      VAR_4,
      0x4000);
  FUNC_3(VAR_13, VAR_11, VAR_3,
      VAR_5, 0x1);
 }
}
