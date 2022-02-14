
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ req_line_speed; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_2(struct bnx2x_phy *VAR_8,
          struct link_params *VAR_9)
{
 struct bnx2x *VAR_10 = VAR_9->bp;
 u16 VAR_11, VAR_12;
 if (VAR_8->req_line_speed != VAR_7)
  return 0;
 FUNC_0(VAR_10, VAR_8,
     VAR_3,
     VAR_4,
     &VAR_12);
 FUNC_0(VAR_10, VAR_8,
     VAR_3,
     VAR_4,
     &VAR_12);
 if (VAR_12 & VAR_5) {
  FUNC_1(VAR_6, "1G parallel detect link on port %d\n",
    VAR_9->port);
  return 1;
 }

 FUNC_0(VAR_10, VAR_8,
     VAR_2,
     VAR_0,
     &VAR_11);

 if (VAR_11 & VAR_1) {
  FUNC_1(VAR_6, "10G parallel detect link on port %d\n",
    VAR_9->port);
  return 1;
 }
 return 0;
}
