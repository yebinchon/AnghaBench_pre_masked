
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_16__ {int flags; TYPE_1__* internal; int pb; TYPE_3__** streams; TYPE_2__* priv_data; } ;
struct TYPE_15__ {int timestamp; scalar_t__ pos; } ;
struct TYPE_14__ {scalar_t__ duration; TYPE_4__* index_entries; } ;
struct TYPE_13__ {scalar_t__ header_filesize; scalar_t__ frames; scalar_t__ is_cbr; scalar_t__ usetoc; scalar_t__ xing_toc; } ;
struct TYPE_12__ {scalar_t__ data_offset; } ;
typedef TYPE_2__ MP3DecContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVIndexEntry ;
typedef TYPE_5__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_2 (TYPE_5__*,int ,char*) ;
 int FUNC_3 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_6 (TYPE_5__*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_2, int VAR_3, int64_t VAR_4,
                    int VAR_5)
{
    MP3DecContext *VAR_6 = VAR_2->priv_data;
    AVIndexEntry *VAR_7, VAR_8;
    AVStream *VAR_9 = VAR_2->streams[0];
    int64_t VAR_10;
    int VAR_11 = VAR_2->flags & VAR_0;
    int64_t VAR_12 = VAR_6->header_filesize;

    if (VAR_12 <= 0) {
        int64_t VAR_13 = FUNC_4(VAR_2->pb);
        if (VAR_13 > 0 && VAR_13 > VAR_2->internal->data_offset)
            VAR_12 = VAR_13 - VAR_2->internal->data_offset;
    }

    if (VAR_6->xing_toc && (VAR_6->usetoc || (VAR_11 && !VAR_6->is_cbr))) {
        int64_t VAR_14 = FUNC_1(VAR_9, VAR_4, VAR_5);



        FUNC_2(VAR_2, VAR_1, "Using MP3 TOC to seek; may be imprecise.\n");

        if (VAR_14 < 0)
            return VAR_14;

        VAR_7 = &VAR_9->index_entries[VAR_14];
    } else if (VAR_11 && VAR_9->duration > 0 && VAR_12 > 0) {
        if (!VAR_6->is_cbr)
            FUNC_2(VAR_2, VAR_1, "Using scaling to seek VBR MP3; may be imprecise.\n");

        VAR_7 = &VAR_8;
        VAR_4 = FUNC_0(VAR_4, 0, VAR_9->duration);
        VAR_7->timestamp = VAR_4;
        VAR_7->pos = FUNC_3(VAR_4, VAR_12, VAR_9->duration) + VAR_2->internal->data_offset;
    } else {
        return -1;
    }

    VAR_10 = FUNC_6(VAR_2, VAR_7->pos, VAR_5);
    if (VAR_10 < 0)
        return VAR_10;

    if (VAR_6->is_cbr && VAR_7 == &VAR_8 && VAR_6->frames) {
        int VAR_15 = FUNC_3(VAR_9->duration, 1, VAR_6->frames);
        VAR_8 = VAR_15 * FUNC_3(VAR_10 - VAR_2->internal->data_offset, VAR_6->frames, VAR_6->header_filesize);
    }

    FUNC_5(VAR_2, VAR_9, VAR_7->timestamp);
    return 0;
}
