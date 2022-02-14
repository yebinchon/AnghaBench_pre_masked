
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ppm_name ;
struct TYPE_18__ {TYPE_2__* priv_data; } ;
struct TYPE_17__ {int size; int * data; } ;
struct TYPE_16__ {TYPE_1__** rects; int end_display_time; int start_display_time; } ;
struct TYPE_15__ {int buf_size; int sub_id; scalar_t__ forced_subs_only; int * buf; } ;
struct TYPE_14__ {int flags; scalar_t__* data; int h; int w; } ;
typedef TYPE_2__ DVDSubContext ;
typedef TYPE_3__ AVSubtitle ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,int const*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int const*,int) ;
 int FUNC_3 (int *,char*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (char*,scalar_t__,int ,int ,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (char*,int,char*,int ) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_2,
                         void *VAR_3, int *VAR_4,
                         AVPacket *VAR_5)
{
    DVDSubContext *VAR_6 = VAR_2->priv_data;
    const uint8_t *VAR_7 = VAR_5->data;
    int VAR_8 = VAR_5->size;
    AVSubtitle *VAR_9 = VAR_3;
    int VAR_10 = 0;
    int VAR_11;

    if (VAR_6->buf_size) {
        int VAR_12 = FUNC_1(VAR_2, VAR_7, VAR_8);
        if (VAR_12 < 0) {
            *VAR_4 = 0;
            return VAR_12;
        }
        VAR_7 = VAR_6->buf;
        VAR_8 = VAR_6->buf_size;
        VAR_10 = 1;
    }

    VAR_11 = FUNC_2(VAR_6, VAR_9, VAR_7, VAR_8);
    if (VAR_11 == FUNC_0(VAR_1)) {
        *VAR_4 = 0;
        return VAR_10 ? 0 : FUNC_1(VAR_2, VAR_7, VAR_8);
    }

    if (VAR_11 < 0) {
        VAR_6->buf_size = 0;
    no_subtitle:
        FUNC_6(VAR_9);
        *VAR_4 = 0;

        return VAR_8;
    }
    if (!VAR_11 && FUNC_4(VAR_6, VAR_9) == 0)
        goto no_subtitle;

    if (VAR_6->forced_subs_only && !(VAR_9->rects[0]->flags & VAR_0))
        goto no_subtitle;
    VAR_6->buf_size = 0;
    *VAR_4 = 1;
    return VAR_8;
}
