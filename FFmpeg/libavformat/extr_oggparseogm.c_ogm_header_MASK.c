
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct ogg_stream {int psize; scalar_t__ pstart; scalar_t__ buf; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_23__ {scalar_t__ codec_type; scalar_t__ codec_id; int codec_tag; int width; int height; int bit_rate; int sample_rate; int extradata_size; scalar_t__* extradata; int channels; } ;
struct TYPE_22__ {TYPE_3__** streams; struct ogg* priv_data; } ;
struct TYPE_21__ {TYPE_1__* internal; TYPE_8__* codecpar; int need_parsing; } ;
struct TYPE_20__ {int buffer; } ;
struct TYPE_19__ {int need_context_update; } ;
typedef TYPE_2__ GetByteContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__**) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (TYPE_3__*,int,int,int) ;
 int FUNC_5 (TYPE_2__*,scalar_t__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int) ;
 scalar_t__ FUNC_13 (TYPE_8__*,int) ;
 int VAR_11 ;
 void* FUNC_14 (int ,int) ;
 int VAR_12 ;
 int FUNC_15 (TYPE_4__*,TYPE_3__*,int ,int) ;
 int FUNC_16 (scalar_t__*,int *,int) ;

__attribute__((used)) static int
FUNC_17(AVFormatContext *VAR_13, int VAR_14)
{
    struct ogg *VAR_15 = VAR_13->priv_data;
    struct ogg_stream *VAR_16 = VAR_15->streams + VAR_14;
    AVStream *VAR_17 = VAR_13->streams[VAR_14];
    GetByteContext VAR_18;
    uint64_t VAR_19;
    uint64_t VAR_20;
    uint32_t VAR_21;

    FUNC_10(&VAR_18, VAR_16->buf + VAR_16->pstart, VAR_16->psize);
    if (!(FUNC_11(&VAR_18) & 1))
        return 0;

    if (FUNC_11(&VAR_18) == 1) {
        FUNC_12(&VAR_18, 1);

        if (FUNC_11(&VAR_18) == 'v'){
            int VAR_22;
            VAR_17->codecpar->codec_type = VAR_3;
            FUNC_12(&VAR_18, 8);
            VAR_22 = FUNC_8(&VAR_18);
            VAR_17->codecpar->codec_id = FUNC_14(VAR_11, VAR_22);
            VAR_17->codecpar->codec_tag = VAR_22;
            if (VAR_17->codecpar->codec_id == VAR_7)
                VAR_17->need_parsing = VAR_5;
        } else if (FUNC_11(&VAR_18) == 't') {
            VAR_17->codecpar->codec_type = VAR_2;
            VAR_17->codecpar->codec_id = VAR_8;
            FUNC_12(&VAR_18, 12);
        } else {
            uint8_t VAR_23[5] = { 0 };
            int VAR_24;
            VAR_17->codecpar->codec_type = VAR_1;
            FUNC_12(&VAR_18, 8);
            FUNC_5(&VAR_18, VAR_23, 4);
            VAR_23[4] = 0;
            VAR_24 = FUNC_16(VAR_23, ((void*)0), 16);
            VAR_17->codecpar->codec_id = FUNC_14(VAR_12, VAR_24);

            if (VAR_17->codecpar->codec_id != VAR_6)
                VAR_17->need_parsing = VAR_4;
        }

        VAR_21 = FUNC_8(&VAR_18);
        VAR_21 = FUNC_1(VAR_21, VAR_16->psize);
        VAR_19 = FUNC_9(&VAR_18);
        VAR_20 = FUNC_9(&VAR_18);
        if (!VAR_19 || !VAR_20) {
            FUNC_3(VAR_13, VAR_9, "Invalid timing values.\n");
            return VAR_0;
        }

        FUNC_12(&VAR_18, 4);
        FUNC_12(&VAR_18, 8);

        if(VAR_17->codecpar->codec_type == VAR_3){
            VAR_17->codecpar->width = FUNC_8(&VAR_18);
            VAR_17->codecpar->height = FUNC_8(&VAR_18);
            FUNC_4(VAR_17, 64, VAR_19, VAR_20 * 10000000);
        } else {
            VAR_17->codecpar->channels = FUNC_7(&VAR_18);
            FUNC_12(&VAR_18, 2);
            VAR_17->codecpar->bit_rate = FUNC_8(&VAR_18) * 8;
            VAR_17->codecpar->sample_rate = VAR_20 * 10000000 / VAR_19;
            FUNC_4(VAR_17, 64, 1, VAR_17->codecpar->sample_rate);
            if (VAR_21 >= 56 && VAR_17->codecpar->codec_id == VAR_6) {
                FUNC_12(&VAR_18, 4);
                VAR_21 -= 4;
            }
            if (VAR_21 > 52) {
                VAR_21 -= 52;
                if (FUNC_6(&VAR_18) < VAR_21)
                    return VAR_0;
                FUNC_2(&VAR_17->codecpar->extradata);
                if (FUNC_13(VAR_17->codecpar, VAR_21) < 0)
                    return FUNC_0(VAR_10);
                FUNC_5(&VAR_18, VAR_17->codecpar->extradata, VAR_17->codecpar->extradata_size);
            }
        }


        VAR_17->internal->need_context_update = 1;
    } else if (FUNC_11(&VAR_18) == 3) {
        FUNC_12(&VAR_18, 7);
        if (FUNC_6(&VAR_18) > 1)
            FUNC_15(VAR_13, VAR_17, VAR_18.buffer, FUNC_6(&VAR_18) - 1);
    }

    return 1;
}
