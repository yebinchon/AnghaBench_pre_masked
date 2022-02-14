
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int gB; } ;
struct TYPE_5__ {int high; int low; TYPE_1__ gbc; } ;
typedef TYPE_2__ ArithCoder ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(ArithCoder *VAR_0)
{
    int VAR_1 = (VAR_0->high >> 16) - (VAR_0->low >> 16);
    int VAR_2 = (FUNC_0(VAR_0->gbc.gB) - 3) << 3;
    int VAR_3 = 1;

    while (!(VAR_1 & 0x80)) {
        VAR_3++;
        VAR_1 <<= 1;
    }

    return ((VAR_3 + VAR_2 + 7) >> 3) + ((VAR_0->low >> 16) + 1 == VAR_0->high >> 16);
}
