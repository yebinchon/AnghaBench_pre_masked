
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ next_pc; int sp; int pc; } ;
typedef TYPE_1__ esp_backtrace_frame_t ;
struct TYPE_6__ {scalar_t__ a0; int a1; int pc; } ;
typedef TYPE_2__ XtExcFrame ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_6(XtExcFrame *VAR_1, int VAR_2)
{

    esp_backtrace_frame_t VAR_3 = {.pc = VAR_1->pc, .sp = VAR_1->a1, .next_pc = VAR_1->a0};
    FUNC_4("\r\nBacktrace:");
    FUNC_5(FUNC_1(VAR_3.pc), VAR_3.sp);


    bool VAR_4 = (FUNC_3(VAR_3.sp) &&
                      FUNC_2((void*)FUNC_1(VAR_3.pc))) ?
                      0 : 1;
    uint32_t VAR_5 = ((VAR_2 <= 0) ? VAR_0 : VAR_2) - 1;
    while (VAR_5-- > 0 && VAR_3.next_pc != 0 && !VAR_4) {
        if (!FUNC_0(&VAR_3)) {
            VAR_4 = 1;
        }
        FUNC_5(FUNC_1(VAR_3.pc), VAR_3.sp);
    }


    if (VAR_4) {
        FUNC_4(" |<-CORRUPTED");
    } else if (VAR_3.next_pc != 0) {
        FUNC_4(" |<-CONTINUES");
    }
    FUNC_4("\r\n");
}
