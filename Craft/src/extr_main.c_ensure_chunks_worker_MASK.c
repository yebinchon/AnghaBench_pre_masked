
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int p; int q; int load; int *** light_maps; int *** block_maps; } ;
typedef TYPE_1__ WorkerItem ;
struct TYPE_12__ {int index; int cnd; int state; TYPE_1__ item; } ;
typedef TYPE_2__ Worker ;
struct TYPE_16__ {int create_radius; scalar_t__ chunk_count; TYPE_5__* chunks; int render_radius; int ortho; int fov; int height; int width; } ;
struct TYPE_15__ {int p; int q; scalar_t__ dirty; int lights; int map; scalar_t__ buffer; } ;
struct TYPE_13__ {int z; int x; int ry; int rx; int y; } ;
struct TYPE_14__ {TYPE_3__ state; } ;
typedef TYPE_3__ State ;
typedef TYPE_4__ Player ;
typedef int Map ;
typedef TYPE_5__ Chunk ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (float**,int,int,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 TYPE_5__* FUNC_5 (int,int) ;
 int FUNC_6 (float**,int ,float*) ;
 TYPE_7__* VAR_3 ;
 int FUNC_7 (TYPE_5__*,int,int) ;
 int * FUNC_8 (int) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (float*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_11(Player *VAR_4, Worker *VAR_5) {
    State *VAR_6 = &VAR_4->state;
    float VAR_7[16];
    FUNC_10(
        VAR_7, VAR_3->width, VAR_3->height,
        VAR_6->x, VAR_6->y, VAR_6->z, VAR_6->rx, VAR_6->ry, VAR_3->fov, VAR_3->ortho, VAR_3->render_radius);
    float VAR_8[6][4];
    FUNC_6(VAR_8, VAR_3->render_radius, VAR_7);
    int VAR_9 = FUNC_3(VAR_6->x);
    int VAR_10 = FUNC_3(VAR_6->z);
    int VAR_11 = VAR_3->create_radius;
    int VAR_12 = 0x0fffffff;
    int VAR_13 = VAR_12;
    int VAR_14 = 0;
    int VAR_15 = 0;
    for (int VAR_16 = -VAR_11; VAR_16 <= VAR_11; VAR_16++) {
        for (int VAR_17 = -VAR_11; VAR_17 <= VAR_11; VAR_17++) {
            int VAR_18 = VAR_9 + VAR_16;
            int VAR_19 = VAR_10 + VAR_17;
            int VAR_20 = (FUNC_0(VAR_18) ^ FUNC_0(VAR_19)) % VAR_1;
            if (VAR_20 != VAR_5->index) {
                continue;
            }
            Chunk *VAR_21 = FUNC_5(VAR_18, VAR_19);
            if (VAR_21 && !VAR_21->dirty) {
                continue;
            }
            int VAR_22 = FUNC_1(FUNC_0(VAR_16), FUNC_0(VAR_17));
            int VAR_23 = !FUNC_2(VAR_8, VAR_18, VAR_19, 0, 256);
            int VAR_24 = 0;
            if (VAR_21) {
                VAR_24 = VAR_21->buffer && VAR_21->dirty;
            }
            int VAR_25 = (VAR_23 << 24) | (VAR_24 << 16) | VAR_22;
            if (VAR_25 < VAR_13) {
                VAR_13 = VAR_25;
                VAR_14 = VAR_18;
                VAR_15 = VAR_19;
            }
        }
    }
    if (VAR_13 == VAR_12) {
        return;
    }
    int VAR_26 = VAR_14;
    int VAR_27 = VAR_15;
    int VAR_28 = 0;
    Chunk *VAR_29 = FUNC_5(VAR_26, VAR_27);
    if (!VAR_29) {
        VAR_28 = 1;
        if (VAR_3->chunk_count < VAR_0) {
            VAR_29 = VAR_3->chunks + VAR_3->chunk_count++;
            FUNC_7(VAR_29, VAR_26, VAR_27);
        }
        else {
            return;
        }
    }
    WorkerItem *VAR_30 = &VAR_5->item;
    VAR_30->p = VAR_29->p;
    VAR_30->q = VAR_29->q;
    VAR_30->load = VAR_28;
    for (int VAR_31 = -1; VAR_31 <= 1; VAR_31++) {
        for (int VAR_32 = -1; VAR_32 <= 1; VAR_32++) {
            Chunk *VAR_33 = VAR_29;
            if (VAR_31 || VAR_32) {
                VAR_33 = FUNC_5(VAR_29->p + VAR_31, VAR_29->q + VAR_32);
            }
            if (VAR_33) {
                Map *VAR_34 = FUNC_8(sizeof(Map));
                FUNC_9(VAR_34, &VAR_33->map);
                Map *VAR_35 = FUNC_8(sizeof(Map));
                FUNC_9(VAR_35, &VAR_33->lights);
                VAR_30->block_maps[VAR_31 + 1][VAR_32 + 1] = VAR_34;
                VAR_30->light_maps[VAR_31 + 1][VAR_32 + 1] = VAR_35;
            }
            else {
                VAR_30->block_maps[VAR_31 + 1][VAR_32 + 1] = 0;
                VAR_30->light_maps[VAR_31 + 1][VAR_32 + 1] = 0;
            }
        }
    }
    VAR_29->dirty = 0;
    VAR_5->state = VAR_2;
    FUNC_4(&VAR_5->cnd);
}
