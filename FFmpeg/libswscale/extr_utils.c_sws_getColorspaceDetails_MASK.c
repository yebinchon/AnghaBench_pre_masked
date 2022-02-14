
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SwsContext {int* srcColorspaceTable; int* dstColorspaceTable; int srcRange; int dstRange; int brightness; int contrast; int saturation; } ;



int FUNC_0(struct SwsContext *VAR_0, int **VAR_1,
                             int *VAR_2, int **VAR_3, int *VAR_4,
                             int *VAR_5, int *VAR_6, int *VAR_7)
{
    if (!VAR_0 )
        return -1;

    *VAR_1 = VAR_0->srcColorspaceTable;
    *VAR_3 = VAR_0->dstColorspaceTable;
    *VAR_2 = VAR_0->srcRange;
    *VAR_4 = VAR_0->dstRange;
    *VAR_5 = VAR_0->brightness;
    *VAR_6 = VAR_0->contrast;
    *VAR_7 = VAR_0->saturation;

    return 0;
}
