
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buf; int sz; int flags; int duration; int pts; } ;
struct TYPE_6__ {TYPE_1__ frame; } ;
struct aom_codec_cx_pkt {TYPE_2__ data; } ;
struct FrameListData {int sse; scalar_t__ have_sse; scalar_t__ frame_number; int buf; int sz; int flags; int duration; int pts; } ;
struct TYPE_7__ {scalar_t__ have_sse; int sse; scalar_t__ frame_number; } ;
typedef TYPE_3__ AOMContext ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static inline void FUNC_1(AOMContext *VAR_0,
                             struct FrameListData *VAR_1,
                             const struct aom_codec_cx_pkt *VAR_2)
{
    VAR_1->pts = VAR_2->data.frame.pts;
    VAR_1->duration = VAR_2->data.frame.duration;
    VAR_1->flags = VAR_2->data.frame.flags;
    VAR_1->sz = VAR_2->data.frame.sz;
    VAR_1->buf = VAR_2->data.frame.buf;
}
