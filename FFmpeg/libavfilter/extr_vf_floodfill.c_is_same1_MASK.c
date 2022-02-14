
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int** data; int* linesize; } ;
typedef TYPE_1__ AVFrame ;



__attribute__((used)) static int FUNC_0(AVFrame *VAR_0, int VAR_1, int VAR_2,
                    unsigned VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6)
{
    unsigned VAR_7 = VAR_0->data[0][VAR_2 * VAR_0->linesize[0] + VAR_1];

    if (VAR_3 == VAR_7)
        return 1;
    return 0;
}
