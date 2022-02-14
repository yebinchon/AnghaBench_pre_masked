
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_params {int port; struct bnx2x* bp; } ;
struct bnx2x_phy {scalar_t__ type; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int *) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int ) ;
 int FUNC_4 (struct bnx2x*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct bnx2x_phy *VAR_6,
       struct link_params *VAR_7)
{
 struct bnx2x *VAR_8 = VAR_7->bp;
 u8 VAR_9;
 u16 VAR_10;

 if (!(FUNC_1(VAR_8)))
  VAR_9 = FUNC_0(VAR_8);
 else
  VAR_9 = VAR_7->port;

 if (VAR_6->type == VAR_5) {
  FUNC_4(VAR_8, VAR_3,
          VAR_4,
          VAR_9);
 } else {
  FUNC_2(VAR_8, VAR_6,
    VAR_2,
    VAR_1, &VAR_10);
  VAR_10 |= VAR_0;
  FUNC_3(VAR_8, VAR_6,
     VAR_2,
     VAR_1, VAR_10);
 }
}
