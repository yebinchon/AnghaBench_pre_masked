
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_2__ {scalar_t__ channel; } ;
typedef TYPE_1__ ide_hwif_t ;


 int FUNC_0 (struct seq_file*,char*,char) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 ide_hwif_t *VAR_2 = (ide_hwif_t *) VAR_0->private;

 FUNC_0(VAR_0, "%c\n", VAR_2->channel ? '1' : '0');
 return 0;
}
