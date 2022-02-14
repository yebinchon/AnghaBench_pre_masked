
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_2__ {int bios_sect; int bios_head; int bios_cyl; int sect; int head; int cyl; } ;
typedef TYPE_1__ ide_drive_t ;


 int FUNC_0 (struct seq_file*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 ide_drive_t *VAR_2 = (ide_drive_t *) VAR_0->private;

 FUNC_0(VAR_0, "physical     %d/%d/%d\n",
   VAR_2->cyl, VAR_2->head, VAR_2->sect);
 FUNC_0(VAR_0, "logical      %d/%d/%d\n",
   VAR_2->bios_cyl, VAR_2->bios_head, VAR_2->bios_sect);
 return 0;
}
