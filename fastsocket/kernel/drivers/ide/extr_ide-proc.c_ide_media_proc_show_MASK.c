
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_2__ {int media; } ;
typedef TYPE_1__ ide_drive_t ;







 int FUNC_0 (struct seq_file*,char const*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 ide_drive_t *VAR_2 = (ide_drive_t *) VAR_0->private;
 const char *VAR_3;

 switch (VAR_2->media) {
 case 131: VAR_3 = "disk\n"; break;
 case 132: VAR_3 = "cdrom\n"; break;
 case 128: VAR_3 = "tape\n"; break;
 case 130: VAR_3 = "floppy\n"; break;
 case 129: VAR_3 = "optical\n"; break;
 default: VAR_3 = "UNKNOWN\n"; break;
 }
 FUNC_0(VAR_0, VAR_3);
 return 0;
}
