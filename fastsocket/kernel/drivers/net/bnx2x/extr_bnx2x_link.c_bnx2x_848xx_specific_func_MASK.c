
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int type; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*) ;
 int FUNC_1 (struct bnx2x*,int ,int) ;
 int FUNC_2 (struct bnx2x_phy*,struct bnx2x*,int) ;

__attribute__((used)) static void FUNC_3(struct bnx2x_phy *VAR_4,
          struct link_params *VAR_5,
          u32 VAR_6)
{
 struct bnx2x *VAR_7 = VAR_5->bp;
 switch (VAR_6) {
 case 128:
  if ((VAR_4->type != VAR_2) &&
      (VAR_4->type != VAR_3)) {

   FUNC_2(VAR_4, VAR_7, VAR_5->port);
  }




  FUNC_1(VAR_7, VAR_1 + VAR_5->port*4,
         1 << VAR_0);

  FUNC_0(VAR_7, VAR_4);
  break;
 }
}
