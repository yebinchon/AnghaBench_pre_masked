
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {TYPE_1__* par; int tag; } ;
struct TYPE_10__ {scalar_t__ codec_id; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int *,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,int *,TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_2__*) ;
 int FUNC_12 (int *,TYPE_2__*) ;
 int FUNC_13 (int *,int *,TYPE_2__*) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_8, AVIOContext *VAR_9, MOVTrack *VAR_10)
{
    int64_t VAR_11 = FUNC_0(VAR_9);

    FUNC_1(VAR_9, 0);
    FUNC_3(VAR_9, "wave");

    if (VAR_10->par->codec_id != VAR_7) {
    FUNC_1(VAR_9, 12);
    FUNC_3(VAR_9, "frma");
    FUNC_2(VAR_9, VAR_10->tag);
    }

    if (VAR_10->par->codec_id == VAR_0) {

        FUNC_1(VAR_9, 12);
        FUNC_3(VAR_9, "mp4a");
        FUNC_1(VAR_9, 0);
        FUNC_11(VAR_9, VAR_10);
    } else if (FUNC_5(VAR_10->par->codec_id)) {
      FUNC_9(VAR_9);
    } else if (FUNC_4(VAR_10->par->codec_id)) {
      FUNC_10(VAR_9);
    } else if (VAR_10->par->codec_id == VAR_5) {
        FUNC_7(VAR_9, VAR_10);
    } else if (VAR_10->par->codec_id == VAR_1) {
        FUNC_6(VAR_8, VAR_9, VAR_10);
    } else if (VAR_10->par->codec_id == VAR_6) {
        FUNC_8(VAR_8, VAR_9, VAR_10);
    } else if (VAR_10->par->codec_id == VAR_4 ||
               VAR_10->par->codec_id == VAR_7) {
        FUNC_12(VAR_9, VAR_10);
    } else if (VAR_10->par->codec_id == VAR_3 ||
               VAR_10->par->codec_id == VAR_2) {
        FUNC_13(VAR_8, VAR_9, VAR_10);
    }

    FUNC_1(VAR_9, 8);
    FUNC_1(VAR_9, 0);

    return FUNC_14(VAR_9, VAR_11);
}
