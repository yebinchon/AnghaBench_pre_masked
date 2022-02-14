
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinmux_info {struct pinmux_data_reg* data_regs; int data; struct pinmux_gpio* gpios; } ;
struct pinmux_gpio {scalar_t__ enum_id; int flags; } ;
struct pinmux_data_reg {int reg_width; scalar_t__* enum_ids; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(struct pinmux_info *VAR_4, unsigned VAR_5)
{
 struct pinmux_gpio *VAR_6 = &VAR_4->gpios[VAR_5];
 struct pinmux_data_reg *VAR_7;
 int VAR_8, VAR_9;

 if (!FUNC_1(VAR_6->enum_id, &VAR_4->data))
  return -1;

 VAR_8 = 0;
 while (1) {
  VAR_7 = VAR_4->data_regs + VAR_8;

  if (!VAR_7->reg_width)
   break;

  for (VAR_9 = 0; VAR_9 < VAR_7->reg_width; VAR_9++) {
   if (VAR_7->enum_ids[VAR_9] == VAR_6->enum_id) {
    VAR_6->flags &= ~VAR_2;
    VAR_6->flags |= (VAR_8 << VAR_3);
    VAR_6->flags &= ~VAR_0;
    VAR_6->flags |= (VAR_9 << VAR_1);
    return 0;
   }
  }
  VAR_8++;
 }

 FUNC_0();

 return -1;
}
