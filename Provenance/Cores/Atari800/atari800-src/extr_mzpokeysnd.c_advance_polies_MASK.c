
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int poly4pos; int poly5pos; int poly17pos; int poly9pos; } ;
typedef TYPE_1__ PokeyState ;



__attribute__((used)) static void FUNC_0(PokeyState* VAR_0, int VAR_1)
{
    VAR_0->poly4pos = (VAR_1 + VAR_0->poly4pos) % 15;
    VAR_0->poly5pos = (VAR_1 + VAR_0->poly5pos) % 31;
    VAR_0->poly17pos = (VAR_1 + VAR_0->poly17pos) % 131071;
    VAR_0->poly9pos = (VAR_1 + VAR_0->poly9pos) % 511;
}
