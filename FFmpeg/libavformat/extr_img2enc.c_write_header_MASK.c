
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int is_pipe; char* muxer; int split_planes; int path; } ;
typedef TYPE_3__ VideoMuxData ;
struct TYPE_14__ {int nb_streams; TYPE_1__* oformat; int url; TYPE_4__** streams; TYPE_3__* priv_data; } ;
struct TYPE_13__ {int flags; int nb_components; } ;
struct TYPE_12__ {TYPE_2__* codecpar; } ;
struct TYPE_10__ {scalar_t__ codec_id; int format; } ;
struct TYPE_9__ {int flags; } ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVPixFmtDescriptor ;
typedef TYPE_6__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,int ,int) ;
 char* FUNC_3 (int ,char) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_5)
{
    VideoMuxData *VAR_6 = VAR_5->priv_data;
    AVStream *VAR_7 = VAR_5->streams[0];
    const AVPixFmtDescriptor *VAR_8 = FUNC_0(VAR_7->codecpar->format);

    FUNC_2(VAR_6->path, VAR_5->url, sizeof(VAR_6->path));


    if (VAR_5->oformat->flags & VAR_0)
        VAR_6->is_pipe = 0;
    else
        VAR_6->is_pipe = 1;

    if (VAR_7->codecpar->codec_id == VAR_2) {
        VAR_6->muxer = "gif";
    } else if (VAR_7->codecpar->codec_id == VAR_1) {
        VAR_6->muxer = "fits";
    } else if (VAR_7->codecpar->codec_id == VAR_3) {
        const char *VAR_9 = FUNC_3(VAR_6->path, '.');
        VAR_6->split_planes = VAR_9
                             && !FUNC_1(VAR_9 + 1, "y")
                             && VAR_5->nb_streams == 1
                             && VAR_8
                             &&(VAR_8->flags & VAR_4)
                             && VAR_8->nb_components >= 3;
    }

    return 0;
}
