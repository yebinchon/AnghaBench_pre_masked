
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct nubus_dev {struct nubus_dev* next; TYPE_1__* board; int dr_hw; int dr_sw; int type; int category; } ;
struct TYPE_2__ {int slot_addr; int slot; } ;


 struct nubus_dev* VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,...) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct nubus_dev *VAR_3 = VAR_0;

 while (VAR_3) {
  FUNC_0(VAR_1, "%x\t%04x %04x %04x %04x",
         VAR_3->board->slot,
         VAR_3->category,
         VAR_3->type,
         VAR_3->dr_sw,
         VAR_3->dr_hw);
  FUNC_0(VAR_1, "\t%08lx\n", VAR_3->board->slot_addr);
  VAR_3 = VAR_3->next;
 }
 return 0;
}
