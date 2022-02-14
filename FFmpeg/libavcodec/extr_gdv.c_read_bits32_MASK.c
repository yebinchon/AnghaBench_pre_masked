
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int queue; int fill; } ;
typedef int GetByteContext ;
typedef TYPE_1__ Bits32 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(Bits32 *VAR_0, GetByteContext *VAR_1, int VAR_2)
{
    int VAR_3 = VAR_0->queue & ((1 << VAR_2) - 1);

    VAR_0->queue >>= VAR_2;
    VAR_0->fill -= VAR_2;
    if (VAR_0->fill <= 16) {
        VAR_0->queue |= FUNC_0(VAR_1) << VAR_0->fill;
        VAR_0->fill += 16;
    }

    return VAR_3;
}
