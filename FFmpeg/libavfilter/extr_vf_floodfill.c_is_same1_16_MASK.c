
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* linesize; scalar_t__* data; } ;
typedef TYPE_1__ AVFrame ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(AVFrame *VAR_0, int VAR_1, int VAR_2,
                       unsigned VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6)
{
    unsigned VAR_7 = FUNC_0(VAR_0->data[0] + VAR_2 * VAR_0->linesize[0] + 2 * VAR_1);

    if (VAR_3 == VAR_7)
        return 1;
    return 0;
}
