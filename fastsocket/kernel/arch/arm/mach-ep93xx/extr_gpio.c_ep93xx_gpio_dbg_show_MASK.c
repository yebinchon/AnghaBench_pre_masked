
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct seq_file {int dummy; } ;
struct irq_desc {int status; scalar_t__ action; } ;
struct gpio_chip {int ngpio; int label; } ;
struct TYPE_2__ {int base; } ;
struct ep93xx_gpio_chip {TYPE_1__ chip; int data_dir_reg; int data_reg; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct gpio_chip*,int) ;
 struct irq_desc* VAR_2 ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 struct ep93xx_gpio_chip* FUNC_4 (struct gpio_chip*) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_3, struct gpio_chip *VAR_4)
{
 struct ep93xx_gpio_chip *VAR_5 = FUNC_4(VAR_4);
 u8 VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = FUNC_0(VAR_5->data_reg);
 VAR_7 = FUNC_0(VAR_5->data_dir_reg);

 VAR_8 = VAR_5->chip.base;
 for (VAR_9 = 0; VAR_9 < VAR_4->ngpio; VAR_9++, VAR_8++) {
  int VAR_10 = VAR_7 & (1 << VAR_9);

  FUNC_3(VAR_3, " %s%d gpio-%-3d (%-12s) %s %s",
    VAR_4->label, VAR_9, VAR_8,
    FUNC_2(VAR_4, VAR_9) ? : "",
    VAR_10 ? "out" : "in ",
    (VAR_6 & (1 << VAR_9)) ? "hi" : "lo");

  if (!VAR_10) {
   int VAR_11 = FUNC_1(VAR_8);
   struct irq_desc *VAR_12 = VAR_2 + VAR_11;

   if (VAR_11 >= 0 && VAR_12->action) {
    char *VAR_13;

    switch (VAR_12->status & VAR_0) {
    case 128:
     VAR_13 = "(default)";
     break;
    case 132:
     VAR_13 = "edge-falling";
     break;
    case 131:
     VAR_13 = "edge-rising";
     break;
    case 133:
     VAR_13 = "edge-both";
     break;
    case 130:
     VAR_13 = "level-high";
     break;
    case 129:
     VAR_13 = "level-low";
     break;
    default:
     VAR_13 = "?trigger?";
     break;
    }

    FUNC_3(VAR_3, " irq-%d %s%s",
      VAR_11, VAR_13,
      (VAR_12->status & VAR_1)
       ? " wakeup" : "");
   }
  }

  FUNC_3(VAR_3, "\n");
 }
}
