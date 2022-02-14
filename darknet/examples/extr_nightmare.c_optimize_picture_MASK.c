
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {int n; int inputs; int w; int h; int delta; int input; scalar_t__ delta_gpu; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_21__ {int outputs; int delta; int output; scalar_t__ delta_gpu; int output_gpu; } ;
typedef TYPE_2__ layer ;
struct TYPE_22__ {float w; float h; int c; int data; } ;
typedef TYPE_3__ image ;


 int FUNC_0 (int,float,int ,int,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int,float) ;
 int FUNC_4 (TYPE_3__) ;
 int FUNC_5 (int,int ,int,int ,int) ;
 int FUNC_6 (int,int ,int,scalar_t__,int) ;
 TYPE_3__ FUNC_7 (TYPE_3__,int,int,float,float) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (scalar_t__,int ,int) ;
 int FUNC_11 (scalar_t__,int ,int) ;
 int FUNC_12 (TYPE_3__,double) ;
 int FUNC_13 (TYPE_3__) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_3__) ;
 TYPE_3__ FUNC_17 (float,float,int) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (char*,int,int,int,int,int,int) ;
 int FUNC_20 () ;
 TYPE_3__ FUNC_21 (TYPE_3__,int,int) ;
 int FUNC_22 (TYPE_1__*,float,float) ;

void FUNC_23(network *VAR_0, image VAR_1, int VAR_2, float VAR_3, float VAR_4, float VAR_5, int VAR_6)
{


    VAR_0->n = VAR_2 + 1;

    int VAR_7 = FUNC_20()%16 - 8;
    int VAR_8 = FUNC_20()%16 - 8;
    int VAR_9 = FUNC_20()%2;

    image VAR_10 = FUNC_7(VAR_1, VAR_7, VAR_8, VAR_1.w, VAR_1.h);
    image VAR_11 = FUNC_21(VAR_10, (int)(VAR_1.w * VAR_3), (int)(VAR_1.h * VAR_3));
    if(VAR_9) FUNC_13(VAR_11);

    FUNC_22(VAR_0, VAR_11.w, VAR_11.h);
    layer VAR_12 = VAR_0->layers[VAR_0->n-1];


    image VAR_13 = FUNC_17(VAR_11.w, VAR_11.h, VAR_11.c);
    FUNC_19("\nnet: %d %d %d im: %d %d %d\n", VAR_0->w, VAR_0->h, VAR_0->inputs, VAR_11.w, VAR_11.h, VAR_11.c);
    FUNC_5(VAR_0->inputs, VAR_11.data, 1, VAR_0->input, 1);
    VAR_0->delta = VAR_13.data;
    FUNC_14(VAR_0);
    FUNC_5(VAR_12.outputs, VAR_12.output, 1, VAR_12.delta, 1);
    FUNC_3(VAR_12.output, VAR_12.delta, VAR_12.outputs, VAR_5);
    FUNC_1(VAR_0);


    if(VAR_9) FUNC_13(VAR_13);

    image VAR_14 = FUNC_21(VAR_13, VAR_1.w, VAR_1.h);
    image VAR_15 = FUNC_7(VAR_14, -VAR_7, -VAR_8, VAR_1.w, VAR_1.h);
    image VAR_16 = FUNC_17(VAR_15.w, VAR_15.h, VAR_15.c);
    FUNC_12(VAR_16, .5);
    FUNC_0(VAR_1.w*VAR_1.h*VAR_1.c, -1, VAR_1.data, 1, VAR_16.data, 1);
    FUNC_0(VAR_1.w*VAR_1.h*VAR_1.c, .1, VAR_16.data, 1, VAR_15.data, 1);

    if(VAR_6) FUNC_18(VAR_15.data, VAR_15.w*VAR_15.h*VAR_15.c);
    FUNC_0(VAR_1.w*VAR_1.h*VAR_1.c, VAR_4, VAR_15.data, 1, VAR_1.data, 1);
    FUNC_4(VAR_1);

    FUNC_16(VAR_10);
    FUNC_16(VAR_11);
    FUNC_16(VAR_13);
    FUNC_16(VAR_14);
    FUNC_16(VAR_15);

}
