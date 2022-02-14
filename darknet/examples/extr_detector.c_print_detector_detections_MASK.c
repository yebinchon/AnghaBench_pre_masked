
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int w; int y; int h; } ;
struct TYPE_5__ {double* prob; TYPE_1__ bbox; } ;
typedef TYPE_2__ detection ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,double,float,float,float,float) ;

void FUNC_1(FILE **VAR_0, char *VAR_1, detection *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;
    for(VAR_7 = 0; VAR_7 < VAR_3; ++VAR_7){
        float VAR_9 = VAR_2[VAR_7].bbox.x - VAR_2[VAR_7].bbox.w/2. + 1;
        float VAR_10 = VAR_2[VAR_7].bbox.x + VAR_2[VAR_7].bbox.w/2. + 1;
        float VAR_11 = VAR_2[VAR_7].bbox.y - VAR_2[VAR_7].bbox.h/2. + 1;
        float VAR_12 = VAR_2[VAR_7].bbox.y + VAR_2[VAR_7].bbox.h/2. + 1;

        if (VAR_9 < 1) VAR_9 = 1;
        if (VAR_11 < 1) VAR_11 = 1;
        if (VAR_10 > VAR_5) VAR_10 = VAR_5;
        if (VAR_12 > VAR_6) VAR_12 = VAR_6;

        for(VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8){
            if (VAR_2[VAR_7].prob[VAR_8]) FUNC_0(VAR_0[VAR_8], "%s %f %f %f %f %f\n", VAR_1, VAR_2[VAR_7].prob[VAR_8],
                    VAR_9, VAR_11, VAR_10, VAR_12);
        }
    }
}
