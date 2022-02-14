
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct TYPE_2__ {int chipset; } ;
typedef TYPE_1__ ide_hwif_t ;
 int FUNC_0 (struct seq_file*,char*,char const*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 ide_hwif_t *VAR_2 = (ide_hwif_t *) VAR_0->private;
 const char *VAR_3;

 switch (VAR_2->chipset) {
 case 134: VAR_3 = "generic"; break;
 case 131: VAR_3 = "pci"; break;
 case 136: VAR_3 = "cmd640"; break;
 case 135: VAR_3 = "dtc2278"; break;
 case 138: VAR_3 = "ali14xx"; break;
 case 129: VAR_3 = "qd65xx"; break;
 case 128: VAR_3 = "umc8672"; break;
 case 133: VAR_3 = "ht6560b"; break;
 case 140: VAR_3 = "4drives"; break;
 case 130: VAR_3 = "mac-io"; break;
 case 137: VAR_3 = "au1xxx"; break;
 case 132: VAR_3 = "palm3710"; break;
 case 139: VAR_3 = "acorn"; break;
 default: VAR_3 = "(unknown)"; break;
 }
 FUNC_0(VAR_0, "%s\n", VAR_3);
 return 0;
}
