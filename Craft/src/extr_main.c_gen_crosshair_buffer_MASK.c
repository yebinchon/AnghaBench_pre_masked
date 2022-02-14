
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int data ;
struct TYPE_2__ {int width; int height; int scale; } ;
typedef int GLuint ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,float*) ;

GLuint FUNC_1() {
    int VAR_1 = VAR_0->width / 2;
    int VAR_2 = VAR_0->height / 2;
    int VAR_3 = 10 * VAR_0->scale;
    float VAR_4[] = {
        VAR_1, VAR_2 - VAR_3, VAR_1, VAR_2 + VAR_3,
        VAR_1 - VAR_3, VAR_2, VAR_1 + VAR_3, VAR_2
    };
    return FUNC_0(sizeof(VAR_4), VAR_4);
}
