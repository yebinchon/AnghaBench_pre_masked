
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double frames; double since; int fps; } ;
typedef TYPE_1__ FPS ;


 double FUNC_0 () ;
 int FUNC_1 (double) ;

void FUNC_2(FPS *VAR_0) {
    VAR_0->frames++;
    double VAR_1 = FUNC_0();
    double VAR_2 = VAR_1 - VAR_0->since;
    if (VAR_2 >= 1) {
        VAR_0->fps = FUNC_1(VAR_0->frames / VAR_2);
        VAR_0->frames = 0;
        VAR_0->since = VAR_1;
    }
}
