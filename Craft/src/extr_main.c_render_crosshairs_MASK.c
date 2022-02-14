
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int scale; int height; int width; } ;
struct TYPE_5__ {int matrix; int program; } ;
typedef int GLuint ;
typedef TYPE_1__ Attrib ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int,int ,float*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (float*,int ,int ) ;

void FUNC_9(Attrib *VAR_3) {
    float VAR_4[16];
    FUNC_8(VAR_4, VAR_2->width, VAR_2->height);
    FUNC_7(VAR_3->program);
    FUNC_5(4 * VAR_2->scale);
    FUNC_4(VAR_0);
    FUNC_6(VAR_3->matrix, 1, VAR_1, VAR_4);
    GLuint VAR_5 = FUNC_2();
    FUNC_1(VAR_3, VAR_5, 2, 4);
    FUNC_0(VAR_5);
    FUNC_3(VAR_0);
}
