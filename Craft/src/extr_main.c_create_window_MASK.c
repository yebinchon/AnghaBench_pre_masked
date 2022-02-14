
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int window; } ;
struct TYPE_4__ {int width; int height; } ;
typedef TYPE_1__ GLFWvidmode ;
typedef int GLFWmonitor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int,int,char*,int *,int *) ;
 int * FUNC_1 () ;
 TYPE_1__* FUNC_2 (int *,int*) ;

void FUNC_3() {
    int VAR_4 = VAR_2;
    int VAR_5 = VAR_1;
    GLFWmonitor *VAR_6 = ((void*)0);
    if (VAR_0) {
        int VAR_7;
        VAR_6 = FUNC_1();
        const GLFWvidmode *VAR_8 = FUNC_2(VAR_6, &VAR_7);
        VAR_4 = VAR_8[VAR_7 - 1].width;
        VAR_5 = VAR_8[VAR_7 - 1].height;
    }
    VAR_3->window = FUNC_0(
        VAR_4, VAR_5, "Craft", VAR_6, ((void*)0));
}
