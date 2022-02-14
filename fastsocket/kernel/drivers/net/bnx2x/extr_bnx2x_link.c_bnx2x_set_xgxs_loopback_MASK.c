
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_line_speed; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct bnx2x*,scalar_t__) ;
 int FUNC_3 (struct bnx2x*,scalar_t__,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_phy*,int,scalar_t__,int*) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_phy*,int,scalar_t__,int) ;
 int FUNC_6 (struct link_params*,struct bnx2x_phy*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct bnx2x_phy *VAR_10,
        struct link_params *VAR_11)
{
 u8 VAR_12 = VAR_11->port;
 struct bnx2x *VAR_13 = VAR_11->bp;

 if (VAR_10->req_line_speed != VAR_9) {
  u32 VAR_14 = 0;

  FUNC_1(VAR_7, "XGXS 10G loopback enable\n");

  if (!FUNC_0(VAR_13)) {

   VAR_14 = FUNC_2(VAR_13, (VAR_8 +
            VAR_12*0x18));

   FUNC_3(VAR_13, VAR_8 + VAR_12*0x18,
          0x5);
  }

  FUNC_5(VAR_13, VAR_10,
     5,
     (VAR_4 +
      (VAR_0 & 0xf)),
     0x2800);

  FUNC_5(VAR_13, VAR_10,
     5,
     (VAR_5 +
      (VAR_1 & 0xf)),
     0x6041);
  FUNC_7(200);

  FUNC_6(VAR_11, VAR_10);

  if (!FUNC_0(VAR_13)) {

   FUNC_3(VAR_13, VAR_8 + VAR_12*0x18,
          VAR_14);
  }
 } else {
  u16 VAR_15;
  FUNC_1(VAR_7, "XGXS 1G loopback enable\n");
  FUNC_4(VAR_13, VAR_10, 5,
    (VAR_6 +
    (VAR_2 & 0xf)),
    &VAR_15);
  FUNC_5(VAR_13, VAR_10, 5,
     (VAR_6 +
     (VAR_2 & 0xf)),
     VAR_15 |
     VAR_3);
 }
}
