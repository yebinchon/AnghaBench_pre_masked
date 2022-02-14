
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_17__ {TYPE_2__* priv_data; } ;
struct TYPE_16__ {int size; int data; } ;
struct TYPE_15__ {int pts; int end_display_time; scalar_t__ num_rects; } ;
struct TYPE_13__ {scalar_t__* str; } ;
struct TYPE_14__ {int* pktbuf; int start_time; int end_time; scalar_t__ last_real_time; int readorder; TYPE_1__ buffer; scalar_t__ buffer_changed; scalar_t__ screen_touched; scalar_t__ real_time; int pktbuf_size; } ;
typedef TYPE_2__ CCaptionSubContext ;
typedef TYPE_3__ AVSubtitle ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int**,int *,int) ;
 int FUNC_2 (TYPE_2__*,int ,char*,int,int ) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__*,int ,int ,int *,int *) ;
 int FUNC_6 (TYPE_2__*,char*,scalar_t__*) ;
 int FUNC_7 (int*,int ,int) ;
 int VAR_3 ;
 int FUNC_8 (TYPE_2__*,int const,int,int) ;
 scalar_t__ FUNC_9 (int*) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_4, void *VAR_5, int *VAR_6, AVPacket *VAR_7)
{
    CCaptionSubContext *VAR_8 = VAR_4->priv_data;
    AVSubtitle *VAR_9 = VAR_5;
    const int64_t VAR_10 = VAR_9->pts;
    uint8_t *VAR_11 = ((void*)0);
    int VAR_12 = VAR_7->size;
    int VAR_13 = 0;
    int VAR_14;

    FUNC_1(&VAR_8->pktbuf, &VAR_8->pktbuf_size, VAR_12);
    if (!VAR_8->pktbuf) {
        FUNC_2(VAR_8, VAR_0, "Insufficient Memory of %d truncated to %d\n", VAR_12, VAR_8->pktbuf_size);
        return FUNC_0(VAR_2);
    }
    FUNC_7(VAR_8->pktbuf, VAR_7->data, VAR_12);
    VAR_11 = VAR_8->pktbuf;

    for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14 += 3) {
        uint8_t VAR_15 = *(VAR_11 + VAR_14) & 3;
        if (FUNC_9(VAR_11 + VAR_14))
            continue;

        if(VAR_15 == 1)
            continue;
        else
            FUNC_8(VAR_8, VAR_10, *(VAR_11 + VAR_14 + 1) & 0x7f, *(VAR_11 + VAR_14 + 2) & 0x7f);

        if (!VAR_8->buffer_changed)
            continue;
        VAR_8->buffer_changed = 0;

        if (*VAR_8->buffer.str || VAR_8->real_time)
        {
            FUNC_6(VAR_8, "cdp writing data (%s)\n",VAR_8->buffer.str);
            VAR_13 = FUNC_5(VAR_9, VAR_8->buffer.str, VAR_8->readorder++, 0, ((void*)0), ((void*)0));
            if (VAR_13 < 0)
                return VAR_13;
            VAR_9->pts = VAR_8->start_time;
            if (!VAR_8->real_time)
                VAR_9->end_display_time = FUNC_3(VAR_8->end_time - VAR_8->start_time,
                                                     VAR_1, VAR_3);
            else
                VAR_9->end_display_time = -1;
            VAR_8->buffer_changed = 0;
            VAR_8->last_real_time = VAR_9->pts;
            VAR_8->screen_touched = 0;
        }
    }

    if (VAR_8->real_time && VAR_8->screen_touched &&
        VAR_9->pts > VAR_8->last_real_time + FUNC_3(200, VAR_3, VAR_1)) {
        VAR_8->last_real_time = VAR_9->pts;
        VAR_8->screen_touched = 0;

        FUNC_4(VAR_8);
        VAR_8->buffer_changed = 0;

        VAR_13 = FUNC_5(VAR_9, VAR_8->buffer.str, VAR_8->readorder++, 0, ((void*)0), ((void*)0));
        if (VAR_13 < 0)
            return VAR_13;
        VAR_9->end_display_time = -1;
    }

    *VAR_6 = VAR_9->num_rects > 0;
    return VAR_13;
}
