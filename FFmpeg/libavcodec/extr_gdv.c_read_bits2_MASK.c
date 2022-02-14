
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fill; int queue; } ;
typedef int GetByteContext ;
typedef TYPE_1__ Bits8 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(Bits8 *VAR_0, GetByteContext *VAR_1)
{
    int VAR_2;

    if (VAR_0->fill == 0) {
        VAR_0->queue |= FUNC_0(VAR_1);
        VAR_0->fill = 8;
    }
    VAR_2 = VAR_0->queue >> 6;
    VAR_0->queue <<= 2;
    VAR_0->fill -= 2;

    return VAR_2;
}
