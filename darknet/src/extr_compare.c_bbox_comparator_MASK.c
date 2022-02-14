
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int w; int h; int c; } ;
struct TYPE_7__ {int class; int filename; TYPE_2__ net; } ;
typedef TYPE_1__ sortable_bbox ;
typedef TYPE_2__ network ;
struct TYPE_9__ {int w; int h; int c; int data; } ;
typedef TYPE_3__ image ;


 float* FUNC_0 (int,int) ;
 int FUNC_1 (float*) ;
 int FUNC_2 (TYPE_3__) ;
 TYPE_3__ FUNC_3 (int ,int,int) ;
 int FUNC_4 (float*,int ,int) ;
 float* FUNC_5 (TYPE_2__,float*) ;
 int VAR_0 ;

int FUNC_6(const void *VAR_1, const void *VAR_2)
{
    ++VAR_0;
    sortable_bbox VAR_3 = *(sortable_bbox*)VAR_1;
    sortable_bbox VAR_4 = *(sortable_bbox*)VAR_2;
    network VAR_5 = VAR_3;
    int VAR_6 = VAR_3;

    image VAR_7 = FUNC_3(VAR_3, VAR_5.w, VAR_5.h);
    image VAR_8 = FUNC_3(VAR_4, VAR_5.w, VAR_5.h);
    float *VAR_9 = FUNC_0(VAR_5.w*VAR_5.h*VAR_5.c, sizeof(float));
    FUNC_4(VAR_9, VAR_7, VAR_7*VAR_7*VAR_7*sizeof(float));
    FUNC_4(VAR_9+VAR_7*VAR_7*VAR_7, VAR_8, VAR_8*VAR_8*VAR_8*sizeof(float));
    float *VAR_10 = FUNC_5(VAR_5, VAR_9);

    FUNC_2(VAR_7);
    FUNC_2(VAR_8);
    FUNC_1(VAR_9);
    if (VAR_10[VAR_6*2] > VAR_10[VAR_6*2+1]){
        return 1;
    }
    return -1;
}
