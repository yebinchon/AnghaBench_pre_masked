
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int short_ref_count; int ** short_ref; } ;
typedef int H264Picture ;
typedef TYPE_1__ H264Context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **,int **,int) ;

__attribute__((used)) static void FUNC_2(H264Context *VAR_0, int VAR_1)
{
    FUNC_0(VAR_1 >= 0 && VAR_1 < VAR_0->short_ref_count);
    VAR_0->short_ref[VAR_1] = ((void*)0);
    if (--VAR_0->short_ref_count)
        FUNC_1(&VAR_0->short_ref[VAR_1], &VAR_0->short_ref[VAR_1 + 1],
                (VAR_0->short_ref_count - VAR_1) * sizeof(H264Picture*));
}
