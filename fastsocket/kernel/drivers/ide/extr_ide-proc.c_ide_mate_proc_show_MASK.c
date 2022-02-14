
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_4__ {TYPE_1__* mate; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (struct seq_file*,char*,...) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 ide_hwif_t *VAR_2 = (ide_hwif_t *) VAR_0->private;

 if (VAR_2 && VAR_2->mate)
  FUNC_0(VAR_0, "%s\n", VAR_2->mate->name);
 else
  FUNC_0(VAR_0, "(none)\n");
 return 0;
}
