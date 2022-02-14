
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int nb_streams; TYPE_3__* oformat; TYPE_2__** streams; } ;
struct TYPE_9__ {scalar_t__ audio_codec; scalar_t__ video_codec; int name; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {scalar_t__ codec_type; } ;
typedef TYPE_4__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*,int ,char*,int ) ;

__attribute__((used)) static int FUNC_2(AVFormatContext *VAR_5)
{
    if (VAR_5->nb_streams != 1) {
        FUNC_1(VAR_5, VAR_3, "%s files have exactly one stream\n",
               VAR_5->oformat->name);
        return FUNC_0(VAR_4);
    }
    if ( VAR_5->oformat->audio_codec != VAR_2
        && VAR_5->streams[0]->codecpar->codec_type != VAR_0) {
        FUNC_1(VAR_5, VAR_3, "%s files have exactly one audio stream\n",
               VAR_5->oformat->name);
        return FUNC_0(VAR_4);
    }
    if ( VAR_5->oformat->video_codec != VAR_2
        && VAR_5->streams[0]->codecpar->codec_type != VAR_1) {
        FUNC_1(VAR_5, VAR_3, "%s files have exactly one video stream\n",
               VAR_5->oformat->name);
        return FUNC_0(VAR_4);
    }
    return 0;
}
