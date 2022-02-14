
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__* typing_buffer; int render_radius; int ortho; int fov; int height; int width; int typing; } ;
struct TYPE_11__ {int extra1; int sampler; int matrix; int program; } ;
struct TYPE_9__ {int ry; int rx; int z; int y; int x; } ;
struct TYPE_10__ {TYPE_1__ state; } ;
typedef TYPE_1__ State ;
typedef TYPE_2__ Player ;
typedef int GLuint ;
typedef int GLfloat ;
typedef TYPE_3__ Attrib ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int,int,int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int ,int) ;
 TYPE_7__* VAR_3 ;
 int FUNC_3 (int,int,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,int ,float*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int*,int*,int*,int*) ;
 int * FUNC_8 (int,int ) ;
 int FUNC_9 (float*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,scalar_t__*,int) ;

void FUNC_12(Attrib *VAR_4, Player *VAR_5) {
    if (!VAR_3->typing || VAR_3->typing_buffer[0] != VAR_0) {
        return;
    }
    int VAR_6, VAR_7, VAR_8, VAR_9;
    if (!FUNC_7(VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_9)) {
        return;
    }
    State *VAR_10 = &VAR_5->state;
    float VAR_11[16];
    FUNC_9(
        VAR_11, VAR_3->width, VAR_3->height,
        VAR_10->x, VAR_10->y, VAR_10->z, VAR_10->rx, VAR_10->ry, VAR_3->fov, VAR_3->ortho, VAR_3->render_radius);
    FUNC_6(VAR_4->program);
    FUNC_5(VAR_4->matrix, 1, VAR_1, VAR_11);
    FUNC_4(VAR_4->sampler, 3);
    FUNC_4(VAR_4->extra1, 1);
    char VAR_12[VAR_2];
    FUNC_11(VAR_12, VAR_3->typing_buffer + 1, VAR_2);
    VAR_12[VAR_2 - 1] = '\0';
    GLfloat *VAR_13 = FUNC_8(5, FUNC_10(VAR_12));
    int VAR_14 = FUNC_0(VAR_13, VAR_6, VAR_7, VAR_8, VAR_9, VAR_12);
    GLuint VAR_15 = FUNC_3(5, VAR_14, VAR_13);
    FUNC_2(VAR_4, VAR_15, VAR_14);
    FUNC_1(VAR_15);
}
