
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int render_radius; int fov; int height; int width; } ;
struct TYPE_10__ {int timer; int sampler; int matrix; int program; } ;
struct TYPE_8__ {int ry; int rx; } ;
struct TYPE_9__ {TYPE_1__ state; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Player ;
typedef int GLuint ;
typedef TYPE_3__ Attrib ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 TYPE_6__* VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int ,float*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (float*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 () ;

void FUNC_7(Attrib *VAR_2, Player *VAR_3, GLuint VAR_4) {
    State *VAR_5 = &VAR_3->state;
    float VAR_6[16];
    FUNC_5(
        VAR_6, VAR_1->width, VAR_1->height,
        0, 0, 0, VAR_5->rx, VAR_5->ry, VAR_1->fov, 0, VAR_1->render_radius);
    FUNC_4(VAR_2->program);
    FUNC_3(VAR_2->matrix, 1, VAR_0, VAR_6);
    FUNC_2(VAR_2->sampler, 2);
    FUNC_1(VAR_2->timer, FUNC_6());
    FUNC_0(VAR_2, VAR_4, 512 * 3);
}
