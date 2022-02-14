
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct link_vars {scalar_t__ mac_type; int link_up; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct link_params*,int *,int *) ;

void FUNC_2(struct link_params *VAR_2, struct link_vars *VAR_3,
    u32 VAR_4[2],
    u32 VAR_5[2])
{

 struct bnx2x *VAR_6 = VAR_2->bp;

 FUNC_0(VAR_1, "pfc statistic\n");

 if (!VAR_3->link_up)
  return;

 if (VAR_3->mac_type == VAR_0) {
  FUNC_0(VAR_1, "About to read PFC stats from EMAC\n");
  FUNC_1(VAR_2, VAR_4,
     VAR_5);
 }
}
