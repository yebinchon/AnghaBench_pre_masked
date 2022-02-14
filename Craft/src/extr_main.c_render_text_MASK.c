
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int height; int width; } ;
struct TYPE_5__ {int extra1; int sampler; int matrix; int program; } ;
typedef int GLuint ;
typedef TYPE_1__ Attrib ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (float,float,float,char*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int ,float*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (float*,int ,int ) ;
 int FUNC_7 (char*) ;

void FUNC_8(
    Attrib *VAR_2, int VAR_3, float VAR_4, float VAR_5, float VAR_6, char *VAR_7)
{
    float VAR_8[16];
    FUNC_6(VAR_8, VAR_1->width, VAR_1->height);
    FUNC_5(VAR_2->program);
    FUNC_4(VAR_2->matrix, 1, VAR_0, VAR_8);
    FUNC_3(VAR_2->sampler, 1);
    FUNC_3(VAR_2->extra1, 0);
    int VAR_9 = FUNC_7(VAR_7);
    VAR_4 -= VAR_6 * VAR_3 * (VAR_9 - 1) / 2;
    GLuint VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);
    FUNC_1(VAR_2, VAR_10, VAR_9);
    FUNC_0(VAR_10);
}
