
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kernel_param {int dummy; } ;
struct TYPE_3__ {char* name; int value; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int FUNC_2(char *VAR_2, struct kernel_param *VAR_3) {
 int VAR_4 = 0;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2, "%-25s\tHex        SET\n", "Description");

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_4 += FUNC_1(VAR_2+VAR_4, "%-25s\t0x%08lX [%c]\n",
         VAR_1[VAR_5].name,
         VAR_1[VAR_5].value,
         (VAR_0 & VAR_1[VAR_5].
          value) ? '*' : ' ');
 }
 VAR_4 += FUNC_1(VAR_2+VAR_4, "--\ndebug_level = 0x%08X (* = enabled)\n",
        VAR_0);

 return VAR_4;
}
