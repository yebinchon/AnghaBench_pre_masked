
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2 {scalar_t__ phy_port; int phy_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static char *
FUNC_0(struct bnx2 *VAR_2)
{
 return ((VAR_2->phy_port == VAR_1) ? "SerDes" :
  ((VAR_2->phy_flags & VAR_0) ? "Remote Copper" :
   "Copper"));
}
