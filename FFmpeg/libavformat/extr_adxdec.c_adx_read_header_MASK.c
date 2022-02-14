
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef long long int64_t ;
struct TYPE_15__ {int header_size; } ;
struct TYPE_14__ {int extradata_size; long long channels; scalar_t__ sample_rate; long long bit_rate; int codec_id; int codec_type; scalar_t__ extradata; } ;
struct TYPE_13__ {TYPE_2__* iformat; int pb; TYPE_1__** streams; TYPE_5__* priv_data; } ;
struct TYPE_12__ {int raw_codec_id; } ;
struct TYPE_11__ {TYPE_4__* codecpar; } ;
typedef int AVStream ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;
typedef TYPE_5__ ADXDemuxerContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 long long FUNC_2 (scalar_t__) ;
 long long VAR_3 ;
 long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_3__*,int ,char*,...) ;
 int * FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int *,int,long long,long long) ;
 scalar_t__ FUNC_8 (TYPE_3__*,TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_7)
{
    ADXDemuxerContext *VAR_8 = VAR_7->priv_data;
    AVCodecParameters *VAR_9;

    AVStream *VAR_10 = FUNC_4(VAR_7, ((void*)0));
    if (!VAR_10)
        return FUNC_0(VAR_5);
    VAR_9 = VAR_7->streams[0]->codecpar;

    if (FUNC_5(VAR_7->pb) != 0x8000)
        return VAR_0;
    VAR_8->header_size = FUNC_5(VAR_7->pb) + 4;
    FUNC_6(VAR_7->pb, -4, VAR_6);

    if (FUNC_8(VAR_7, VAR_9, VAR_7->pb, VAR_8->header_size) < 0)
        return FUNC_0(VAR_5);

    if (VAR_9->extradata_size < 12) {
        FUNC_3(VAR_7, VAR_2, "Invalid extradata size.\n");
        return VAR_0;
    }
    VAR_9->channels = FUNC_2 (VAR_9->extradata + 7);
    VAR_9->sample_rate = FUNC_1(VAR_9->extradata + 8);

    if (VAR_9->channels <= 0) {
        FUNC_3(VAR_7, VAR_2, "invalid number of channels %d\n", VAR_9->channels);
        return VAR_0;
    }

    if (VAR_9->sample_rate <= 0) {
        FUNC_3(VAR_7, VAR_2, "Invalid sample rate %d\n", VAR_9->sample_rate);
        return VAR_0;
    }

    VAR_9->codec_type = VAR_1;
    VAR_9->codec_id = VAR_7->iformat->raw_codec_id;
    VAR_9->bit_rate = (int64_t)VAR_9->sample_rate * VAR_9->channels * VAR_4 * 8LL / VAR_3;

    FUNC_7(VAR_10, 64, VAR_3, VAR_9->sample_rate);

    return 0;
}
