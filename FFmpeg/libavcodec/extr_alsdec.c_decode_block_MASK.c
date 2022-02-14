
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* shift_lsbs; unsigned int block_length; unsigned int* raw_samples; scalar_t__* const_block; } ;
typedef int ALSDecContext ;
typedef TYPE_1__ ALSBlockData ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(ALSDecContext *VAR_0, ALSBlockData *VAR_1)
{
    unsigned int VAR_2;
    int VAR_3 = 0;


    if (*VAR_1->const_block)
        FUNC_0(VAR_0, VAR_1);
    else
        VAR_3 = FUNC_1(VAR_0, VAR_1);

    if (VAR_3 < 0)
        return VAR_3;



    if (*VAR_1->shift_lsbs)
        for (VAR_2 = 0; VAR_2 < VAR_1->block_length; VAR_2++)
            VAR_1->raw_samples[VAR_2] = (unsigned)VAR_1->raw_samples[VAR_2] << *VAR_1->shift_lsbs;

    return 0;
}
