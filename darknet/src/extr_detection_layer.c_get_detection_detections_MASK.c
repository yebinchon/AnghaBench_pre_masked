
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float* output; int side; int n; int classes; scalar_t__ sqrt; } ;
typedef TYPE_1__ layer ;
struct TYPE_8__ {float x; float y; int w; int h; } ;
struct TYPE_7__ {float objectness; float* prob; TYPE_3__ bbox; } ;
typedef TYPE_2__ detection ;
typedef TYPE_3__ box ;


 int FUNC_0 (float,int) ;

void FUNC_1(layer VAR_0, int VAR_1, int VAR_2, float VAR_3, detection *VAR_4)
{
    int VAR_5,VAR_6,VAR_7;
    float *VAR_8 = VAR_0.output;

    for (VAR_5 = 0; VAR_5 < VAR_0.side*VAR_0.side; ++VAR_5){
        int VAR_9 = VAR_5 / VAR_0.side;
        int VAR_10 = VAR_5 % VAR_0.side;
        for(VAR_7 = 0; VAR_7 < VAR_0.n; ++VAR_7){
            int VAR_11 = VAR_5*VAR_0.n + VAR_7;
            int VAR_12 = VAR_0.side*VAR_0.side*VAR_0.classes + VAR_5*VAR_0.n + VAR_7;
            float VAR_13 = VAR_8[VAR_12];
            int VAR_14 = VAR_0.side*VAR_0.side*(VAR_0.classes + VAR_0.n) + (VAR_5*VAR_0.n + VAR_7)*4;
            box VAR_15;
            VAR_15.x = (VAR_8[VAR_14 + 0] + VAR_10) / VAR_0.side * VAR_1;
            VAR_15.y = (VAR_8[VAR_14 + 1] + VAR_9) / VAR_0.side * VAR_2;
            VAR_15.w = FUNC_0(VAR_8[VAR_14 + 2], (VAR_0.sqrt?2:1)) * VAR_1;
            VAR_15.h = FUNC_0(VAR_8[VAR_14 + 3], (VAR_0.sqrt?2:1)) * VAR_2;
            VAR_4[VAR_11].bbox = VAR_15;
            VAR_4[VAR_11].objectness = VAR_13;
            for(VAR_6 = 0; VAR_6 < VAR_0.classes; ++VAR_6){
                int VAR_16 = VAR_5*VAR_0.classes;
                float VAR_17 = VAR_13*VAR_8[VAR_16+VAR_6];
                VAR_4[VAR_11].prob[VAR_6] = (VAR_17 > VAR_3) ? VAR_17 : 0;
            }
        }
    }
}
