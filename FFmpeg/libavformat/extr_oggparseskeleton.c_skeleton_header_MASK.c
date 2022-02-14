
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct ogg_stream {int pstart; int flags; int psize; int lastpts; scalar_t__ start_granule; int * buf; } ;
struct ogg {struct ogg_stream* streams; } ;
typedef scalar_t__ int64_t ;
struct TYPE_9__ {TYPE_2__** streams; struct ogg* priv_data; } ;
struct TYPE_8__ {int start_time; TYPE_1__* codecpar; } ;
struct TYPE_7__ {int codec_type; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_3__*,int ,char*,...) ;
 int FUNC_4 (int*,int*,scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (TYPE_2__*,int,int,int) ;
 int FUNC_6 (struct ogg*,int ) ;
 int FUNC_7 (int *,char*,int) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_5, int VAR_6)
{
    struct ogg *VAR_7 = VAR_5->priv_data;
    struct ogg_stream *VAR_8 = VAR_7->streams + VAR_6;
    AVStream *VAR_9 = VAR_5->streams[VAR_6];
    uint8_t *VAR_10 = VAR_8->buf + VAR_8->pstart;
    int VAR_11, VAR_12;
    int64_t VAR_13, VAR_14;
    uint64_t VAR_15;
    int VAR_16, VAR_17;

    VAR_9->codecpar->codec_type = VAR_0;

    if ((VAR_8->flags & VAR_3) && VAR_8->psize == 0)
        return 1;

    if (VAR_8->psize < 8)
        return -1;

    if (!FUNC_7(VAR_10, "fishead", 8)) {
        if (VAR_8->psize < 64)
            return -1;

        VAR_11 = FUNC_0(VAR_10+8);
        VAR_12 = FUNC_0(VAR_10+10);

        if (VAR_11 != 3 && VAR_11 != 4) {
            FUNC_3(VAR_5, VAR_1, "Unknown skeleton version %d.%d\n",
                   VAR_11, VAR_12);
            return -1;
        }






        VAR_13 = FUNC_2(VAR_10+12);
        VAR_14 = FUNC_2(VAR_10+20);

        if (VAR_14 > 0 && VAR_13 > 0) {
            int VAR_18;
            FUNC_4(&VAR_17, &VAR_18, VAR_13, VAR_14, VAR_2);
            FUNC_5(VAR_9, 64, 1, VAR_18);
            VAR_8->lastpts =
            VAR_9->start_time = VAR_17;
        }
    } else if (!FUNC_7(VAR_10, "fisbone", 8)) {
        if (VAR_8->psize < 52)
            return -1;

        VAR_16 = FUNC_6(VAR_7, FUNC_1(VAR_10+12));
        VAR_15 = FUNC_2(VAR_10+36);
        if (VAR_16 < 0) {
            FUNC_3(VAR_5, VAR_1, "Serial number in fisbone doesn't match any stream\n");
            return 1;
        }
        VAR_8 = VAR_7->streams + VAR_16;
        if (VAR_8->start_granule != VAR_4) {
            FUNC_3(VAR_5, VAR_1, "Multiple fisbone for the same stream\n");
            return 1;
        }
        if (VAR_15 != VAR_4) {
            VAR_8->start_granule = VAR_15;
        }
    }

    return 1;
}
