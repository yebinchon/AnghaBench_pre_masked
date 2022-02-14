
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_5__* hwaccel_priv_buf; scalar_t__ hwaccel_picture_private; int uses_2pass; int mv; int segmentation_map; TYPE_5__* extradata; int tf; } ;
typedef TYPE_1__ VP9Frame ;
struct TYPE_7__ {scalar_t__ data; } ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1, VP9Frame *VAR_2, VP9Frame *VAR_3)
{
    int VAR_4;

    VAR_4 = FUNC_2(&VAR_2->tf, &VAR_3->tf);
    if (VAR_4 < 0)
        return VAR_4;

    VAR_2->extradata = FUNC_1(VAR_3->extradata);
    if (!VAR_2->extradata)
        goto fail;

    VAR_2->segmentation_map = VAR_3->segmentation_map;
    VAR_2->mv = VAR_3->mv;
    VAR_2->uses_2pass = VAR_3->uses_2pass;

    if (VAR_3->hwaccel_picture_private) {
        VAR_2->hwaccel_priv_buf = FUNC_1(VAR_3->hwaccel_priv_buf);
        if (!VAR_2->hwaccel_priv_buf)
            goto fail;
        VAR_2->hwaccel_picture_private = VAR_2->hwaccel_priv_buf->data;
    }

    return 0;

fail:
    FUNC_3(VAR_1, VAR_2);
    return FUNC_0(VAR_0);
}
