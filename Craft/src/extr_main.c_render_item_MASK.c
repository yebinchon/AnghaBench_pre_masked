
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t item_index; int scale; int height; int width; } ;
struct TYPE_6__ {int timer; int sampler; int camera; int matrix; int program; } ;
typedef int GLuint ;
typedef TYPE_1__ Attrib ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_3 (int ,int ,int ,double,int) ;
 int FUNC_4 (int ,int ,int ,double,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ,int) ;
 int FUNC_8 (int ,int,int ,float*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int) ;
 int* VAR_2 ;
 int FUNC_11 (float*,int ,int ,int ) ;
 int FUNC_12 () ;

void FUNC_13(Attrib *VAR_3) {
    float VAR_4[16];
    FUNC_11(VAR_4, VAR_1->width, VAR_1->height, VAR_1->scale);
    FUNC_9(VAR_3->program);
    FUNC_8(VAR_3->matrix, 1, VAR_0, VAR_4);
    FUNC_7(VAR_3->camera, 0, 0, 5);
    FUNC_6(VAR_3->sampler, 0);
    FUNC_5(VAR_3->timer, FUNC_12());
    int VAR_5 = VAR_2[VAR_1->item_index];
    if (FUNC_10(VAR_5)) {
        GLuint VAR_6 = FUNC_4(0, 0, 0, 0.5, VAR_5);
        FUNC_2(VAR_3, VAR_6);
        FUNC_0(VAR_6);
    }
    else {
        GLuint VAR_7 = FUNC_3(0, 0, 0, 0.5, VAR_5);
        FUNC_1(VAR_3, VAR_7);
        FUNC_0(VAR_7);
    }
}
