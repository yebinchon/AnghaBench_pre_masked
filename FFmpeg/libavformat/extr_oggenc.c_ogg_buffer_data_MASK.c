
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ int64_t ;
struct TYPE_18__ {TYPE_5__** streams; TYPE_4__* priv_data; } ;
struct TYPE_17__ {int time_base; TYPE_1__* codecpar; TYPE_2__* priv_data; } ;
struct TYPE_16__ {scalar_t__ pref_size; scalar_t__ pref_duration; } ;
struct TYPE_15__ {int granule; scalar_t__ size; int segments_count; int flags; int* segments; scalar_t__ data; size_t stream_index; scalar_t__ start_granule; } ;
struct TYPE_14__ {scalar_t__ last_granule; TYPE_3__ page; } ;
struct TYPE_13__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ OGGStreamContext ;
typedef TYPE_3__ OGGPage ;
typedef TYPE_4__ OGGContext ;
typedef TYPE_5__ AVStream ;
typedef TYPE_6__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (TYPE_6__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_4, AVStream *VAR_5,
                           uint8_t *VAR_6, unsigned VAR_7, int64_t VAR_8,
                           int VAR_9)
{
    OGGStreamContext *VAR_10 = VAR_5->priv_data;
    OGGContext *VAR_11 = VAR_4->priv_data;
    int VAR_12 = VAR_7 / 255 + 1;
    uint8_t *VAR_13 = VAR_6;
    int VAR_14, VAR_15, VAR_16, VAR_17 = 0;






    if ((VAR_5->codecpar->codec_id == VAR_0 || VAR_5->codecpar->codec_id == VAR_1) && !VAR_9 &&
        (FUNC_5(VAR_10, VAR_8) >
         FUNC_5(VAR_10, VAR_10->last_granule) + 1 ||
         FUNC_6(VAR_10, VAR_8))) {
        if (VAR_10->page.granule != -1)
            FUNC_4(VAR_4, VAR_10);
        VAR_17 = 1;
    }


    if (!VAR_9 && VAR_10->page.size > 0 &&
        VAR_3 - VAR_10->page.size < VAR_7) {
        FUNC_4(VAR_4, VAR_10);
    }

    for (VAR_14 = 0; VAR_14 < VAR_12; ) {
        OGGPage *VAR_18 = &VAR_10->page;

        VAR_15 = FUNC_0(VAR_12 - VAR_14, 255 - VAR_18->segments_count);

        if (VAR_14 && !VAR_18->segments_count)
            VAR_18->flags |= 1;

        FUNC_3(VAR_18->segments+VAR_18->segments_count, 255, VAR_15 - 1);
        VAR_18->segments_count += VAR_15 - 1;

        VAR_16 = FUNC_0(VAR_7, VAR_15*255);
        VAR_18->segments[VAR_18->segments_count++] = VAR_16 - (VAR_15-1)*255;
        FUNC_2(VAR_18->data+VAR_18->size, VAR_13, VAR_16);
        VAR_13 += VAR_16;
        VAR_7 -= VAR_16;
        VAR_14 += VAR_15;
        VAR_18->size += VAR_16;

        if (VAR_14 == VAR_12)
            VAR_18->granule = VAR_8;

        {
            AVStream *VAR_19 = VAR_4->streams[VAR_18->stream_index];

            int64_t VAR_20 = FUNC_1(VAR_18->start_granule, VAR_19->time_base,
                                         VAR_2);
            int64_t VAR_21 = FUNC_1(FUNC_5(VAR_10, VAR_18->granule),
                                         VAR_19->time_base, VAR_2);

            if (VAR_18->segments_count == 255) {
                FUNC_4(VAR_4, VAR_10);
            } else if (!VAR_9) {
                if ((VAR_11->pref_size > 0 && VAR_18->size >= VAR_11->pref_size) ||
                    (VAR_11->pref_duration > 0 && VAR_21 - VAR_20 >= VAR_11->pref_duration)) {
                    FUNC_4(VAR_4, VAR_10);
                }
            }
        }
    }

    if (VAR_17 && VAR_10->page.granule != -1)
        FUNC_4(VAR_4, VAR_10);

    return 0;
}
