
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ size; } ;
struct TYPE_6__ {TYPE_1__ lights; scalar_t__ q; scalar_t__ p; } ;
typedef TYPE_1__ Map ;
typedef TYPE_2__ Chunk ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (scalar_t__,scalar_t__) ;

int FUNC_1(Chunk *VAR_1) {
    if (!VAR_0) {
        return 0;
    }
    for (int VAR_2 = -1; VAR_2 <= 1; VAR_2++) {
        for (int VAR_3 = -1; VAR_3 <= 1; VAR_3++) {
            Chunk *VAR_4 = VAR_1;
            if (VAR_2 || VAR_3) {
                VAR_4 = FUNC_0(VAR_1->p + VAR_2, VAR_1->q + VAR_3);
            }
            if (!VAR_4) {
                continue;
            }
            Map *VAR_5 = &VAR_4->lights;
            if (VAR_5->size) {
                return 1;
            }
        }
    }
    return 0;
}
