
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int gB; } ;
struct TYPE_5__ {int high; int low; int value; TYPE_1__ gbc; } ;
typedef TYPE_2__ ArithCoder ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(ArithCoder *VAR_0)
{
    while ((VAR_0->high >> 15) - (VAR_0->low >> 15) < 2) {
        if ((VAR_0->low ^ VAR_0->high) & 0x10000) {
            VAR_0->high ^= 0x8000;
            VAR_0->value ^= 0x8000;
            VAR_0->low ^= 0x8000;
        }
        VAR_0->high = (uint16_t)VAR_0->high << 8 | 0xFF;
        VAR_0->value = (uint16_t)VAR_0->value << 8 | FUNC_0(VAR_0->gbc.gB);
        VAR_0->low = (uint16_t)VAR_0->low << 8;
    }
}
