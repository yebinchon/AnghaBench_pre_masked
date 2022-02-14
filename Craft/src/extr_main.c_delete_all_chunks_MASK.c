
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int chunk_count; TYPE_1__* chunks; } ;
struct TYPE_3__ {int sign_buffer; int buffer; int signs; int lights; int map; } ;
typedef TYPE_1__ Chunk ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3() {
    for (int VAR_1 = 0; VAR_1 < VAR_0->chunk_count; VAR_1++) {
        Chunk *VAR_2 = VAR_0->chunks + VAR_1;
        FUNC_1(&VAR_2->map);
        FUNC_1(&VAR_2->lights);
        FUNC_2(&VAR_2->signs);
        FUNC_0(VAR_2->buffer);
        FUNC_0(VAR_2->sign_buffer);
    }
    VAR_0->chunk_count = 0;
}
