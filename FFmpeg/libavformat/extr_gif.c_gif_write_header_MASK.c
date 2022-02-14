
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {int nb_streams; TYPE_4__** streams; } ;
struct TYPE_6__ {scalar_t__ codec_type; scalar_t__ codec_id; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_4__*,int,int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_4)
{
    if (VAR_4->nb_streams != 1 ||
        VAR_4->streams[0]->codecpar->codec_type != VAR_0 ||
        VAR_4->streams[0]->codecpar->codec_id != VAR_1) {
        FUNC_1(VAR_4, VAR_2,
               "GIF muxer supports only a single video GIF stream.\n");
        return FUNC_0(VAR_3);
    }

    FUNC_2(VAR_4->streams[0], 64, 1, 100);

    return 0;
}
