
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int * AVFilterPad ;
typedef int AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 int ** FUNC_2 (int **,unsigned int,int) ;
 int FUNC_3 (int **,int **,int) ;
 int FUNC_4 (int **,int **,int) ;

int FUNC_5(unsigned VAR_1, unsigned *VAR_2, size_t VAR_3,
                   AVFilterPad **VAR_4, AVFilterLink ***VAR_5,
                   AVFilterPad *VAR_6)
{
    AVFilterLink **VAR_7;
    AVFilterPad *VAR_8;
    unsigned VAR_9;

    VAR_1 = FUNC_1(VAR_1, *VAR_2);

    VAR_8 = FUNC_2(*VAR_4, *VAR_2 + 1, sizeof(AVFilterPad));
    VAR_7 = FUNC_2(*VAR_5, *VAR_2 + 1, sizeof(AVFilterLink*));
    if (VAR_8)
        *VAR_4 = VAR_8;
    if (VAR_7)
        *VAR_5 = VAR_7;
    if (!VAR_8 || !VAR_7)
        return FUNC_0(VAR_0);

    FUNC_4(*VAR_4 + VAR_1 + 1, *VAR_4 + VAR_1, sizeof(AVFilterPad) * (*VAR_2 - VAR_1));
    FUNC_4(*VAR_5 + VAR_1 + 1, *VAR_5 + VAR_1, sizeof(AVFilterLink*) * (*VAR_2 - VAR_1));
    FUNC_3(*VAR_4 + VAR_1, VAR_6, sizeof(AVFilterPad));
    (*VAR_5)[VAR_1] = ((void*)0);

    (*VAR_2)++;
    for (VAR_9 = VAR_1 + 1; VAR_9 < *VAR_2; VAR_9++)
        if ((*VAR_5)[VAR_9])
            (*(unsigned *)((uint8_t *) (*VAR_5)[VAR_9] + VAR_3))++;

    return 0;
}
