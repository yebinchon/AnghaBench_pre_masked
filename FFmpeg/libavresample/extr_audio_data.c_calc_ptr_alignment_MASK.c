
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int planes; int ptr_align; scalar_t__* data; } ;
typedef TYPE_1__ AudioData ;



__attribute__((used)) static void FUNC_0(AudioData *VAR_0)
{
    int VAR_1;
    int VAR_2 = 128;

    for (VAR_1 = 0; VAR_1 < VAR_0->planes; VAR_1++) {
        int VAR_3 = 128;
        while ((intptr_t)VAR_0->data[VAR_1] % VAR_3)
            VAR_3 >>= 1;
        if (VAR_3 < VAR_2)
            VAR_2 = VAR_3;
    }
    VAR_0->ptr_align = VAR_2;
}
