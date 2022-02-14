
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int chunk_count; scalar_t__ sign_radius; TYPE_3__* chunks; int render_radius; int ortho; int fov; int height; int width; } ;
struct TYPE_14__ {int extra1; int sampler; int matrix; int program; } ;
struct TYPE_13__ {int maxy; int miny; int q; int p; } ;
struct TYPE_11__ {int ry; int rx; int z; int y; int x; } ;
struct TYPE_12__ {TYPE_1__ state; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Player ;
typedef TYPE_3__ Chunk ;
typedef TYPE_4__ Attrib ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (float**,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (float**,int ,float*) ;
 TYPE_7__* VAR_1 ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int,int ,float*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (float*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_9(Attrib *VAR_2, Player *VAR_3) {
    State *VAR_4 = &VAR_3->state;
    int VAR_5 = FUNC_2(VAR_4->x);
    int VAR_6 = FUNC_2(VAR_4->z);
    float VAR_7[16];
    FUNC_8(
        VAR_7, VAR_1->width, VAR_1->height,
        VAR_4->x, VAR_4->y, VAR_4->z, VAR_4->rx, VAR_4->ry, VAR_1->fov, VAR_1->ortho, VAR_1->render_radius);
    float VAR_8[6][4];
    FUNC_4(VAR_8, VAR_1->render_radius, VAR_7);
    FUNC_7(VAR_2->program);
    FUNC_6(VAR_2->matrix, 1, VAR_0, VAR_7);
    FUNC_5(VAR_2->sampler, 3);
    FUNC_5(VAR_2->extra1, 1);
    for (int VAR_9 = 0; VAR_9 < VAR_1->chunk_count; VAR_9++) {
        Chunk *VAR_10 = VAR_1->chunks + VAR_9;
        if (FUNC_0(VAR_10, VAR_5, VAR_6) > VAR_1->sign_radius) {
            continue;
        }
        if (!FUNC_1(
            VAR_8, VAR_10->p, VAR_10->q, VAR_10->miny, VAR_10->maxy))
        {
            continue;
        }
        FUNC_3(VAR_2, VAR_10);
    }
}
