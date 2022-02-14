
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int pc; int* a; int ps; int sar; int lcount; int lend; int lbeg; } ;
typedef TYPE_1__ esp_gdbstub_gdb_regfile_t ;
struct TYPE_8__ {int pc; int ps; int sar; int lcount; int lend; int lbeg; int a0; } ;
typedef TYPE_2__ esp_gdbstub_frame_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(const esp_gdbstub_frame_t *VAR_2, esp_gdbstub_gdb_regfile_t *VAR_3)
{
    FUNC_0(VAR_3);
    const uint32_t *VAR_4 = (const uint32_t *) &VAR_2->a0;
    VAR_3->pc = (VAR_2->pc & 0x3fffffffU) | 0x40000000U;

    for (int VAR_5 = 0; VAR_5 < 16; VAR_5++) {
        VAR_3->a[VAR_5] = VAR_4[VAR_5];
    }
    for (int VAR_6 = 16; VAR_6 < 64; VAR_6++) {
        VAR_3->a[VAR_6] = 0xDEADBEEF;
    }







    VAR_3->ps = (VAR_2->ps & VAR_1) ? (VAR_2->ps & ~VAR_0) : VAR_2->ps;
    VAR_3->sar = VAR_2->sar;
    FUNC_1(VAR_3);
}
