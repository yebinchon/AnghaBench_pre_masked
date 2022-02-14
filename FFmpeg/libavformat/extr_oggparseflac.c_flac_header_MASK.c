
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ogg_stream {int* buf; size_t pstart; int psize; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_10__ {scalar_t__ extradata; int extradata_size; int codec_id; int codec_type; } ;
struct TYPE_9__ {TYPE_1__** streams; struct ogg* priv_data; } ;
struct TYPE_8__ {TYPE_6__* codecpar; int need_parsing; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVStream ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*,int,int,int) ;
 scalar_t__ FUNC_3 (TYPE_6__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int*,int) ;
 int FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int*,int) ;
 int FUNC_8 (scalar_t__,int*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int
FUNC_11 (AVFormatContext * VAR_8, int VAR_9)
{
    struct ogg *VAR_10 = VAR_8->priv_data;
    struct ogg_stream *VAR_11 = VAR_10->streams + VAR_9;
    AVStream *VAR_12 = VAR_8->streams[VAR_9];
    GetBitContext VAR_13;
    int VAR_14;

    if (VAR_11->buf[VAR_11->pstart] == 0xff)
        return 0;

    FUNC_7(&VAR_13, VAR_11->buf + VAR_11->pstart, VAR_11->psize*8);
    FUNC_9(&VAR_13);
    VAR_14 = FUNC_5(&VAR_13, 7);

    if (VAR_14 == VAR_7) {
        uint8_t *VAR_15 = VAR_11->buf + VAR_11->pstart + 5 + 4 + 4 + 4;
        uint32_t VAR_16;

        FUNC_10(&VAR_13, 4*8);
        if(FUNC_5(&VAR_13, 8) != 1)
            return -1;
        FUNC_10(&VAR_13, 8 + 16);
        FUNC_10(&VAR_13, 4*8);


        if (FUNC_6(&VAR_13, 32) != VAR_6)
            return -1;

        VAR_12->codecpar->codec_type = VAR_1;
        VAR_12->codecpar->codec_id = VAR_3;
        VAR_12->need_parsing = VAR_2;

        if (FUNC_3(VAR_12->codecpar, VAR_6) < 0)
            return FUNC_0(VAR_4);
        FUNC_8(VAR_12->codecpar->extradata, VAR_15, VAR_12->codecpar->extradata_size);

        VAR_16 = FUNC_1(VAR_12->codecpar->extradata + 10) >> 4;
        if (!VAR_16)
            return VAR_0;

        FUNC_2(VAR_12, 64, 1, VAR_16);
    } else if (VAR_14 == VAR_5) {
        FUNC_4(VAR_8, VAR_12, VAR_11->buf + VAR_11->pstart + 4, VAR_11->psize - 4);
    }

    return 1;
}
