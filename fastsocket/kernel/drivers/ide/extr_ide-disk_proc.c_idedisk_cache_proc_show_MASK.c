
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_2__ {int dev_flags; int* id; } ;
typedef TYPE_1__ ide_drive_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_2, void *VAR_3)
{
 ide_drive_t *VAR_4 = (ide_drive_t *) VAR_2->private;

 if (VAR_4->dev_flags & VAR_1)
  FUNC_0(VAR_2, "%i\n", VAR_4->id[VAR_0] / 2);
 else
  FUNC_0(VAR_2, "(none)\n");
 return 0;
}
