
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_13__ {int** data; int height; int* linesize; int width; } ;
struct TYPE_12__ {size_t* co; int frame_num; int history_len; float independence; float* blackpt; float strength; float* whitept; int num_components; int step; TYPE_1__* max; TYPE_2__* min; } ;
struct TYPE_11__ {int in; float smoothed; float out; } ;
struct TYPE_10__ {float history_sum; int* history; } ;
struct TYPE_9__ {float history_sum; int* history; } ;
typedef TYPE_3__ NormalizeLocal ;
typedef TYPE_4__ NormalizeContext ;
typedef TYPE_5__ AVFrame ;


 void* FUNC_0 (int,size_t) ;
 float FUNC_1 (float,float,float) ;
 void* FUNC_2 (int,int) ;
 float FUNC_3 (float,float,float) ;

__attribute__((used)) static void FUNC_4(NormalizeContext *VAR_0, AVFrame *VAR_1, AVFrame *VAR_2)
{

    NormalizeLocal VAR_3[3], VAR_4[3];

    float VAR_5;
    float VAR_6;
    uint8_t VAR_7[3][256];
    int VAR_8, VAR_9, VAR_10;



    for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
        VAR_3[VAR_10].in = VAR_4[VAR_10].in = VAR_1->data[0][VAR_0->co[VAR_10]];
    for (VAR_9 = 0; VAR_9 < VAR_1->height; VAR_9++) {
        uint8_t *VAR_11 = VAR_1->data[0] + VAR_9 * VAR_1->linesize[0];
        for (VAR_8 = 0; VAR_8 < VAR_1->width; VAR_8++) {
            for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
                VAR_3[VAR_10].in = FUNC_2(VAR_3[VAR_10].in, VAR_11[VAR_0->co[VAR_10]]);
                VAR_4[VAR_10].in = FUNC_0(VAR_4[VAR_10].in, VAR_11[VAR_0->co[VAR_10]]);
            }
            VAR_11 += VAR_0->step;
        }
    }



    {
        int VAR_12 = VAR_0->frame_num % VAR_0->history_len;


        int VAR_13 = VAR_0->frame_num + 1;
        if (VAR_0->frame_num >= VAR_0->history_len) {

            for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
                VAR_0->min[VAR_10].history_sum -= VAR_0->min[VAR_10].history[VAR_12];
                VAR_0->max[VAR_10].history_sum -= VAR_0->max[VAR_10].history[VAR_12];
            }
            VAR_13 = VAR_0->history_len;
        }


        for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
            VAR_0->min[VAR_10].history_sum += (VAR_0->min[VAR_10].history[VAR_12] = VAR_3[VAR_10].in);
            VAR_3[VAR_10].smoothed = VAR_0->min[VAR_10].history_sum / (float)VAR_13;
            VAR_0->max[VAR_10].history_sum += (VAR_0->max[VAR_10].history[VAR_12] = VAR_4[VAR_10].in);
            VAR_4[VAR_10].smoothed = VAR_0->max[VAR_10].history_sum / (float)VAR_13;
        }
    }




    VAR_5 = FUNC_3(VAR_3[0].smoothed, VAR_3[1].smoothed, VAR_3[2].smoothed);
    VAR_6 = FUNC_1(VAR_4[0].smoothed, VAR_4[1].smoothed, VAR_4[2].smoothed);



    for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
        int VAR_14;



        VAR_3[VAR_10].smoothed = (VAR_3[VAR_10].smoothed * VAR_0->independence)
                        + (VAR_5 * (1.0f - VAR_0->independence));
        VAR_4[VAR_10].smoothed = (VAR_4[VAR_10].smoothed * VAR_0->independence)
                        + (VAR_6 * (1.0f - VAR_0->independence));




        VAR_3[VAR_10].out = (VAR_0->blackpt[VAR_10] * VAR_0->strength)
                   + (VAR_3[VAR_10].in * (1.0f - VAR_0->strength));
        VAR_4[VAR_10].out = (VAR_0->whitept[VAR_10] * VAR_0->strength)
                   + (VAR_4[VAR_10].in * (1.0f - VAR_0->strength));






        if (VAR_3[VAR_10].smoothed == VAR_4[VAR_10].smoothed) {

            for (VAR_14 = VAR_3[VAR_10].in; VAR_14 <= VAR_4[VAR_10].in; VAR_14++)
                VAR_7[VAR_10][VAR_14] = VAR_3[VAR_10].out;
        } else {




            float VAR_15 = (VAR_4[VAR_10].out - VAR_3[VAR_10].out) / (VAR_4[VAR_10].smoothed - VAR_3[VAR_10].smoothed);
            for (VAR_14 = VAR_3[VAR_10].in; VAR_14 <= VAR_4[VAR_10].in; VAR_14++) {
                int VAR_16 = (VAR_14 - VAR_3[VAR_10].smoothed) * VAR_15 + VAR_3[VAR_10].out + 0.5f;
                VAR_16 = FUNC_0(VAR_16, 0);
                VAR_16 = FUNC_2(VAR_16, 255);
                VAR_7[VAR_10][VAR_14] = VAR_16;
            }
        }
    }


    for (VAR_9 = 0; VAR_9 < VAR_1->height; VAR_9++) {
        uint8_t *VAR_17 = VAR_1->data[0] + VAR_9 * VAR_1->linesize[0];
        uint8_t *VAR_18 = VAR_2->data[0] + VAR_9 * VAR_2->linesize[0];
        for (VAR_8 = 0; VAR_8 < VAR_1->width; VAR_8++) {
            for (VAR_10 = 0; VAR_10 < 3; VAR_10++)
                VAR_18[VAR_0->co[VAR_10]] = VAR_7[VAR_10][VAR_17[VAR_0->co[VAR_10]]];
            if (VAR_0->num_components == 4)

                VAR_18[VAR_0->co[3]] = VAR_17[VAR_0->co[3]];
            VAR_17 += VAR_0->step;
            VAR_18 += VAR_0->step;
        }
    }

    VAR_0->frame_num++;
}
