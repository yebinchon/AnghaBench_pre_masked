
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int ) ;
 int VAR_0 ;
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
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_5 (struct link_params*,struct bnx2x_phy*) ;

__attribute__((used)) static void FUNC_6(struct bnx2x_phy *VAR_13,
          struct link_params *VAR_14)
{
 u16 VAR_15;
 struct bnx2x *VAR_16 = VAR_14->bp;

 FUNC_0(VAR_16, VAR_13, VAR_4,
     VAR_0, 0);


 FUNC_2(VAR_16, VAR_13, VAR_5,
      VAR_12, ~(1<<13));

 FUNC_5(VAR_14, VAR_13);

 FUNC_2(VAR_16, VAR_13, VAR_3,
      VAR_10, ~(1<<1));
 FUNC_4(VAR_16, VAR_13, VAR_1,
    VAR_2, 0);

 FUNC_1(VAR_16, VAR_13, VAR_5,
   VAR_8, &VAR_15);
 VAR_15 &= ~(1<<5);
 VAR_15 |= (1<<6);
 FUNC_4(VAR_16, VAR_13, VAR_5,
    VAR_8, VAR_15);


 FUNC_3(VAR_16, VAR_13, VAR_5,
     VAR_11, 0x1f);

 FUNC_3(VAR_16, VAR_13, VAR_5,
     VAR_9, (1<<7));

 FUNC_1(VAR_16, VAR_13, VAR_5,
   VAR_6, &VAR_15);
 VAR_15 &= ~(3<<14);
 VAR_15 |= (1<<15);
 FUNC_4(VAR_16, VAR_13, VAR_5,
    VAR_6, VAR_15);
 FUNC_4(VAR_16, VAR_13, VAR_5,
    VAR_7, 0x835A);


 FUNC_0(VAR_16, VAR_13, VAR_4,
     VAR_0, 0);

 FUNC_3(VAR_16, VAR_13, VAR_5,
     VAR_12, (1<<13));

 FUNC_5(VAR_14, VAR_13);
}
