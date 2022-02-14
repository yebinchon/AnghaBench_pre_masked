
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* codecpar; } ;
struct TYPE_9__ {int nb_streams; int pb; TYPE_5__** streams; TYPE_2__* priv_data; } ;
struct TYPE_8__ {int prev_h; int prev_m; int prev_s; int prev_f; scalar_t__ inside; } ;
struct TYPE_7__ {scalar_t__ codec_type; scalar_t__ codec_id; } ;
typedef TYPE_2__ SCCContext ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_5__*,int,int,int) ;

__attribute__((used)) static int FUNC_5(AVFormatContext *VAR_4)
{
    SCCContext *VAR_5 = VAR_4->priv_data;

    if (VAR_4->nb_streams != 1 ||
        VAR_4->streams[0]->codecpar->codec_type != VAR_0) {
        FUNC_1(VAR_4, VAR_2,
               "SCC supports only a single subtitles stream.\n");
        return FUNC_0(VAR_3);
    }
    if (VAR_4->streams[0]->codecpar->codec_id != VAR_1) {
        FUNC_1(VAR_4, VAR_2,
               "Unsupported subtitles codec: %s\n",
               FUNC_2(VAR_4->streams[0]->codecpar->codec_id));
        return FUNC_0(VAR_3);
    }
    FUNC_4(VAR_4->streams[0], 64, 1, 1000);
    FUNC_3(VAR_4->pb, "Scenarist_SCC V1.0\n");

    VAR_5->prev_h = VAR_5->prev_m = VAR_5->prev_s = VAR_5->prev_f = -1;
    VAR_5->inside = 0;

    return 0;
}
