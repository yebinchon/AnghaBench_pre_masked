
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int flags; } ;
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
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_4 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_5 (struct link_params*,struct bnx2x_phy*) ;
 int FUNC_6 (struct bnx2x*,struct link_params*) ;
 int FUNC_7 (struct link_params*,struct bnx2x_phy*,int ) ;
 int FUNC_8 (struct bnx2x*,struct bnx2x_phy*,int) ;

__attribute__((used)) static void FUNC_9(struct bnx2x_phy *VAR_10,
          struct link_params *VAR_11)
{
 struct bnx2x *VAR_12 = VAR_11->bp;
 u16 VAR_13, VAR_14;
 FUNC_7(VAR_11, VAR_10, 0);
 FUNC_6(VAR_12, VAR_11);
 FUNC_5(VAR_11, VAR_10);

 FUNC_8(VAR_12, VAR_10, 1);



 FUNC_2(VAR_12, VAR_10, VAR_3,
      VAR_4, 0xBFFF);

 FUNC_2(VAR_12, VAR_10, VAR_3,
      VAR_5, 0xfffe);


 FUNC_0(VAR_12, VAR_10, VAR_2,
     VAR_1, 0);

 FUNC_2(VAR_12, VAR_10, VAR_3,
      VAR_6,
      ~0x10);

 FUNC_2(VAR_12, VAR_10, VAR_3,
      VAR_9, 0xff00);
 VAR_14 = FUNC_4(VAR_10, VAR_11);

 FUNC_1(VAR_12, VAR_10, VAR_3,
   VAR_7, &VAR_13);
 VAR_13 |= (0x11 << VAR_14);
 if (VAR_10->flags & VAR_0)
  VAR_13 |= (0x22 << VAR_14);
 FUNC_3(VAR_12, VAR_10, VAR_3,
    VAR_7, VAR_13);

 FUNC_1(VAR_12, VAR_10, VAR_3,
   VAR_8, &VAR_13);
 VAR_13 &= ~(0x0303 << (VAR_14 << 1));
 VAR_13 |= (0x0101 << (VAR_14 << 1));
 if (VAR_10->flags & VAR_0) {
  VAR_13 &= ~(0x0c0c << (VAR_14 << 1));
  VAR_13 |= (0x0404 << (VAR_14 << 1));
 }

 FUNC_3(VAR_12, VAR_10, VAR_3,
    VAR_8, VAR_13);

 FUNC_5(VAR_11, VAR_10);

}
