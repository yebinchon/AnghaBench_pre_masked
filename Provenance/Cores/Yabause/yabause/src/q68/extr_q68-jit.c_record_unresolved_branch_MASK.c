
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {scalar_t__ m68k_target; scalar_t__ native_offset; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(uint32_t VAR_1,
                                     uint32_t VAR_2)
{
    int VAR_3 = 0;
    int VAR_4;
    for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
        if (VAR_0[VAR_4].m68k_target == 0) {
            VAR_3 = VAR_4;
            break;
        } else if (VAR_0[VAR_4].native_offset
                   < VAR_0[VAR_3].native_offset) {
            VAR_3 = VAR_4;
        }
    }
    VAR_0[VAR_3].m68k_target = VAR_1;
    VAR_0[VAR_3].native_offset = VAR_2;
}
