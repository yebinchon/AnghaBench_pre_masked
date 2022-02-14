
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* CurrentState; int PCIO; } ;
struct TYPE_4__ {int cursor1; } ;
typedef TYPE_2__ RIVA_HW_INST ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1
(
    RIVA_HW_INST *VAR_0,
    int VAR_1
)
{
    int VAR_2;
    VAR_2 = VAR_0->CurrentState->cursor1;
    VAR_0->CurrentState->cursor1 = (VAR_0->CurrentState->cursor1 & 0xFE) |
                                  (VAR_1 & 0x01);
    FUNC_0(VAR_0->PCIO, 0x3D4, 0x31);
    FUNC_0(VAR_0->PCIO, 0x3D5, VAR_0->CurrentState->cursor1);
    return (VAR_2 & 0x01);
}
