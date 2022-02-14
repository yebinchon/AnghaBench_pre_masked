
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {int member_1; int member_0; } ;
struct TYPE_15__ {int sample_size; int channels; int sample_step; scalar_t__ device; TYPE_5__ sample_format; int sample_rate; scalar_t__ list_devices; } ;
typedef TYPE_1__ al_data ;
struct TYPE_20__ {int channels; int codec_id; } ;
struct TYPE_18__ {int channels; int codec_id; int sample_rate; int codec_type; } ;
struct TYPE_17__ {scalar_t__* url; TYPE_1__* priv_data; } ;
struct TYPE_16__ {TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;
typedef TYPE_5__ ALCenum ;






 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,char const**) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,TYPE_5__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int ,char*,char const*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_2__*,int,int,int) ;
 TYPE_8__* FUNC_9 (TYPE_5__) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_4)
{
    al_data *VAR_5 = VAR_4->priv_data;
    static const ALCenum VAR_6[2][2] = {
        { 130, 128 },
        { 131, 129 }
    };
    int VAR_7 = 0;
    const char *VAR_8;
    AVStream *VAR_9 = ((void*)0);
    AVCodecParameters *VAR_10 = ((void*)0);

    if (VAR_5->list_devices) {
        FUNC_10(VAR_4);
        return VAR_0;
    }

    VAR_5->sample_format = VAR_6[VAR_5->sample_size/8-1][VAR_5->channels-1];


    VAR_5->device =
        FUNC_3(VAR_4->url[0] ? VAR_4->url : ((void*)0),
                             VAR_5->sample_rate,
                             VAR_5->sample_format,
                             VAR_5->sample_rate);

    if ((VAR_7 = FUNC_1(VAR_5->device, &VAR_8))) goto fail;


    if (!(VAR_9 = FUNC_7(VAR_4, ((void*)0)))) {
        VAR_7 = FUNC_0(VAR_3);
        goto fail;
    }


    FUNC_8(VAR_9, 64, 1, 1000000);


    VAR_10 = VAR_9->codecpar;
    VAR_10->codec_type = VAR_1;
    VAR_10->sample_rate = VAR_5->sample_rate;
    VAR_10->channels = FUNC_9(VAR_5->sample_format)->channels;
    VAR_10->codec_id = FUNC_9(VAR_5->sample_format)->codec_id;


    VAR_5->sample_step = (FUNC_5(FUNC_9(VAR_5->sample_format)->codec_id) *
                       FUNC_9(VAR_5->sample_format)->channels) / 8;


    FUNC_4(VAR_5->device);

    return 0;

fail:

    if (VAR_5->device)
        FUNC_2(VAR_5->device);
    if (VAR_8)
        FUNC_6(VAR_4, VAR_2, "Cannot open device: %s\n", VAR_8);
    return VAR_7;
}
