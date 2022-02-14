
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nb_streams; TYPE_2__** streams; } ;
struct TYPE_6__ {int disposition; scalar_t__ discard; scalar_t__ codec_info_nb_frames; TYPE_1__* codecpar; } ;
struct TYPE_5__ {scalar_t__ codec_type; scalar_t__ sample_rate; scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_2__ AVStream ;
typedef TYPE_3__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(AVFormatContext *VAR_5)
{
    int VAR_6;
    AVStream *VAR_7;
    int VAR_8 = 0;
    int VAR_9 = VAR_4;

    if (VAR_5->nb_streams <= 0)
        return -1;
    for (VAR_6 = 0; VAR_6 < VAR_5->nb_streams; VAR_6++) {
        int VAR_10 = 0;
        VAR_7 = VAR_5->streams[VAR_6];
        if (VAR_7->codecpar->codec_type == VAR_2) {
            if (VAR_7->disposition & VAR_3)
                VAR_10 -= 400;
            if (VAR_7->codecpar->width && VAR_7->codecpar->height)
                VAR_10 += 50;
            VAR_10+= 25;
        }
        if (VAR_7->codecpar->codec_type == VAR_1) {
            if (VAR_7->codecpar->sample_rate)
                VAR_10 += 50;
        }
        if (VAR_7->codec_info_nb_frames)
            VAR_10 += 12;

        if (VAR_7->discard != VAR_0)
            VAR_10 += 200;

        if (VAR_10 > VAR_9) {
            VAR_9 = VAR_10;
            VAR_8 = VAR_6;
        }
    }
    return VAR_8;
}
