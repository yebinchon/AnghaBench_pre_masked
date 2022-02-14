
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int ortho; float render_radius; int chunk_count; TYPE_3__* chunks; int fov; int height; int width; } ;
struct TYPE_15__ {int timer; int extra4; int extra3; int extra2; int extra1; int sampler; int camera; int matrix; int program; } ;
struct TYPE_14__ {scalar_t__ faces; int maxy; int miny; int q; int p; } ;
struct TYPE_12__ {int z; int y; int x; int ry; int rx; } ;
struct TYPE_13__ {TYPE_1__ state; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Player ;
typedef TYPE_3__ Chunk ;
typedef TYPE_4__ Attrib ;


 float VAR_0 ;
 int VAR_1 ;
 float FUNC_0 (TYPE_3__*,int,int) ;
 int FUNC_1 (float**,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (float**,float,float*) ;
 TYPE_7__* VAR_2 ;
 float FUNC_6 () ;
 int FUNC_7 (int ,float) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int,int ,float*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (float*,int ,int ,int ,int ,int ,int ,int ,int ,int,float) ;
 float FUNC_13 () ;

int FUNC_14(Attrib *VAR_3, Player *VAR_4) {
    int VAR_5 = 0;
    State *VAR_6 = &VAR_4->state;
    FUNC_4(VAR_4);
    int VAR_7 = FUNC_2(VAR_6->x);
    int VAR_8 = FUNC_2(VAR_6->z);
    float VAR_9 = FUNC_6();
    float VAR_10[16];
    FUNC_12(
        VAR_10, VAR_2->width, VAR_2->height,
        VAR_6->x, VAR_6->y, VAR_6->z, VAR_6->rx, VAR_6->ry, VAR_2->fov, VAR_2->ortho, VAR_2->render_radius);
    float VAR_11[6][4];
    FUNC_5(VAR_11, VAR_2->render_radius, VAR_10);
    FUNC_11(VAR_3->program);
    FUNC_10(VAR_3->matrix, 1, VAR_1, VAR_10);
    FUNC_9(VAR_3->camera, VAR_6->x, VAR_6->y, VAR_6->z);
    FUNC_8(VAR_3->sampler, 0);
    FUNC_8(VAR_3->extra1, 2);
    FUNC_7(VAR_3->extra2, VAR_9);
    FUNC_7(VAR_3->extra3, VAR_2->render_radius * VAR_0);
    FUNC_8(VAR_3->extra4, VAR_2->ortho);
    FUNC_7(VAR_3->timer, FUNC_13());
    for (int VAR_12 = 0; VAR_12 < VAR_2->chunk_count; VAR_12++) {
        Chunk *VAR_13 = VAR_2->chunks + VAR_12;
        if (FUNC_0(VAR_13, VAR_7, VAR_8) > VAR_2->render_radius) {
            continue;
        }
        if (!FUNC_1(
            VAR_11, VAR_13->p, VAR_13->q, VAR_13->miny, VAR_13->maxy))
        {
            continue;
        }
        FUNC_3(VAR_3, VAR_13);
        VAR_5 += VAR_13->faces;
    }
    return VAR_5;
}
