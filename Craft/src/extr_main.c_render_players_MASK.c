
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int player_count; TYPE_2__* players; int render_radius; int ortho; int fov; int height; int width; } ;
struct TYPE_11__ {int timer; int sampler; int camera; int matrix; int program; } ;
struct TYPE_9__ {int z; int y; int x; int ry; int rx; } ;
struct TYPE_10__ {TYPE_1__ state; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Player ;
typedef TYPE_3__ Attrib ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 TYPE_6__* VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int,int ,float*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (float*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_7 () ;

void FUNC_8(Attrib *VAR_2, Player *VAR_3) {
    State *VAR_4 = &VAR_3->state;
    float VAR_5[16];
    FUNC_6(
        VAR_5, VAR_1->width, VAR_1->height,
        VAR_4->x, VAR_4->y, VAR_4->z, VAR_4->rx, VAR_4->ry, VAR_1->fov, VAR_1->ortho, VAR_1->render_radius);
    FUNC_5(VAR_2->program);
    FUNC_4(VAR_2->matrix, 1, VAR_0, VAR_5);
    FUNC_3(VAR_2->camera, VAR_4->x, VAR_4->y, VAR_4->z);
    FUNC_2(VAR_2->sampler, 0);
    FUNC_1(VAR_2->timer, FUNC_7());
    for (int VAR_6 = 0; VAR_6 < VAR_1->player_count; VAR_6++) {
        Player *VAR_7 = VAR_1->players + VAR_6;
        if (VAR_7 != VAR_3) {
            FUNC_0(VAR_2, VAR_7);
        }
    }
}
