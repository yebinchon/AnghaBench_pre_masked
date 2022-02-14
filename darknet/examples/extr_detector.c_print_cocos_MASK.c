
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


 int* VAR_0 ;
 int FUNC_0 (int *,char*,int,int,float,float,float,float,double) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(FILE *VAR_1, char *VAR_2, detection *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;
    int VAR_10 = FUNC_1(VAR_2);
    for(VAR_8 = 0; VAR_8 < VAR_4; ++VAR_8){
        float VAR_11 = VAR_3[VAR_8].bbox.x - VAR_3[VAR_8].bbox.w/2.;
        float VAR_12 = VAR_3[VAR_8].bbox.x + VAR_3[VAR_8].bbox.w/2.;
        float VAR_13 = VAR_3[VAR_8].bbox.y - VAR_3[VAR_8].bbox.h/2.;
        float VAR_14 = VAR_3[VAR_8].bbox.y + VAR_3[VAR_8].bbox.h/2.;

        if (VAR_11 < 0) VAR_11 = 0;
        if (VAR_13 < 0) VAR_13 = 0;
        if (VAR_12 > VAR_6) VAR_12 = VAR_6;
        if (VAR_14 > VAR_7) VAR_14 = VAR_7;

        float VAR_15 = VAR_11;
        float VAR_16 = VAR_13;
        float VAR_17 = VAR_12 - VAR_11;
        float VAR_18 = VAR_14 - VAR_13;

        for(VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9){
            if (VAR_3[VAR_8].prob[VAR_9]) FUNC_0(VAR_1, "{\"image_id\":%d, \"category_id\":%d, \"bbox\":[%f, %f, %f, %f], \"score\":%f},\n", VAR_10, VAR_0[VAR_9], VAR_15, VAR_16, VAR_17, VAR_18, VAR_3[VAR_8].prob[VAR_9]);
        }
    }
}
