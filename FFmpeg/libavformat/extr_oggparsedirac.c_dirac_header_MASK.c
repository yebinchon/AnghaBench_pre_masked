
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct ogg_stream {scalar_t__ psize; scalar_t__ pstart; scalar_t__ buf; } ;
struct ogg {struct ogg_stream* streams; } ;
struct TYPE_12__ {int num; int den; } ;
struct TYPE_15__ {TYPE_2__ framerate; int sample_aspect_ratio; int level; int profile; int colorspace; int color_primaries; int color_trc; int color_range; int pix_fmt; int height; int width; } ;
struct TYPE_14__ {TYPE_3__** streams; struct ogg* priv_data; } ;
struct TYPE_13__ {int sample_aspect_ratio; TYPE_1__* codecpar; } ;
struct TYPE_11__ {scalar_t__ codec_id; int height; int width; int level; int profile; int color_space; int color_primaries; int color_trc; int color_range; int format; int codec_type; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVDiracSeqHeader ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__**,scalar_t__,scalar_t__,TYPE_4__*) ;
 int FUNC_1 (TYPE_5__**) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int,int ,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_2, int VAR_3)
{
    struct ogg *VAR_4 = VAR_2->priv_data;
    struct ogg_stream *VAR_5 = VAR_4->streams + VAR_3;
    AVStream *VAR_6 = VAR_2->streams[VAR_3];
    AVDiracSeqHeader *VAR_7;
    int VAR_8;


    if (VAR_6->codecpar->codec_id == VAR_1)
        return 0;

    VAR_8 = FUNC_0(&VAR_7, VAR_5->buf + VAR_5->pstart + 13, (VAR_5->psize - 13), VAR_2);
    if (VAR_8 < 0)
        return VAR_8;

    VAR_6->codecpar->codec_type = VAR_0;
    VAR_6->codecpar->codec_id = VAR_1;
    VAR_6->codecpar->width = VAR_7->width;
    VAR_6->codecpar->height = VAR_7->height;
    VAR_6->codecpar->format = VAR_7->pix_fmt;
    VAR_6->codecpar->color_range = VAR_7->color_range;
    VAR_6->codecpar->color_trc = VAR_7->color_trc;
    VAR_6->codecpar->color_primaries = VAR_7->color_primaries;
    VAR_6->codecpar->color_space = VAR_7->colorspace;
    VAR_6->codecpar->profile = VAR_7->profile;
    VAR_6->codecpar->level = VAR_7->level;
    if (FUNC_2(VAR_6->codecpar->width, VAR_6->codecpar->height, VAR_7->sample_aspect_ratio) >= 0)
        VAR_6->sample_aspect_ratio = VAR_7->sample_aspect_ratio;


    FUNC_3(VAR_6, 64, VAR_7->framerate.den, 2 * VAR_7->framerate.num);

    FUNC_1(&VAR_7);
    return 1;
}
