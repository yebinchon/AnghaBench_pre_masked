
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_range {scalar_t__ force; } ;
struct pinmux_info {struct pinmux_range function; struct pinmux_range input_pd; struct pinmux_range input_pu; struct pinmux_range input; struct pinmux_range output; } ;
struct pinmux_cfg_reg {int dummy; } ;
typedef scalar_t__ pinmux_enum_t ;
 int FUNC_0 (struct pinmux_info*,struct pinmux_cfg_reg*,int) ;
 int FUNC_1 (scalar_t__,struct pinmux_range*) ;
 scalar_t__ FUNC_2 (struct pinmux_info*,scalar_t__,struct pinmux_cfg_reg**,int*,unsigned long**) ;
 int FUNC_3 (struct pinmux_info*,unsigned int,int,scalar_t__*) ;
 int FUNC_4 (struct pinmux_info*,struct pinmux_cfg_reg*,int) ;

__attribute__((used)) static int FUNC_5(struct pinmux_info *VAR_0, unsigned VAR_1,
         int VAR_2, int VAR_3)
{
 struct pinmux_cfg_reg *VAR_4 = ((void*)0);
 pinmux_enum_t VAR_5;
 struct pinmux_range *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 unsigned long *VAR_10;

 switch (VAR_2) {

 case 132:
  VAR_6 = ((void*)0);
  break;

 case 128:
  VAR_6 = &VAR_0->output;
  break;

 case 131:
  VAR_6 = &VAR_0->input;
  break;

 case 129:
  VAR_6 = &VAR_0->input_pu;
  break;

 case 130:
  VAR_6 = &VAR_0->input_pd;
  break;

 default:
  goto out_err;
 }

 VAR_8 = 0;
 VAR_5 = 0;
 VAR_9 = 0;
 while (1) {
  VAR_8 = FUNC_3(VAR_0, VAR_1, VAR_8, &VAR_5);
  if (VAR_8 <= 0)
   goto out_err;

  if (!VAR_5)
   break;

  VAR_7 = FUNC_1(VAR_5, &VAR_0->function);
  if (!VAR_7 && VAR_6) {
   VAR_7 = FUNC_1(VAR_5, VAR_6);

   if (VAR_7 && VAR_5 == VAR_6->force)
    continue;
  }

  if (!VAR_7)
   continue;

  if (FUNC_2(VAR_0, VAR_5, &VAR_4, &VAR_9, &VAR_10) != 0)
   goto out_err;

  switch (VAR_3) {
  case 135:
   if (!*VAR_10 || !FUNC_0(VAR_0, VAR_4, VAR_9))
    continue;
   break;

  case 133:
   FUNC_4(VAR_0, VAR_4, VAR_9);
   *VAR_10 = *VAR_10 + 1;
   break;

  case 134:
   *VAR_10 = *VAR_10 - 1;
   break;
  }
 }

 return 0;
 out_err:
 return -1;
}
