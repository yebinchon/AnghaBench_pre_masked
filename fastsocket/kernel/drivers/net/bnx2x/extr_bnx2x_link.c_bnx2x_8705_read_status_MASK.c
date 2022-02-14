
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct link_vars {int line_speed; } ;
struct link_params {struct bnx2x* bp; } ;
struct bnx2x_phy {int dummy; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_phy*,int ,int,int*) ;
 int FUNC_2 (struct bnx2x_phy*,struct link_params*,struct link_vars*) ;

__attribute__((used)) static u8 FUNC_3(struct bnx2x_phy *VAR_6,
     struct link_params *VAR_7,
     struct link_vars *VAR_8)
{
 u8 VAR_9 = 0;
 u16 VAR_10, VAR_11;
 struct bnx2x *VAR_12 = VAR_7->bp;
 FUNC_0(VAR_4, "read status 8705\n");
 FUNC_1(VAR_12, VAR_6,
        VAR_2, VAR_3, &VAR_10);
 FUNC_0(VAR_4, "8705 LASI status 0x%x\n", VAR_10);

 FUNC_1(VAR_12, VAR_6,
        VAR_2, VAR_3, &VAR_10);
 FUNC_0(VAR_4, "8705 LASI status 0x%x\n", VAR_10);

 FUNC_1(VAR_12, VAR_6,
        VAR_0, VAR_1, &VAR_11);

 FUNC_1(VAR_12, VAR_6,
        VAR_0, 0xc809, &VAR_10);
 FUNC_1(VAR_12, VAR_6,
        VAR_0, 0xc809, &VAR_10);

 FUNC_0(VAR_4, "8705 1.c809 val=0x%x\n", VAR_10);
 VAR_9 = ((VAR_11 & 0x1) && (VAR_10 & (1<<9)) && ((VAR_10 & (1<<8)) == 0));
 if (VAR_9) {
  VAR_8->line_speed = VAR_5;
  FUNC_2(VAR_6, VAR_7, VAR_8);
 }
 return VAR_9;
}
