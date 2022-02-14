
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int nop_time; } ;
struct TYPE_6__ {int iterations; int cycles; } ;
struct TYPE_7__ {scalar_t__ cpu; TYPE_1__ perf; struct TYPE_7__* next; } ;
struct TYPE_8__ {char* name; struct TYPE_8__** child; TYPE_2__ versions; } ;
typedef TYPE_1__ CheckasmPerf ;
typedef TYPE_2__ CheckasmFuncVersion ;
typedef TYPE_3__ CheckasmFunc ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char*,char*,int,int) ;
 TYPE_4__ VAR_0 ;

__attribute__((used)) static void FUNC_2(CheckasmFunc *VAR_1)
{
    if (VAR_1) {
        FUNC_2(VAR_1->child[0]);


        if (VAR_1->versions.cpu || VAR_1->versions.next) {
            CheckasmFuncVersion *VAR_2 = &VAR_1->versions;
            do {
                CheckasmPerf *VAR_3 = &VAR_2->perf;
                if (VAR_3->iterations) {
                    int VAR_4 = (10*VAR_3->cycles/VAR_3->iterations - VAR_0.nop_time) / 4;
                    FUNC_1("%s_%s: %d.%d\n", VAR_1->name, FUNC_0(VAR_2->cpu), VAR_4/10, VAR_4%10);
                }
            } while ((VAR_2 = VAR_2->next));
        }

        FUNC_2(VAR_1->child[1]);
    }
}
