
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fc_scr_s {int vu_reg_func; int reg_func; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fchs_s*,int ,int ,int) ;
 int FUNC_2 (struct fc_scr_s*,int ,int) ;

u16
FUNC_3(struct fchs_s *VAR_4, struct fc_scr_s *VAR_5,
  u8 VAR_6, u32 VAR_7, u16 VAR_8)
{
 u32 VAR_9 = FUNC_0(VAR_1);

 FUNC_1(VAR_4, VAR_9, VAR_7, VAR_8);

 FUNC_2(VAR_5, 0, sizeof(struct fc_scr_s));
 VAR_5->command = VAR_0;
 VAR_5->reg_func = VAR_2;
 if (VAR_6)
  VAR_5->vu_reg_func = VAR_3;

 return sizeof(struct fc_scr_s);
}
