
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_vars {int line_speed; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_duplex; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;



 int VAR_15 ;
 int FUNC_3 (struct bnx2x_phy*,struct link_params*,int ) ;

__attribute__((used)) static void FUNC_4(struct bnx2x_phy *VAR_16,
        struct link_params *VAR_17,
        struct link_vars *VAR_18)
{
 struct bnx2x *VAR_19 = VAR_17->bp;
 u16 VAR_20;



 FUNC_0(VAR_19, VAR_16,
     VAR_8,
     VAR_9,
     &VAR_20);
 VAR_20 |= VAR_12;

 VAR_20 &= ~(VAR_11 |
        VAR_10 |
        VAR_13);
 FUNC_1(VAR_19, VAR_16,
     VAR_8,
     VAR_9,
     VAR_20);


 if (!(VAR_18->line_speed == VAR_15)) {

  u16 VAR_21;

  FUNC_0(VAR_19, VAR_16,
      VAR_7,
      VAR_1,
      &VAR_21);
  VAR_21 &= ~(VAR_2 |
     VAR_6|
     VAR_3);

  switch (VAR_18->line_speed) {
  case 129:
   VAR_21 |=
    VAR_4;
   break;
  case 128:
   VAR_21 |=
    VAR_5;
   break;
  case 130:

   break;
  default:

   FUNC_2(VAR_14, "Invalid line_speed 0x%x\n",
      VAR_18->line_speed);
   break;
  }


  if (VAR_16->req_duplex == VAR_0)
   VAR_21 |=
    VAR_3;
  FUNC_1(VAR_19, VAR_16,
      VAR_7,
      VAR_1,
      VAR_21);

 } else {

  FUNC_3(VAR_16, VAR_17, 0);
 }
}
