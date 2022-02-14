
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int* VAR_0 ;
 int* VAR_1 ;

int FUNC_0(GetBitContext *VAR_2, int VAR_3)
{
    int VAR_4;
    for(VAR_4 = 0; VAR_4 < 5; VAR_4++)
        if(VAR_1[VAR_4] >= VAR_3 - 1)
            break;
    return VAR_0[VAR_4];
}
