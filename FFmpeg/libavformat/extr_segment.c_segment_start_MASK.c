
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ seekable; } ;
struct TYPE_15__ {int (* io_open ) (TYPE_3__*,TYPE_5__**,int ,int ,int *) ;TYPE_2__* priv_data; TYPE_1__* oformat; TYPE_5__* pb; int url; } ;
struct TYPE_14__ {int segment_idx; int segment_idx_wrap; scalar_t__ segment_frame_count; int format_options; int individual_header_trailer; int segment_idx_wrap_nb; TYPE_3__* avf; } ;
struct TYPE_13__ {scalar_t__ priv_class; } ;
typedef TYPE_2__ SegmentContext ;
typedef TYPE_3__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int **,int ,int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int FUNC_3 (TYPE_3__*,int ,char*,int ) ;
 int FUNC_4 (TYPE_2__*,char*,char*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int **) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,TYPE_5__**,int ,int ,int *) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_2, int VAR_3)
{
    SegmentContext *VAR_4 = VAR_2->priv_data;
    AVFormatContext *VAR_5 = VAR_4->avf;
    int VAR_6 = 0;

    if (VAR_3) {
        FUNC_5(VAR_5);
        VAR_4->avf = ((void*)0);
        if ((VAR_6 = FUNC_7(VAR_2)) < 0)
            return VAR_6;
        VAR_5 = VAR_4->avf;
    }

    VAR_4->segment_idx++;
    if ((VAR_4->segment_idx_wrap) && (VAR_4->segment_idx % VAR_4->segment_idx_wrap == 0))
        VAR_4->segment_idx_wrap_nb++;

    if ((VAR_6 = FUNC_8(VAR_2)) < 0)
        return VAR_6;

    if ((VAR_6 = VAR_2->io_open(VAR_2, &VAR_5->pb, VAR_5->url, VAR_0, ((void*)0))) < 0) {
        FUNC_3(VAR_2, VAR_1, "Failed to open segment '%s'\n", VAR_5->url);
        return VAR_6;
    }
    if (!VAR_4->individual_header_trailer)
        VAR_5->pb->seekable = 0;

    if (VAR_5->oformat->priv_class && VAR_5->priv_data)
        FUNC_4(VAR_5->priv_data, "mpegts_flags", "+resend_headers", 0);

    if (VAR_3) {
        AVDictionary *VAR_7 = ((void*)0);
        FUNC_0(&VAR_7, VAR_4->format_options, 0);
        FUNC_2(&VAR_7, "fflags", "-autobsf", 0);
        VAR_6 = FUNC_6(VAR_5, &VAR_7);
        FUNC_1(&VAR_7);
        if (VAR_6 < 0)
            return VAR_6;
    }

    VAR_4->segment_frame_count = 0;
    return 0;
}
