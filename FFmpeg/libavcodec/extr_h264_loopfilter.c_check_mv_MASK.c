
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** ref_cache; int*** mv_cache; int list_count; } ;
typedef TYPE_1__ H264SliceContext ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(H264SliceContext *VAR_0, long VAR_1, long VAR_2, int VAR_3)
{
    int VAR_4;

    VAR_4 = VAR_0->ref_cache[0][VAR_1] != VAR_0->ref_cache[0][VAR_2];
    if (!VAR_4 && VAR_0->ref_cache[0][VAR_1] != -1)
        VAR_4 = VAR_0->mv_cache[0][VAR_1][0] - VAR_0->mv_cache[0][VAR_2][0] + 3 >= 7U |
           FUNC_0(VAR_0->mv_cache[0][VAR_1][1] - VAR_0->mv_cache[0][VAR_2][1]) >= VAR_3;

    if (VAR_0->list_count == 2) {
        if(!VAR_4)
            VAR_4 = VAR_0->ref_cache[1][VAR_1] != VAR_0->ref_cache[1][VAR_2] |
                VAR_0->mv_cache[1][VAR_1][0] - VAR_0->mv_cache[1][VAR_2][0] + 3 >= 7U |
                FUNC_0(VAR_0->mv_cache[1][VAR_1][1] - VAR_0->mv_cache[1][VAR_2][1]) >= VAR_3;

        if(VAR_4){
            if (VAR_0->ref_cache[0][VAR_1] != VAR_0->ref_cache[1][VAR_2] |
                VAR_0->ref_cache[1][VAR_1] != VAR_0->ref_cache[0][VAR_2])
                return 1;
            return
                VAR_0->mv_cache[0][VAR_1][0] - VAR_0->mv_cache[1][VAR_2][0] + 3 >= 7U |
                FUNC_0(VAR_0->mv_cache[0][VAR_1][1] - VAR_0->mv_cache[1][VAR_2][1]) >= VAR_3 |
                VAR_0->mv_cache[1][VAR_1][0] - VAR_0->mv_cache[0][VAR_2][0] + 3 >= 7U |
                FUNC_0(VAR_0->mv_cache[1][VAR_1][1] - VAR_0->mv_cache[0][VAR_2][1]) >= VAR_3;
        }
    }

    return VAR_4;
}
