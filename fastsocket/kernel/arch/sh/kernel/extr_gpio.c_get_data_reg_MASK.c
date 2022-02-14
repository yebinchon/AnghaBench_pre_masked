
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_info {struct pinmux_data_reg* data_regs; int data; struct pinmux_gpio* gpios; } ;
struct pinmux_gpio {int flags; int enum_id; } ;
struct pinmux_data_reg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct pinmux_info *VAR_4, unsigned VAR_5,
   struct pinmux_data_reg **VAR_6, int *VAR_7)
{
 struct pinmux_gpio *VAR_8 = &VAR_4->gpios[VAR_5];
 int VAR_9, VAR_10;

 if (!FUNC_0(VAR_8->enum_id, &VAR_4->data))
  return -1;

 VAR_9 = (VAR_8->flags & VAR_2) >> VAR_3;
 VAR_10 = (VAR_8->flags & VAR_0) >> VAR_1;
 *VAR_6 = VAR_4->data_regs + VAR_9;
 *VAR_7 = VAR_10;
 return 0;
}
