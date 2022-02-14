
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int render_radius; int ortho; int fov; int height; int width; } ;
struct TYPE_10__ {int matrix; int program; } ;
struct TYPE_8__ {int ry; int rx; int z; int y; int x; } ;
struct TYPE_9__ {TYPE_1__ state; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Player ;
typedef int GLuint ;
typedef TYPE_3__ Attrib ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int,int) ;
 TYPE_6__* VAR_2 ;
 int FUNC_2 (int,int,int,double) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int ,float*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,int*,int*,int*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (float*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_11(Attrib *VAR_3, Player *VAR_4) {
    State *VAR_5 = &VAR_4->state;
    float VAR_6[16];
    FUNC_10(
        VAR_6, VAR_2->width, VAR_2->height,
        VAR_5->x, VAR_5->y, VAR_5->z, VAR_5->rx, VAR_5->ry, VAR_2->fov, VAR_2->ortho, VAR_2->render_radius);
    int VAR_7, VAR_8, VAR_9;
    int VAR_10 = FUNC_8(0, VAR_5->x, VAR_5->y, VAR_5->z, VAR_5->rx, VAR_5->ry, &VAR_7, &VAR_8, &VAR_9);
    if (FUNC_9(VAR_10)) {
        FUNC_7(VAR_3->program);
        FUNC_5(1);
        FUNC_4(VAR_0);
        FUNC_6(VAR_3->matrix, 1, VAR_1, VAR_6);
        GLuint VAR_11 = FUNC_2(VAR_7, VAR_8, VAR_9, 0.53);
        FUNC_1(VAR_3, VAR_11, 3, 24);
        FUNC_0(VAR_11);
        FUNC_3(VAR_0);
    }
}
