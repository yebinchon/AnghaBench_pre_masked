
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_22__ {TYPE_4__* pb; TYPE_2__* priv_data; } ;
struct TYPE_21__ {int seekable; } ;
struct TYPE_20__ {TYPE_1__* codecpar; scalar_t__ nb_frames; } ;
struct TYPE_19__ {scalar_t__ leading; } ;
struct TYPE_18__ {scalar_t__ height; scalar_t__ width; scalar_t__ codec_tag; int format; int codec_id; int codec_type; } ;
typedef TYPE_2__ FilmstripDemuxContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ,TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,char*) ;
 TYPE_3__* FUNC_3 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (TYPE_5__*,char*) ;
 int FUNC_10 (TYPE_3__*,int,int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_11)
{
    FilmstripDemuxContext *VAR_12 = VAR_11->priv_data;
    AVIOContext *VAR_13 = VAR_11->pb;
    AVStream *VAR_14;

    if (!(VAR_11->pb->seekable & VAR_2))
        return FUNC_0(VAR_7);

    FUNC_6(VAR_13, FUNC_7(VAR_13) - 36, VAR_10);
    if (FUNC_5(VAR_13) != VAR_9) {
        FUNC_2(VAR_11, VAR_5, "magic number not found\n");
        return VAR_0;
    }

    VAR_14 = FUNC_3(VAR_11, ((void*)0));
    if (!VAR_14)
        return FUNC_0(VAR_8);

    VAR_14->nb_frames = FUNC_5(VAR_13);
    if (FUNC_4(VAR_13) != 0) {
        FUNC_9(VAR_11, "Unsupported packing method");
        return VAR_1;
    }

    FUNC_8(VAR_13, 2);
    VAR_14->codecpar->codec_type = VAR_3;
    VAR_14->codecpar->codec_id = VAR_4;
    VAR_14->codecpar->format = VAR_6;
    VAR_14->codecpar->codec_tag = 0;
    VAR_14->codecpar->width = FUNC_4(VAR_13);
    VAR_14->codecpar->height = FUNC_4(VAR_13);
    VAR_12->leading = FUNC_4(VAR_13);

    if (FUNC_1(VAR_14->codecpar->width, VAR_14->codecpar->height, 0, VAR_11) < 0)
        return VAR_0;

    FUNC_10(VAR_14, 64, 1, FUNC_4(VAR_13));

    FUNC_6(VAR_13, 0, VAR_10);

    return 0;
}
