
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int chunk_count; TYPE_1__* chunks; } ;
struct TYPE_4__ {int p; int q; } ;
typedef TYPE_1__ Chunk ;


 TYPE_2__* VAR_0 ;

Chunk *FUNC_0(int VAR_1, int VAR_2) {
    for (int VAR_3 = 0; VAR_3 < VAR_0->chunk_count; VAR_3++) {
        Chunk *VAR_4 = VAR_0->chunks + VAR_3;
        if (VAR_4->p == VAR_1 && VAR_4->q == VAR_2) {
            return VAR_4;
        }
    }
    return 0;
}
