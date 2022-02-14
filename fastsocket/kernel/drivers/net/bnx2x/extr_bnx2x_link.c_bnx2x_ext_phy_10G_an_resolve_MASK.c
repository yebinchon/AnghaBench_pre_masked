
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_vars {int link_status; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct bnx2x *VAR_4,
           struct bnx2x_phy *VAR_5,
           struct link_vars *VAR_6)
{
 u16 VAR_7;
 FUNC_0(VAR_4, VAR_5,
   VAR_2,
   VAR_3, &VAR_7);
 FUNC_0(VAR_4, VAR_5,
   VAR_2,
   VAR_3, &VAR_7);
 if (VAR_7 & (1<<5))
  VAR_6->link_status |= VAR_0;
 if ((VAR_7 & (1<<0)) == 0)
  VAR_6->link_status |= VAR_1;
}
