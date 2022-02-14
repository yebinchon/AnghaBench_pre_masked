
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct bnx2x *VAR_3,
     struct bnx2x_phy *VAR_4,
     u16 VAR_5)
{
 u16 VAR_6;
 u16 VAR_7;
 FUNC_0(VAR_3, VAR_4,
   VAR_0,
   VAR_1,
   &VAR_6);

 FUNC_1(VAR_3, VAR_4,
    VAR_0,
    VAR_1,
    (VAR_6 & ~(1<<9)));

 FUNC_0(VAR_3, VAR_4,
   VAR_0,
   VAR_2,
   &VAR_7);

 FUNC_1(VAR_3, VAR_4,
    VAR_0,
    VAR_2,
    (VAR_7 & 0xff00) | (VAR_5 & 0x00ff));

 FUNC_1(VAR_3, VAR_4,
    VAR_0,
    VAR_1,
    (VAR_6 | (1<<9)));

 return 0;
}
