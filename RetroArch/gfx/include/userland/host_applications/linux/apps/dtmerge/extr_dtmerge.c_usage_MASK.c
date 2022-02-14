
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void)
{
   FUNC_1("Usage:\n");
   FUNC_1("    dtmerge [<options] <base dtb> <merged dtb> - [param=value] ...\n");
   FUNC_1("        to apply a parameter to the base dtb (like dtparam)\n");
   FUNC_1("    dtmerge [<options] <base dtb> <merged dtb> <overlay dtb> [param=value] ...\n");
   FUNC_1("        to apply an overlay with parameters (like dtoverlay)\n");
   FUNC_1("  where <options> is any of:\n");
   FUNC_1("    -d      Enable debug output\n");
   FUNC_1("    -h      Show this help message\n");
   FUNC_0(1);
}
