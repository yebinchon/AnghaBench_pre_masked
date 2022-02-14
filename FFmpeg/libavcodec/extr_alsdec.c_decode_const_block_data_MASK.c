
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int block_length; int * raw_samples; } ;
typedef int ALSDecContext ;
typedef TYPE_1__ ALSBlockData ;



__attribute__((used)) static void FUNC_0(ALSDecContext *VAR_0, ALSBlockData *VAR_1)
{
    int VAR_2 = VAR_1->block_length - 1;
    int32_t VAR_3 = *VAR_1->raw_samples;
    int32_t *VAR_4 = VAR_1->raw_samples + 1;


    for (; VAR_2; VAR_2--)
        *VAR_4++ = VAR_3;
}
