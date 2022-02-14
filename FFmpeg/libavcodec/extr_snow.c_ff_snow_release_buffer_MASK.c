
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__* data; } ;
struct TYPE_8__ {TYPE_2__* priv_data; } ;
struct TYPE_7__ {int max_ref_frames; int **** halfpel_plane; TYPE_1__* current_picture; TYPE_5__** last_picture; } ;
struct TYPE_6__ {int* linesize; } ;
typedef TYPE_2__ SnowContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *) ;

void FUNC_2(AVCodecContext *VAR_1)
{
    SnowContext *VAR_2 = VAR_1->priv_data;
    int VAR_3;

    if(VAR_2->last_picture[VAR_2->max_ref_frames-1]->data[0]){
        FUNC_0(VAR_2->last_picture[VAR_2->max_ref_frames-1]);
        for(VAR_3=0; VAR_3<9; VAR_3++)
            if(VAR_2->halfpel_plane[VAR_2->max_ref_frames-1][1+VAR_3/3][VAR_3%3]) {
                FUNC_1(VAR_2->halfpel_plane[VAR_2->max_ref_frames-1][1+VAR_3/3][VAR_3%3] - VAR_0*(1+VAR_2->current_picture->linesize[VAR_3%3]));
                VAR_2->halfpel_plane[VAR_2->max_ref_frames-1][1+VAR_3/3][VAR_3%3] = ((void*)0);
            }
    }
}
