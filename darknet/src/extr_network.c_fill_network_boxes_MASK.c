
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int n; int h; int w; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {scalar_t__ type; int w; int h; int n; } ;
typedef TYPE_2__ layer ;
typedef int detection ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__,int,int,float,int *) ;
 int FUNC_1 (TYPE_2__,int,int,int ,int ,float,int*,float,int,int *) ;
 int FUNC_2 (TYPE_2__,int,int,int ,int ,float,int*,int,int *) ;

void FUNC_3(network *VAR_3, int VAR_4, int VAR_5, float VAR_6, float VAR_7, int *VAR_8, int VAR_9, detection *VAR_10)
{
    int VAR_11;
    for(VAR_11 = 0; VAR_11 < VAR_3->n; ++VAR_11){
        layer VAR_12 = VAR_3->layers[VAR_11];
        if(VAR_12.type == VAR_2){
            int VAR_13 = FUNC_2(VAR_12, VAR_4, VAR_5, VAR_3->w, VAR_3->h, VAR_6, VAR_8, VAR_9, VAR_10);
            VAR_10 += VAR_13;
        }
        if(VAR_12.type == VAR_1){
            FUNC_1(VAR_12, VAR_4, VAR_5, VAR_3->w, VAR_3->h, VAR_6, VAR_8, VAR_7, VAR_9, VAR_10);
            VAR_10 += VAR_12.w*VAR_12.h*VAR_12.n;
        }
        if(VAR_12.type == VAR_0){
            FUNC_0(VAR_12, VAR_4, VAR_5, VAR_6, VAR_10);
            VAR_10 += VAR_12.w*VAR_12.h*VAR_12.n;
        }
    }
}
