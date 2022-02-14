
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct link_vars {scalar_t__ line_speed; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;

__attribute__((used)) static u8 FUNC_3(struct bnx2x_phy *VAR_3,
     struct link_params *VAR_4,
     struct link_vars *VAR_5)
{
 struct bnx2x *VAR_6 = VAR_4->bp;
 u16 VAR_7;
 u8 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_8) {
  FUNC_2(VAR_6, VAR_3,
    VAR_0, VAR_1,
    &VAR_7);
  if (VAR_7 & (1<<15)) {
   FUNC_0(VAR_2, "Tx is disabled\n");
   VAR_8 = 0;
   VAR_5->line_speed = 0;
  }
 }
 return VAR_8;
}
