
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kernel_param {int dummy; } ;
struct TYPE_3__ {char* name; int value; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int FUNC_2(char *VAR_3, struct kernel_param *VAR_4) {
 int VAR_5 = 0;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_3, "%-25s\tHex        SET\n", "Description");

 for(VAR_6 = 0; VAR_6 <FUNC_0(VAR_2); VAR_6++) {
  VAR_5 += FUNC_1(VAR_3+VAR_5, "%-25s\t0x%08lX [%c]\n",
     VAR_2[VAR_6].name,
     VAR_2[VAR_6].value,
     (VAR_1 & VAR_2[VAR_6].value) ? '*' : ' ');
 }
 VAR_5 += FUNC_1(VAR_3+VAR_5, "%-25s\t0x%08X [%c]\n", "ACPI_ALL_DRIVERS",
     VAR_0,
     (VAR_1 & VAR_0) ==
     VAR_0 ? '*' : (VAR_1 &
     VAR_0) == 0 ? ' ' : '-');
 VAR_5 += FUNC_1(VAR_3+VAR_5, "--\ndebug_layer = 0x%08X ( * = enabled)\n", VAR_1);

 return VAR_5;
}
