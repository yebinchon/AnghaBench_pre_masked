
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_vars {scalar_t__ phy_flags; scalar_t__ link_up; } ;
struct link_params {int port; int chip_id; int lfa_base; int link_flags; struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_2 (struct link_params*,struct link_vars*,int) ;
 int FUNC_3 (struct bnx2x*,int ,int,int) ;
 int FUNC_4 (struct link_params*,int ) ;
 int FUNC_5 (struct link_params*,int) ;
 int FUNC_6 (struct link_params*,int) ;
 int FUNC_7 (int,int) ;

int FUNC_8(struct link_params *VAR_2,
          struct link_vars *VAR_3)
{
 struct bnx2x *VAR_4 = VAR_2->bp;
 VAR_3->link_up = 0;
 VAR_3->phy_flags = 0;
 VAR_2->link_flags &= ~VAR_1;
 if (!VAR_2->lfa_base)
  return FUNC_2(VAR_2, VAR_3, 1);




 FUNC_1(VAR_4, VAR_0 + VAR_2->port*4, 1);





 if (!FUNC_0(VAR_4))
  FUNC_3(VAR_4, VAR_2->chip_id, VAR_2->port, 0);

 if (FUNC_0(VAR_4)) {
  FUNC_6(VAR_2, 0);
  FUNC_5(VAR_2, 0);
 }

 FUNC_7(10000, 20000);




 FUNC_4(VAR_2, 0);







 if (!FUNC_0(VAR_4))
  FUNC_3(VAR_4, VAR_2->chip_id, VAR_2->port, 1);

 if (FUNC_0(VAR_4)) {
  FUNC_6(VAR_2, 1);
  FUNC_5(VAR_2, 1);
 }

 FUNC_1(VAR_4, VAR_0 + VAR_2->port*4, 0);
 return 0;
}
