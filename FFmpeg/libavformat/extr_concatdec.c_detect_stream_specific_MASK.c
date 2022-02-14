
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ codec_id; int extradata_size; int extradata; } ;
struct TYPE_18__ {TYPE_8__* par_out; TYPE_8__* par_in; } ;
struct TYPE_17__ {TYPE_4__** streams; TYPE_3__* priv_data; } ;
struct TYPE_16__ {TYPE_8__* codecpar; } ;
struct TYPE_15__ {TYPE_5__* avf; scalar_t__ auto_convert; TYPE_1__* cur_file; } ;
struct TYPE_14__ {TYPE_6__* bsf; } ;
struct TYPE_13__ {TYPE_2__* streams; } ;
typedef TYPE_2__ ConcatStream ;
typedef TYPE_3__ ConcatContext ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;
typedef int AVBitStreamFilter ;
typedef TYPE_6__ AVBSFContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,TYPE_6__**) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_5__*,int ,char*) ;
 int FUNC_6 (TYPE_8__*,TYPE_8__*) ;

__attribute__((used)) static int FUNC_7(AVFormatContext *VAR_4, int VAR_5)
{
    ConcatContext *VAR_6 = VAR_4->priv_data;
    AVStream *VAR_7 = VAR_6->avf->streams[VAR_5];
    ConcatStream *VAR_8 = &VAR_6->cur_file->streams[VAR_5];
    const AVBitStreamFilter *VAR_9;
    AVBSFContext *VAR_10;
    int VAR_11;

    if (VAR_6->auto_convert && VAR_7->codecpar->codec_id == VAR_1) {
        if (!VAR_7->codecpar->extradata_size ||
            (VAR_7->codecpar->extradata_size >= 3 && FUNC_0(VAR_7->codecpar->extradata) == 1) ||
            (VAR_7->codecpar->extradata_size >= 4 && FUNC_1(VAR_7->codecpar->extradata) == 1))
            return 0;
        FUNC_5(VAR_6->avf, VAR_3,
               "Auto-inserting h264_mp4toannexb bitstream filter\n");
        VAR_9 = FUNC_3("h264_mp4toannexb");
        if (!VAR_9) {
            FUNC_5(VAR_4, VAR_2, "h264_mp4toannexb bitstream filter "
                   "required for H.264 streams\n");
            return VAR_0;
        }
        VAR_11 = FUNC_2(VAR_9, &VAR_10);
        if (VAR_11 < 0)
            return VAR_11;
        VAR_8->bsf = VAR_10;

        VAR_11 = FUNC_6(VAR_10->par_in, VAR_7->codecpar);
        if (VAR_11 < 0)
           return VAR_11;

        VAR_11 = FUNC_4(VAR_10);
        if (VAR_11 < 0)
            return VAR_11;

        VAR_11 = FUNC_6(VAR_7->codecpar, VAR_10->par_out);
        if (VAR_11 < 0)
            return VAR_11;
    }
    return 0;
}
