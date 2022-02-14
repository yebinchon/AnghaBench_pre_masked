
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ key_frame; scalar_t__* data; } ;
struct TYPE_8__ {int max_ref_frames; int ref_frames; scalar_t__ keyframe; TYPE_2__* current_picture; int avctx; TYPE_2__** last_picture; int * halfpel_plane; } ;
typedef TYPE_1__ SnowContext ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_2__*) ;
 int FUNC_4 (int *,int *,int) ;

int FUNC_5(SnowContext *VAR_3){
   AVFrame *VAR_4;
   int VAR_5, VAR_6;

    FUNC_2(VAR_3->avctx);

    VAR_4= VAR_3->last_picture[VAR_3->max_ref_frames-1];
    for(VAR_5=VAR_3->max_ref_frames-1; VAR_5>0; VAR_5--)
        VAR_3->last_picture[VAR_5] = VAR_3->last_picture[VAR_5-1];
    FUNC_4(VAR_3->halfpel_plane+1, VAR_3->halfpel_plane, (VAR_3->max_ref_frames-1)*sizeof(void*)*4*4);
    if(VAR_2 && VAR_3->current_picture->data[0]) {
        if((VAR_6 = FUNC_3(VAR_3, VAR_3->halfpel_plane[0], VAR_3->current_picture)) < 0)
            return VAR_6;
    }
    VAR_3->last_picture[0] = VAR_3->current_picture;
    VAR_3->current_picture = VAR_4;

    if(VAR_3->keyframe){
        VAR_3->ref_frames= 0;
    }else{
        int VAR_7;
        for(VAR_7=0; VAR_7<VAR_3->max_ref_frames && VAR_3->last_picture[VAR_7]->data[0]; VAR_7++)
            if(VAR_7 && VAR_3->last_picture[VAR_7-1]->key_frame)
                break;
        VAR_3->ref_frames= VAR_7;
        if(VAR_3->ref_frames==0){
            FUNC_0(VAR_3->avctx,VAR_1, "No reference frames\n");
            return VAR_0;
        }
    }
    if ((VAR_6 = FUNC_1(VAR_3, VAR_3->current_picture)) < 0)
        return VAR_6;

    VAR_3->current_picture->key_frame= VAR_3->keyframe;

    return 0;
}
