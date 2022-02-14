
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_vars {int eee_status; } ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bnx2x*,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct bnx2x_phy *VAR_4,
    struct link_params *VAR_5,
    struct link_vars *VAR_6)
{
 struct bnx2x *VAR_7 = VAR_5->bp;


 FUNC_0(VAR_7, VAR_2 + (VAR_5->port << 2), 0);

 FUNC_1(VAR_7, VAR_4, VAR_0, VAR_1, 0x0);

 VAR_6->eee_status &= ~VAR_3;

 return 0;
}
