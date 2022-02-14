
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef double int64_t ;
struct TYPE_10__ {int sample_rate; int bit_rate; int channels; scalar_t__ codec_id; int width; int height; } ;
struct TYPE_9__ {TYPE_2__** streams; } ;
struct TYPE_7__ {int den; int num; } ;
struct TYPE_8__ {TYPE_1__ avg_frame_rate; TYPE_4__* codecpar; } ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVCodecParameters ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 double VAR_3 ;
 int FUNC_2 (TYPE_3__*,int ,char*,double) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(AVIOContext *VAR_4, AVFormatContext *VAR_5)
{
    AVStream *VAR_6 = VAR_5->streams[0];
    AVCodecParameters *VAR_7 = VAR_5->streams[0]->codecpar;
    AVCodecParameters *VAR_8 = VAR_5->streams[1]->codecpar;
    int VAR_9 = VAR_8->sample_rate;
    int64_t VAR_10 = VAR_6->avg_frame_rate.den ?
                        (VAR_6->avg_frame_rate.num * 0x10000LL) / VAR_6->avg_frame_rate.den :
                        0;
    int VAR_11 = VAR_8->bit_rate / 1000;
    int VAR_12 = FUNC_1(VAR_7->bit_rate / 1000, 800 - VAR_11);

    if (VAR_10 < 0 || VAR_10 > VAR_3) {
        FUNC_2(VAR_5, VAR_1, "Frame rate %f outside supported range\n", VAR_10 / (double)0x10000);
        return FUNC_0(VAR_2);
    }

    FUNC_4(VAR_4, 0x94);
    FUNC_5(VAR_4, "uuid");
    FUNC_5(VAR_4, "PROF");

    FUNC_4(VAR_4, 0x21d24fce);
    FUNC_4(VAR_4, 0xbb88695c);
    FUNC_4(VAR_4, 0xfac9c740);

    FUNC_4(VAR_4, 0x0);
    FUNC_4(VAR_4, 0x3);

    FUNC_4(VAR_4, 0x14);
    FUNC_5(VAR_4, "FPRF");
    FUNC_4(VAR_4, 0x0);
    FUNC_4(VAR_4, 0x0);
    FUNC_4(VAR_4, 0x0);

    FUNC_4(VAR_4, 0x2c);
    FUNC_5(VAR_4, "APRF");
    FUNC_4(VAR_4, 0x0);
    FUNC_4(VAR_4, 0x2);
    FUNC_5(VAR_4, "mp4a");
    FUNC_4(VAR_4, 0x20f);
    FUNC_4(VAR_4, 0x0);
    FUNC_4(VAR_4, VAR_11);
    FUNC_4(VAR_4, VAR_11);
    FUNC_4(VAR_4, VAR_9);
    FUNC_4(VAR_4, VAR_8->channels);

    FUNC_4(VAR_4, 0x34);
    FUNC_5(VAR_4, "VPRF");
    FUNC_4(VAR_4, 0x0);
    FUNC_4(VAR_4, 0x1);
    if (VAR_7->codec_id == VAR_0) {
        FUNC_5(VAR_4, "avc1");
        FUNC_3(VAR_4, 0x014D);
        FUNC_3(VAR_4, 0x0015);
    } else {
        FUNC_5(VAR_4, "mp4v");
        FUNC_3(VAR_4, 0x0000);
        FUNC_3(VAR_4, 0x0103);
    }
    FUNC_4(VAR_4, 0x0);
    FUNC_4(VAR_4, VAR_12);
    FUNC_4(VAR_4, VAR_12);
    FUNC_4(VAR_4, VAR_10);
    FUNC_4(VAR_4, VAR_10);
    FUNC_3(VAR_4, VAR_7->width);
    FUNC_3(VAR_4, VAR_7->height);
    FUNC_4(VAR_4, 0x010001);

    return 0;
}
