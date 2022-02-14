
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int) ;

__attribute__((used)) static void FUNC_4(struct link_params *VAR_4,
          struct bnx2x_phy *VAR_5,
          u16 VAR_6)
{
 u16 VAR_7 = 0;
 u16 VAR_8 = VAR_2;
 struct bnx2x *VAR_9 = VAR_4->bp;

 u8 VAR_10 = FUNC_2(VAR_5, VAR_4);

 FUNC_0(VAR_9, VAR_5, VAR_0,
   VAR_1, &VAR_7);
 VAR_7 &= ~(0xf << (VAR_10 << 2));

 switch (VAR_6) {
 case 129:
 case 130:
  VAR_8 = VAR_2;
  break;
 case 128:
 case 131:
  VAR_8 = VAR_3;
  break;
 default:
  break;
 }

 VAR_7 |= (VAR_8 << (VAR_10 << 2));
 FUNC_1(VAR_9, VAR_5, VAR_0,
    VAR_1, VAR_7);

 FUNC_0(VAR_9, VAR_5, VAR_0,
   VAR_1, &VAR_7);


 FUNC_3(VAR_9, VAR_5, 1);
 FUNC_3(VAR_9, VAR_5, 0);

}
