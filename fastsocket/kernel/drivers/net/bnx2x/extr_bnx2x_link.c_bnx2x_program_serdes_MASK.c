
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_vars {scalar_t__ line_speed; } ;
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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

__attribute__((used)) static void FUNC_3(struct bnx2x_phy *VAR_17,
     struct link_params *VAR_18,
     struct link_vars *VAR_19)
{
 struct bnx2x *VAR_20 = VAR_18->bp;
 u16 VAR_21;


 FUNC_0(VAR_20, VAR_17,
     VAR_5,
     VAR_1, &VAR_21);
 VAR_21 &= ~(VAR_3 |
       VAR_2 |
       VAR_4);
 if (VAR_17->req_duplex == VAR_0)
  VAR_21 |= VAR_3;
 FUNC_1(VAR_20, VAR_17,
     VAR_5,
     VAR_1, VAR_21);




 FUNC_0(VAR_20, VAR_17,
     VAR_6,
     VAR_7, &VAR_21);

 FUNC_2(VAR_12, "MDIO_REG_BANK_SERDES_DIGITAL = 0x%x\n", VAR_21);

 VAR_21 &= ~(VAR_9 |
       VAR_10);

 if (!((VAR_19->line_speed == VAR_15) ||
       (VAR_19->line_speed == VAR_14) ||
       (VAR_19->line_speed == VAR_13))) {

  VAR_21 |= (VAR_11 |
       VAR_10);
  if (VAR_19->line_speed == VAR_16)
   VAR_21 |=
    VAR_8;
 }

 FUNC_1(VAR_20, VAR_17,
     VAR_6,
     VAR_7, VAR_21);

}
