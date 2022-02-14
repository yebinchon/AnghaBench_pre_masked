
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int count; int duration; } ;
typedef TYPE_1__ MOVStts ;


 size_t const FUNC_0 (size_t const,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (TYPE_1__*,unsigned int*,size_t const) ;

__attribute__((used)) static int64_t FUNC_2(MOVStts** VAR_1, unsigned int* VAR_2, unsigned int* VAR_3,
                              int VAR_4, int VAR_5)
{
    MOVStts *VAR_6;
    const size_t VAR_7 = (*VAR_2 + 1) * sizeof(MOVStts);
    const size_t VAR_8 =
        VAR_7 > *VAR_3 ?
        FUNC_0(VAR_7, 2 * (*VAR_3)) :
        VAR_7;

    if((unsigned)(*VAR_2) >= VAR_0 / sizeof(MOVStts) - 1)
        return -1;

    VAR_6 = FUNC_1(*VAR_1, VAR_3, VAR_8);

    if(!VAR_6)
        return -1;

    *VAR_1 = VAR_6;

    VAR_6[*VAR_2].count = VAR_4;
    VAR_6[*VAR_2].duration = VAR_5;

    *VAR_2 = (*VAR_2) + 1;
    return *VAR_2;
}
