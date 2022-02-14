
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int den; int num; } ;
struct TYPE_6__ {TYPE_1__ time_base; } ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,int ,char*,float,float) ;
 double FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4, VAR_5;
    int VAR_6;
    float VAR_7, VAR_8;

    VAR_2 = VAR_1->time_base.den;
    VAR_3 = VAR_1->time_base.num;

    VAR_6 = FUNC_0(VAR_2, VAR_3);
    if (VAR_6 > 1) {
        VAR_2 /= VAR_6;
        VAR_3 /= VAR_6;
    }

    if (VAR_2 <= 65000 && VAR_3 <= 65000) {
        VAR_1->time_base.den = VAR_2;
        VAR_1->time_base.num = VAR_3;
        return;
    }

    VAR_8 = (float) VAR_2 / (float) VAR_3;
    VAR_7 = FUNC_2(VAR_8 * 1000.0) / 1000.0;

    VAR_4 = (int) VAR_7;
    if (VAR_7 > (int) VAR_7) {
        VAR_4 = (VAR_4 + 1) * 1000;
        VAR_5 = (int) FUNC_2((float) VAR_4 / VAR_7);
    } else
        VAR_5 = 1;

    VAR_6 = FUNC_0(VAR_4, VAR_5);
    if (VAR_6 > 1) {
        VAR_4 /= VAR_6;
        VAR_5 /= VAR_6;
    }

    if (VAR_3 > VAR_5) {
        VAR_1->time_base.den = VAR_4;
        VAR_1->time_base.num = VAR_5;
        FUNC_1(VAR_1, VAR_0,
               "Xvid: framerate re-estimated: %.2f, %.3f%% correction\n",
               VAR_7, (((VAR_7 - VAR_8) / VAR_8) * 100.0));
    } else {
        VAR_1->time_base.den = VAR_2;
        VAR_1->time_base.num = VAR_3;
    }
}
