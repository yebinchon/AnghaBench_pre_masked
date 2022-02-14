
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int int64_t ;
struct TYPE_14__ {scalar_t__ aes_ctr; } ;
struct TYPE_16__ {scalar_t__ has_keyframes; scalar_t__ entry; scalar_t__ mode; int flags; TYPE_1__* par; TYPE_13__ cenc; scalar_t__ has_disposable; } ;
struct TYPE_15__ {scalar_t__ codec_type; scalar_t__ codec_id; scalar_t__ codec_tag; } ;
typedef TYPE_2__ MOVTrack ;
typedef int MOVMuxContext ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_13__*,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,int *,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (int *,int *,int *,TYPE_2__*) ;
 int FUNC_11 (int *,TYPE_2__*,int ) ;
 int FUNC_12 (int *,TYPE_2__*) ;
 int FUNC_13 (int *,TYPE_2__*) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_9, AVIOContext *VAR_10, MOVMuxContext *VAR_11, MOVTrack *VAR_12)
{
    int64_t VAR_13 = FUNC_1(VAR_10);
    int VAR_14 = 0;

    FUNC_2(VAR_10, 0);
    FUNC_4(VAR_10, "stbl");
    if ((VAR_14 = FUNC_10(VAR_9, VAR_10, VAR_11, VAR_12)) < 0)
        return VAR_14;
    FUNC_13(VAR_10, VAR_12);
    if ((VAR_12->par->codec_type == VAR_0 ||
         VAR_12->par->codec_id == VAR_3 ||
         VAR_12->par->codec_tag == FUNC_0('r','t','p',' ')) &&
        VAR_12->has_keyframes && VAR_12->has_keyframes < VAR_12->entry)
        FUNC_11(VAR_10, VAR_12, VAR_6);
    if (VAR_12->par->codec_type == VAR_0 && VAR_12->has_disposable)
        FUNC_7(VAR_10, VAR_12);
    if (VAR_12->mode == VAR_4 && VAR_12->flags & VAR_8)
        FUNC_11(VAR_10, VAR_12, VAR_5);
    if (VAR_12->par->codec_type == VAR_0 &&
        VAR_12->flags & VAR_7 && VAR_12->entry) {

        if ((VAR_14 = FUNC_6(VAR_9, VAR_10, VAR_12)) < 0)
            return VAR_14;
    }
    FUNC_9(VAR_10, VAR_12);
    FUNC_12(VAR_10, VAR_12);
    FUNC_8(VAR_10, VAR_12);
    if (VAR_12->cenc.aes_ctr) {
        FUNC_3(&VAR_12->cenc, VAR_10);
    }
    if (VAR_12->par->codec_id == VAR_2 || VAR_12->par->codec_id == VAR_1) {
        FUNC_5(VAR_10, VAR_12);
    }
    return FUNC_14(VAR_10, VAR_13);
}
