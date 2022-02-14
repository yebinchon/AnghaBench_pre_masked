
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ seekable; } ;
struct TYPE_20__ {scalar_t__ codec_id; scalar_t__ codec_tag; } ;
struct TYPE_19__ {int nb_streams; int (* io_open ) (TYPE_4__*,TYPE_7__**,int ,int ,int *) ;TYPE_7__* pb; int url; TYPE_3__** streams; TYPE_1__* oformat; TYPE_2__* priv_data; } ;
struct TYPE_18__ {int time_base; int sample_aspect_ratio; TYPE_5__* codecpar; } ;
struct TYPE_17__ {int individual_header_trailer; scalar_t__ header_filename; int write_header_trailer; int header_written; TYPE_4__* avf; } ;
struct TYPE_16__ {int codec_tag; } ;
typedef TYPE_2__ SegmentContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;
typedef TYPE_5__ AVCodecParameters ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (TYPE_7__**) ;
 int FUNC_6 (TYPE_4__*,TYPE_7__**) ;
 int FUNC_7 (TYPE_4__*,TYPE_7__**,int ,int ,int *) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_1)
{
    SegmentContext *VAR_2 = VAR_1->priv_data;
    AVFormatContext *VAR_3 = VAR_2->avf;
    int VAR_4, VAR_5;

    if (!VAR_2->header_written) {
        for (VAR_5 = 0; VAR_5 < VAR_1->nb_streams; VAR_5++) {
            AVStream *VAR_6 = VAR_3->streams[VAR_5];
            AVCodecParameters *VAR_7, *VAR_8;

            VAR_7 = VAR_1->streams[VAR_5]->codecpar;
            VAR_8 = VAR_3->streams[VAR_5]->codecpar;
            FUNC_3(VAR_8, VAR_7);
            if (!VAR_3->oformat->codec_tag ||
                FUNC_0 (VAR_3->oformat->codec_tag, VAR_7->codec_tag) == VAR_8->codec_id ||
                FUNC_1(VAR_3->oformat->codec_tag, VAR_7->codec_id) <= 0) {
                VAR_8->codec_tag = VAR_7->codec_tag;
            } else {
                VAR_8->codec_tag = 0;
            }
            VAR_6->sample_aspect_ratio = VAR_1->streams[VAR_5]->sample_aspect_ratio;
            VAR_6->time_base = VAR_1->streams[VAR_5]->time_base;
        }
        VAR_4 = FUNC_4(VAR_3, ((void*)0));
        if (VAR_4 < 0)
            return VAR_4;
    }

    if (!VAR_2->write_header_trailer || VAR_2->header_filename) {
        if (VAR_2->header_filename) {
            FUNC_2(VAR_3, ((void*)0));
            FUNC_6(VAR_3, &VAR_3->pb);
        } else {
            FUNC_5(&VAR_3->pb);
        }
        if ((VAR_4 = VAR_3->io_open(VAR_3, &VAR_3->pb, VAR_3->url, VAR_0, ((void*)0))) < 0)
            return VAR_4;
        if (!VAR_2->individual_header_trailer)
            VAR_3->pb->seekable = 0;
    }

    return 0;
}
