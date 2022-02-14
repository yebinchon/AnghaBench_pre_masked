
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ sz; int * buf; int duration; int pts; } ;
struct TYPE_6__ {TYPE_1__ frame; } ;
struct vpx_codec_cx_pkt {TYPE_2__ data; } ;
struct FrameListData {int flags; int frame_number; scalar_t__ sz_alpha; int * buf_alpha; int sse; scalar_t__ have_sse; int * buf; scalar_t__ sz; int duration; int pts; } ;
struct TYPE_7__ {int frame_number; scalar_t__ have_sse; int sse; } ;
typedef TYPE_3__ VPxContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct FrameListData *VAR_1,
                             const struct vpx_codec_cx_pkt *VAR_2,
                             const struct vpx_codec_cx_pkt *VAR_3,
                             VPxContext *VAR_4)
{
    VAR_1->pts = VAR_2->data.frame.pts;
    VAR_1->duration = VAR_2->data.frame.duration;
    VAR_1->flags = VAR_2->data.frame.flags;
    VAR_1->sz = VAR_2->data.frame.sz;
    VAR_1->buf = VAR_2->data.frame.buf;
    VAR_1->have_sse = 0;

    if (!(VAR_1->flags & VAR_0)) {
        VAR_1->frame_number = ++VAR_4->frame_number;
        VAR_1->have_sse = VAR_4->have_sse;
        if (VAR_4->have_sse) {




            FUNC_0(VAR_1->sse, VAR_4->sse, sizeof(VAR_1->sse));
            VAR_4->have_sse = 0;
        }
    } else {
        VAR_1->frame_number = -1;
    }
    if (VAR_3) {
        VAR_1->buf_alpha = VAR_3->data.frame.buf;
        VAR_1->sz_alpha = VAR_3->data.frame.sz;
    } else {
        VAR_1->buf_alpha = ((void*)0);
        VAR_1->sz_alpha = 0;
    }
}
