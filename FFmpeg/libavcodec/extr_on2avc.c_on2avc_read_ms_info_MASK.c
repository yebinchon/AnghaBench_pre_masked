
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_windows; int num_bands; void** ms_info; int * grouping; void* ms_present; } ;
typedef TYPE_1__ On2AVCContext ;
typedef int GetBitContext ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (void**,void**,int) ;

__attribute__((used)) static void FUNC_2(On2AVCContext *VAR_0, GetBitContext *VAR_1)
{
    int VAR_2, VAR_3, VAR_4 = 0;

    VAR_0->ms_present = FUNC_0(VAR_1);
    if (!VAR_0->ms_present)
        return;
    for (VAR_2 = 0; VAR_2 < VAR_0->num_windows; VAR_2++) {
        if (!VAR_0->grouping[VAR_2]) {
            FUNC_1(VAR_0->ms_info + VAR_4,
                   VAR_0->ms_info + VAR_4 - VAR_0->num_bands,
                   VAR_0->num_bands * sizeof(*VAR_0->ms_info));
            VAR_4 += VAR_0->num_bands;
            continue;
        }
        for (VAR_3 = 0; VAR_3 < VAR_0->num_bands; VAR_3++)
            VAR_0->ms_info[VAR_4++] = FUNC_0(VAR_1);
    }
}
