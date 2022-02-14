
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
typedef int UID ;
struct TYPE_13__ {int * oformat; TYPE_2__* priv_data; int * pb; } ;
struct TYPE_12__ {TYPE_1__* codecpar; } ;
struct TYPE_11__ {int body_offset; int edit_unit_byte_count; int channel_count; int footer_partition_offset; } ;
struct TYPE_10__ {int sample_rate; int channels; int codec_id; } ;
typedef TYPE_2__ MXFContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_4__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*,int const) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static int64_t FUNC_7(AVFormatContext *VAR_3, AVStream *VAR_4, const UID VAR_5)
{
    AVIOContext *VAR_6 = VAR_3->pb;
    MXFContext *VAR_7 = VAR_3->priv_data;
    int VAR_8 = !VAR_7->footer_partition_offset;
    int64_t VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5);

    if (VAR_3->oformat == &VAR_2) {
        FUNC_6(VAR_6, 8, 0x3002);
        FUNC_4(VAR_6, VAR_7->body_offset / VAR_7->edit_unit_byte_count);
    }


    FUNC_6(VAR_6, 1, 0x3D02);
    FUNC_2(VAR_6, 1);


    FUNC_6(VAR_6, 8, 0x3D03);
    FUNC_3(VAR_6, VAR_4->codecpar->sample_rate);
    FUNC_3(VAR_6, 1);

    if (VAR_3->oformat == &VAR_1) {
        FUNC_6(VAR_6, 1, 0x3D04);
        FUNC_2(VAR_6, 0);
    }

    FUNC_6(VAR_6, 4, 0x3D07);
    if (VAR_7->channel_count == -1) {
        if (VAR_8 && (VAR_3->oformat == &VAR_1) && (VAR_4->codecpar->channels != 4) && (VAR_4->codecpar->channels != 8))
            FUNC_1(VAR_3, VAR_0, "the number of audio channels shall be 4 or 8 : the output will not comply to MXF D-10 specs, use -d10_channelcount to fix this\n");
        FUNC_3(VAR_6, VAR_4->codecpar->channels);
    } else if (VAR_3->oformat == &VAR_1) {
        if (VAR_8 && (VAR_7->channel_count < VAR_4->codecpar->channels))
            FUNC_1(VAR_3, VAR_0, "d10_channelcount < actual number of audio channels : some channels will be discarded\n");
        if (VAR_8 && (VAR_7->channel_count != 4) && (VAR_7->channel_count != 8))
            FUNC_1(VAR_3, VAR_0, "d10_channelcount shall be set to 4 or 8 : the output will not comply to MXF D-10 specs\n");
        FUNC_3(VAR_6, VAR_7->channel_count);
    } else {
        FUNC_3(VAR_6, VAR_4->codecpar->channels);
    }

    FUNC_6(VAR_6, 4, 0x3D01);
    FUNC_3(VAR_6, FUNC_0(VAR_4->codecpar->codec_id));

    return VAR_9;
}
