
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int filename; } ;
typedef TYPE_1__ sortable_bbox ;
struct TYPE_13__ {int w; int h; int c; } ;
typedef TYPE_2__ network ;
struct TYPE_14__ {int w; int h; int c; int data; } ;
typedef TYPE_3__ image ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int,int) ;
 float* FUNC_1 (int,int) ;
 int FUNC_2 (float*) ;
 int FUNC_3 (TYPE_3__) ;
 TYPE_3__ FUNC_4 (int ,int,int) ;
 int FUNC_5 (float*,int ,int) ;
 float* FUNC_6 (TYPE_2__,float*) ;
 int VAR_0 ;

void FUNC_7(network VAR_1, sortable_bbox *VAR_2, sortable_bbox *VAR_3, int VAR_4, int VAR_5)
{
    image VAR_6 = FUNC_4(VAR_2->filename, VAR_1.w, VAR_1.h);
    image VAR_7 = FUNC_4(VAR_3->filename, VAR_1.w, VAR_1.h);
    float *VAR_8 = FUNC_1(VAR_1.w*VAR_1.h*VAR_1.c, sizeof(float));
    FUNC_5(VAR_8, VAR_6, VAR_6*VAR_6*VAR_6*sizeof(float));
    FUNC_5(VAR_8+VAR_6*VAR_6*VAR_6, VAR_7, VAR_7*VAR_7*VAR_7*sizeof(float));
    float *VAR_9 = FUNC_6(VAR_1, VAR_8);
    ++VAR_0;

    int VAR_10;
    for(VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10){
        if(VAR_5 < 0 || VAR_5 == VAR_10){
            int VAR_11 = VAR_9[VAR_10*2] > VAR_9[VAR_10*2+1];
            FUNC_0(VAR_2, VAR_3, VAR_10, VAR_11);
        }
    }

    FUNC_3(VAR_6);
    FUNC_3(VAR_7);
    FUNC_2(VAR_8);
}
