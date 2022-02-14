
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bnx2 {int req_flow_ctrl; int phy_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static u32
FUNC_0(struct bnx2 *VAR_7)
{
 u32 VAR_8 = 0;

 if ((VAR_7->req_flow_ctrl & (VAR_5 | VAR_6)) ==
  (VAR_5 | VAR_6)) {

  if (VAR_7->phy_flags & VAR_4) {
   VAR_8 = VAR_0;
  }
  else {
   VAR_8 = VAR_3;
  }
 }
 else if (VAR_7->req_flow_ctrl & VAR_6) {
  if (VAR_7->phy_flags & VAR_4) {
   VAR_8 = VAR_1;
  }
  else {
   VAR_8 = VAR_2;
  }
 }
 else if (VAR_7->req_flow_ctrl & VAR_5) {
  if (VAR_7->phy_flags & VAR_4) {
   VAR_8 = VAR_0 | VAR_1;
  }
  else {
   VAR_8 = VAR_3 | VAR_2;
  }
 }
 return VAR_8;
}
