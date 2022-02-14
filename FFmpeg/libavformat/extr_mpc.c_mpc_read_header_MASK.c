
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_23__ {int seekable; } ;
struct TYPE_22__ {int channels; int bits_per_coded_sample; int* extradata; int sample_rate; int channel_layout; int codec_id; int codec_type; } ;
struct TYPE_21__ {TYPE_8__* pb; int metadata; TYPE_1__* priv_data; } ;
struct TYPE_20__ {int duration; scalar_t__ start_time; TYPE_7__* codecpar; } ;
struct TYPE_19__ {int ver; int fcount; int lastframe; int curbits; int frames; scalar_t__ frames_noted; scalar_t__ curframe; } ;
typedef int MPCFrame ;
typedef TYPE_1__ MPCContext ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


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
 scalar_t__ FUNC_1 (char,char,char,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,char*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ,char*,...) ;
 int FUNC_5 (int) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_8__*) ;
 scalar_t__ FUNC_8 (TYPE_8__*) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (TYPE_8__*,int,int ) ;
 int FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (TYPE_2__*,int,int ,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*,TYPE_7__*,TYPE_8__*,int) ;
 int FUNC_15 (TYPE_3__*) ;
 int * VAR_12 ;

__attribute__((used)) static int FUNC_16(AVFormatContext *VAR_13)
{
    MPCContext *VAR_14 = VAR_13->priv_data;
    AVStream *VAR_15;

    if(FUNC_8(VAR_13->pb) != FUNC_1('M', 'P', '+', 0)){
        FUNC_4(VAR_13, VAR_6, "Not a Musepack file\n");
        return VAR_0;
    }
    VAR_14->ver = FUNC_7(VAR_13->pb);
    if(VAR_14->ver != 0x07 && VAR_14->ver != 0x17){
        FUNC_4(VAR_13, VAR_6, "Can demux Musepack SV7, got version %02X\n", VAR_14->ver);
        return VAR_0;
    }
    VAR_14->fcount = FUNC_9(VAR_13->pb);
    if((int64_t)VAR_14->fcount * sizeof(MPCFrame) >= VAR_11){
        FUNC_4(VAR_13, VAR_6, "Too many frames, seeking is not possible\n");
        return VAR_0;
    }
    if(VAR_14->fcount){
        VAR_14->frames = FUNC_5(VAR_14->fcount * sizeof(MPCFrame));
        if(!VAR_14->frames){
            FUNC_4(VAR_13, VAR_6, "Cannot allocate seektable\n");
            return FUNC_0(VAR_8);
        }
    }else{
        FUNC_4(VAR_13, VAR_7, "Container reports no frames\n");
    }
    VAR_14->curframe = 0;
    VAR_14->lastframe = -1;
    VAR_14->curbits = 8;
    VAR_14->frames_noted = 0;

    VAR_15 = FUNC_6(VAR_13, ((void*)0));
    if (!VAR_15)
        goto mem_error;
    VAR_15->codecpar->codec_type = VAR_2;
    VAR_15->codecpar->codec_id = VAR_4;
    VAR_15->codecpar->channels = 2;
    VAR_15->codecpar->channel_layout = VAR_3;
    VAR_15->codecpar->bits_per_coded_sample = 16;

    if (FUNC_14(VAR_13, VAR_15->codecpar, VAR_13->pb, 16) < 0)
        goto mem_error;
    VAR_15->codecpar->sample_rate = VAR_12[VAR_15->codecpar->extradata[2] & 3];
    FUNC_12(VAR_15, 32, VAR_9, VAR_15->codecpar->sample_rate);

    VAR_15->start_time = 0;
    VAR_15->duration = VAR_14->fcount;


    if (VAR_13->pb->seekable & VAR_1) {
        int64_t VAR_16 = FUNC_11(VAR_13->pb);
        FUNC_13(VAR_13);
        if (!FUNC_2(VAR_13->metadata, "", ((void*)0), VAR_5))
            FUNC_15(VAR_13);
        FUNC_10(VAR_13->pb, VAR_16, VAR_10);
    }

    return 0;
mem_error:
    FUNC_3(&VAR_14->frames);
    return FUNC_0(VAR_8);
}
