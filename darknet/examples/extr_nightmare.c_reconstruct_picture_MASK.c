
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {float* input; float* delta; float* truth; int delta_gpu; int input_gpu; } ;
typedef TYPE_1__ network ;
struct TYPE_17__ {int outputs; int delta_gpu; int output_gpu; } ;
typedef TYPE_2__ layer ;
struct TYPE_18__ {int w; int h; int c; float* data; } ;
typedef TYPE_3__ image ;


 int FUNC_0 (int,float,float*,int,float*,int) ;
 int FUNC_1 (int,int,int ,int,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_3__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (float*,int) ;
 int FUNC_7 (int ,float*,int) ;
 int FUNC_8 (int ,float*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_3__) ;
 TYPE_2__ FUNC_12 (TYPE_1__*) ;
 float FUNC_13 (float*,int) ;
 TYPE_3__ FUNC_14 (int,int,int) ;
 int FUNC_15 (char*,float) ;
 int FUNC_16 (int,float,float*,int) ;

void FUNC_17(network *VAR_0, float *VAR_1, image VAR_2, image VAR_3, float VAR_4, float VAR_5, float VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9 = 0;
    for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9) {
        image VAR_10 = FUNC_14(VAR_2.w, VAR_2.h, VAR_2.c);
        VAR_0->input = VAR_2.data;
        VAR_0->delta = VAR_10.data;
        VAR_0->truth = VAR_1;

        FUNC_9(VAR_0);
        FUNC_2(VAR_0);



        FUNC_0(VAR_2.w*VAR_2.h*VAR_2.c, 1, VAR_10.data, 1, VAR_3.data, 1);


        FUNC_0(VAR_2.w*VAR_2.h*VAR_2.c, VAR_4, VAR_3.data, 1, VAR_2.data, 1);
        FUNC_16(VAR_2.w*VAR_2.h*VAR_2.c, VAR_5, VAR_3.data, 1);

        float VAR_11 = FUNC_13(VAR_10.data, VAR_2.w*VAR_2.h*VAR_2.c);
        FUNC_15("mag: %f\n", VAR_11);


        FUNC_4(VAR_2);
        FUNC_11(VAR_10);
    }
}
