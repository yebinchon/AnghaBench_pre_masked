
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* a; int windowstart; int configid1; int configid0; scalar_t__ windowbase; } ;
typedef TYPE_1__ esp_gdbstub_gdb_regfile_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(esp_gdbstub_gdb_regfile_t *VAR_2)
{
    if (VAR_2->a[0] & 0x8000000U) {
        VAR_2->a[0] = (VAR_2->a[0] & 0x3fffffffU) | 0x40000000U;
    }
    if (!FUNC_1(VAR_2->a[1])) {
        VAR_2->a[1] = 0xDEADBEEF;
    }
    VAR_2->windowbase = 0;
    VAR_2->windowstart = 0x1;
    FUNC_0(VAR_0, VAR_2->configid0);
    FUNC_0(VAR_1, VAR_2->configid1);
}
