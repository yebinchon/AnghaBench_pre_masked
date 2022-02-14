
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int gb; } ;
struct TYPE_5__ {int high; int low; int value; TYPE_1__ gbc; int overread; } ;
typedef TYPE_2__ ArithCoder ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(ArithCoder *VAR_0)
{
    for (;;) {
        if (VAR_0->high >= 0x8000) {
            if (VAR_0->low < 0x8000) {
                if (VAR_0->low >= 0x4000 && VAR_0->high < 0xC000) {
                    VAR_0->value -= 0x4000;
                    VAR_0->low -= 0x4000;
                    VAR_0->high -= 0x4000;
                } else {
                    return;
                }
            } else {
                VAR_0->value -= 0x8000;
                VAR_0->low -= 0x8000;
                VAR_0->high -= 0x8000;
            }
        }
        VAR_0->value <<= 1;
        VAR_0->low <<= 1;
        VAR_0->high <<= 1;
        VAR_0->high |= 1;
        if (FUNC_1(VAR_0->gbc.gb) < 1)
            VAR_0->overread++;
        VAR_0->value |= FUNC_0(VAR_0->gbc.gb);
    }
}
