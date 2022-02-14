
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int sample_rate; int frame_size; int channels; int codec_id; } ;
struct TYPE_13__ {int bytes_left_in_chunk; } ;
struct TYPE_12__ {int * pb; TYPE_3__* priv_data; } ;
struct TYPE_11__ {TYPE_6__* codecpar; int duration; } ;
typedef TYPE_1__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ ACTContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*,int ,char*,int) ;
 int FUNC_2 (int,int,int) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (TYPE_1__*,int,int,int) ;
 int FUNC_10 (TYPE_2__*,int *,TYPE_6__*,int,int ) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_6)
{
    ACTContext* VAR_7 = VAR_6->priv_data;
    AVIOContext *VAR_8 = VAR_6->pb;
    int VAR_9;
    AVStream* VAR_10;

    int VAR_11,VAR_12,VAR_13;

    VAR_10 = FUNC_3(VAR_6, ((void*)0));
    if (!VAR_10)
        return FUNC_0(VAR_4);

    FUNC_8(VAR_8, 16);
    VAR_9=FUNC_6(VAR_8);
    FUNC_10(VAR_6, VAR_8, VAR_10->codecpar, VAR_9, 0);





    if (VAR_10->codecpar->sample_rate != 8000) {
        FUNC_1(VAR_6, VAR_2, "Sample rate %d is not supported.\n", VAR_10->codecpar->sample_rate);
        return VAR_0;
    }

    VAR_10->codecpar->frame_size=80;
    VAR_10->codecpar->channels=1;
    FUNC_9(VAR_10, 64, 1, 100);

    VAR_10->codecpar->codec_id=VAR_1;

    FUNC_7(VAR_8, 257, VAR_5);
    VAR_13=FUNC_5(VAR_8);
    VAR_12=FUNC_4(VAR_8);
    VAR_11=FUNC_6(VAR_8);

    VAR_10->duration = FUNC_2(1000*(VAR_11*60+VAR_12)+VAR_13, VAR_10->codecpar->sample_rate, 1000 * VAR_10->codecpar->frame_size);

    VAR_7->bytes_left_in_chunk=VAR_3;

    FUNC_7(VAR_8, 512, VAR_5);

    return 0;
}
