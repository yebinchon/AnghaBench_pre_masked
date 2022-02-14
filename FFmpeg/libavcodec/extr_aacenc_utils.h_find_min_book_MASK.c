
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 float* VAR_5 ;

__attribute__((used)) static inline int FUNC_1(float VAR_6, int VAR_7)
{
    float VAR_8 = VAR_5[VAR_1 - VAR_7 + VAR_3 - VAR_2];
    int VAR_9, VAR_10;
    VAR_9 = VAR_6 * VAR_8 + VAR_0;
    if (VAR_9 >= (FUNC_0(VAR_4)))
        VAR_10 = 11;
    else
        VAR_10 = VAR_4[VAR_9];
    return VAR_10;
}
