
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frames; scalar_t__ frame_count; int avctx; } ;
typedef TYPE_1__ AudioFrameQueue ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3(AudioFrameQueue *VAR_1)
{
    if(VAR_1->frame_count)
        FUNC_1(VAR_1->avctx, VAR_0, "%d frames left in the queue on closing\n", VAR_1->frame_count);
    FUNC_0(&VAR_1->frames);
    FUNC_2(VAR_1, 0, sizeof(*VAR_1));
}
