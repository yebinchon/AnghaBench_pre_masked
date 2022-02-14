
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {TYPE_1__* f; } ;
struct TYPE_14__ {int encoding_error; int shared; int reference; int needs_realloc; int b_frame_score; int mc_mb_var_sum; int mb_var_sum; int field_picture; TYPE_10__* hwaccel_priv_buf; scalar_t__ hwaccel_picture_private; TYPE_5__ tf; TYPE_1__* f; } ;
struct TYPE_13__ {int* buf; } ;
struct TYPE_12__ {scalar_t__ data; } ;
typedef TYPE_2__ Picture ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_10__* FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_6 (int ,int ,int) ;

int FUNC_7(AVCodecContext *VAR_1, Picture *VAR_2, Picture *VAR_3)
{
    int VAR_4;

    FUNC_1(!VAR_2->f->buf[0]);
    FUNC_1(VAR_3->f->buf[0]);

    VAR_3->tf.f = VAR_3->f;
    VAR_2->tf.f = VAR_2->f;
    VAR_4 = FUNC_4(&VAR_2->tf, &VAR_3->tf);
    if (VAR_4 < 0)
        goto fail;

    VAR_4 = FUNC_5(VAR_2, VAR_3);
    if (VAR_4 < 0)
        goto fail;

    if (VAR_3->hwaccel_picture_private) {
        VAR_2->hwaccel_priv_buf = FUNC_2(VAR_3->hwaccel_priv_buf);
        if (!VAR_2->hwaccel_priv_buf) {
            VAR_4 = FUNC_0(VAR_0);
            goto fail;
        }
        VAR_2->hwaccel_picture_private = VAR_2->hwaccel_priv_buf->data;
    }

    VAR_2->field_picture = VAR_3->field_picture;
    VAR_2->mb_var_sum = VAR_3->mb_var_sum;
    VAR_2->mc_mb_var_sum = VAR_3->mc_mb_var_sum;
    VAR_2->b_frame_score = VAR_3->b_frame_score;
    VAR_2->needs_realloc = VAR_3->needs_realloc;
    VAR_2->reference = VAR_3->reference;
    VAR_2->shared = VAR_3->shared;

    FUNC_6(VAR_2->encoding_error, VAR_3->encoding_error,
           sizeof(VAR_2->encoding_error));

    return 0;
fail:
    FUNC_3(VAR_1, VAR_2);
    return VAR_4;
}
