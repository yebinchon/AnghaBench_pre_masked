
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_info {struct pinmux_cfg_reg* cfg_regs; } ;
struct pinmux_cfg_reg {unsigned long reg_width; unsigned long field_width; scalar_t__* enum_ids; unsigned long* cnt; } ;
typedef scalar_t__ pinmux_enum_t ;



__attribute__((used)) static int FUNC_0(struct pinmux_info *VAR_0, pinmux_enum_t VAR_1,
     struct pinmux_cfg_reg **VAR_2, int *VAR_3,
     unsigned long **VAR_4)
{
 struct pinmux_cfg_reg *VAR_5;
 unsigned long VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = 0;
 while (1) {
  VAR_5 = VAR_0->cfg_regs + VAR_8;

  VAR_6 = VAR_5->reg_width;
  VAR_7 = VAR_5->field_width;

  if (!VAR_6)
   break;
  for (VAR_9 = 0; VAR_9 < (VAR_6 / VAR_7) * 1 << VAR_7; VAR_9++) {
   if (VAR_5->enum_ids[VAR_9] == VAR_1) {
    *VAR_2 = VAR_5;
    *VAR_3 = VAR_9;
    *VAR_4 = &VAR_5->cnt[VAR_9 / (1 << VAR_7)];
    return 0;
   }
  }
  VAR_8++;
 }

 return -1;
}
