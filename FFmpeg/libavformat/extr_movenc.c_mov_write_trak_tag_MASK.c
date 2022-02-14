
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_23__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_25__ {scalar_t__ num; } ;
struct TYPE_29__ {TYPE_23__ sample_aspect_ratio; } ;
struct TYPE_28__ {int flags; scalar_t__ use_editlist; int fc; } ;
struct TYPE_27__ {int entry; int chunkCount; scalar_t__ start_dts; scalar_t__ mode; scalar_t__ tag; TYPE_2__* par; scalar_t__ tref_tag; TYPE_1__* cluster; } ;
struct TYPE_26__ {scalar_t__ codec_type; } ;
struct TYPE_24__ {scalar_t__ dts; } ;
typedef TYPE_3__ MOVTrack ;
typedef TYPE_4__ MOVMuxContext ;
typedef TYPE_5__ AVStream ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*) ;
 double FUNC_3 (TYPE_23__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,TYPE_4__*,TYPE_3__*) ;
 int FUNC_9 (int *,int *,TYPE_4__*,TYPE_3__*) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (int *,TYPE_4__*,TYPE_3__*,TYPE_5__*) ;
 int FUNC_12 (int *,TYPE_4__*,TYPE_5__*) ;
 int FUNC_13 (int *,TYPE_3__*) ;
 int FUNC_14 (int *,TYPE_3__*) ;
 int FUNC_15 (int *,TYPE_3__*) ;
 int FUNC_16 (int *,int ) ;

__attribute__((used)) static int FUNC_17(AVFormatContext *VAR_6, AVIOContext *VAR_7, MOVMuxContext *VAR_8,
                              MOVTrack *VAR_9, AVStream *VAR_10)
{
    int64_t VAR_11 = FUNC_4(VAR_7);
    int VAR_12 = VAR_9->entry;
    int VAR_13 = VAR_9->chunkCount;
    int VAR_14;



    if (VAR_8->flags & VAR_3)
        VAR_9->chunkCount = VAR_9->entry = 0;

    FUNC_5(VAR_7, 0);
    FUNC_6(VAR_7, "trak");
    FUNC_11(VAR_7, VAR_8, VAR_9, VAR_10);

    FUNC_1(VAR_8->use_editlist >= 0);

    if (VAR_9->start_dts != VAR_2) {
        if (VAR_8->use_editlist)
            FUNC_8(VAR_7, VAR_8, VAR_9);
        else if ((VAR_9->entry && VAR_9->cluster[0].dts) || VAR_9->mode == VAR_5 || FUNC_7(VAR_9))
            FUNC_2(VAR_8->fc, VAR_1,
                   "Not writing any edit list even though one would have been required\n");
    }

    if (VAR_9->tref_tag)
        FUNC_13(VAR_7, VAR_9);

    if ((VAR_14 = FUNC_9(VAR_6, VAR_7, VAR_8, VAR_9)) < 0)
        return VAR_14;
    if (VAR_9->mode == VAR_5)
        FUNC_15(VAR_7, VAR_9);
    if (VAR_9->tag == FUNC_0('r','t','p',' '))
        FUNC_14(VAR_7, VAR_9);
    if (VAR_9->mode == VAR_4) {
        if (VAR_9->par->codec_type == VAR_0) {
            double VAR_15 = FUNC_3(VAR_10->sample_aspect_ratio);
            if (VAR_10->sample_aspect_ratio.num && 1.0 != VAR_15) {
                FUNC_10(VAR_7, VAR_9);
            }
        }
        if (FUNC_7(VAR_9) && VAR_10->sample_aspect_ratio.num) {
            FUNC_10(VAR_7, VAR_9);
        }
    }
    FUNC_12(VAR_7, VAR_8, VAR_10);
    VAR_9->entry = VAR_12;
    VAR_9->chunkCount = VAR_13;
    return FUNC_16(VAR_7, VAR_11);
}
