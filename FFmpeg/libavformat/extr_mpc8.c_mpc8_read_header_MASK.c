
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int int64_t ;
struct TYPE_28__ {TYPE_3__* pb; TYPE_1__* priv_data; } ;
struct TYPE_27__ {int seekable; } ;
struct TYPE_26__ {int duration; TYPE_10__* codecpar; scalar_t__ start_time; } ;
struct TYPE_25__ {int header_pos; int ver; int samples; int apetag_start; } ;
struct TYPE_24__ {int bits_per_coded_sample; int channels; int* extradata; int sample_rate; int codec_id; int codec_type; } ;
typedef TYPE_1__ MPCContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 TYPE_2__* FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_4__*,char*,int) ;
 int FUNC_10 (TYPE_2__*,int,int,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*,TYPE_10__*,TYPE_3__*,int) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int*,int*) ;
 int FUNC_15 (TYPE_4__*,int,int,int) ;
 int * VAR_10 ;

__attribute__((used)) static int FUNC_16(AVFormatContext *VAR_11)
{
    MPCContext *VAR_12 = VAR_11->priv_data;
    AVIOContext *VAR_13 = VAR_11->pb;
    AVStream *VAR_14;
    int VAR_15 = 0;
    int64_t VAR_16, VAR_17;

    VAR_12->header_pos = FUNC_8(VAR_13);
    if(FUNC_5(VAR_13) != VAR_8){
        FUNC_1(VAR_11, VAR_5, "Not a Musepack8 file\n");
        return VAR_0;
    }

    while(!FUNC_3(VAR_13)){
        VAR_17 = FUNC_8(VAR_13);
        FUNC_14(VAR_13, &VAR_15, &VAR_16);
        if (VAR_16 < 0) {
            FUNC_1(VAR_11, VAR_5, "Invalid chunk length\n");
            return VAR_0;
        }
        if(VAR_15 == VAR_9)
            break;
        FUNC_15(VAR_11, VAR_15, VAR_17, VAR_16);
    }
    if(VAR_15 != VAR_9){
        FUNC_1(VAR_11, VAR_5, "Stream header not found\n");
        return VAR_0;
    }
    VAR_17 = FUNC_8(VAR_13);
    FUNC_7(VAR_13, 4);
    VAR_12->ver = FUNC_4(VAR_13);
    if(VAR_12->ver != 8){
        FUNC_9(VAR_11, "Stream version %d", VAR_12->ver);
        return VAR_1;
    }
    VAR_12->samples = FUNC_13(VAR_13);
    FUNC_13(VAR_13);

    VAR_14 = FUNC_2(VAR_11, ((void*)0));
    if (!VAR_14)
        return FUNC_0(VAR_6);
    VAR_14->codecpar->codec_type = VAR_3;
    VAR_14->codecpar->codec_id = VAR_4;
    VAR_14->codecpar->bits_per_coded_sample = 16;

    if (FUNC_12(VAR_11, VAR_14->codecpar, VAR_13, 2) < 0)
        return FUNC_0(VAR_6);

    VAR_14->codecpar->channels = (VAR_14->codecpar->extradata[1] >> 4) + 1;
    VAR_14->codecpar->sample_rate = VAR_10[VAR_14->codecpar->extradata[0] >> 5];
    FUNC_10(VAR_14, 32, 1152 << (VAR_14->codecpar->extradata[1]&3)*2, VAR_14->codecpar->sample_rate);
    VAR_14->start_time = 0;
    VAR_14->duration = VAR_12->samples / (1152 << (VAR_14->codecpar->extradata[1]&3)*2);
    VAR_16 -= FUNC_8(VAR_13) - VAR_17;
    if (VAR_16 > 0)
        FUNC_7(VAR_13, VAR_16);

    if (VAR_13->seekable & VAR_2) {
        int64_t VAR_18 = FUNC_8(VAR_11->pb);
        VAR_12->apetag_start = FUNC_11(VAR_11);
        FUNC_6(VAR_11->pb, VAR_18, VAR_7);
    }

    return 0;
}
