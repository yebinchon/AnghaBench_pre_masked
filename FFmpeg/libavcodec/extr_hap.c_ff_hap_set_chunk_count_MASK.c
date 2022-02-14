
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chunk_count; int chunk_results; int chunks; } ;
typedef TYPE_1__ HapContext ;
typedef int HapChunk ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;

int FUNC_1(HapContext *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    if (VAR_3 == 1 && VAR_1->chunk_count != VAR_2) {
        int VAR_5 = FUNC_0(&VAR_1->chunks, VAR_2, sizeof(HapChunk));
        if (VAR_5 == 0)
            VAR_5 = FUNC_0(&VAR_1->chunk_results, VAR_2, sizeof(int));
        if (VAR_5 < 0) {
            VAR_1->chunk_count = 0;
        } else {
            VAR_1->chunk_count = VAR_2;
        }
    } else if (VAR_1->chunk_count != VAR_2) {




        VAR_4 = VAR_0;
    }
    return VAR_4;
}
