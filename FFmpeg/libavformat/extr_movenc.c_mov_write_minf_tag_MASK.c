
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {scalar_t__ tag; scalar_t__ mode; TYPE_1__* par; } ;
struct TYPE_7__ {scalar_t__ codec_type; } ;
typedef TYPE_2__ MOVTrack ;
typedef int MOVMuxContext ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int *,TYPE_2__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;

__attribute__((used)) static int FUNC_14(AVFormatContext *VAR_4, AVIOContext *VAR_5, MOVMuxContext *VAR_6, MOVTrack *VAR_7)
{
    int64_t VAR_8 = FUNC_1(VAR_5);
    int VAR_9;

    FUNC_2(VAR_5, 0);
    FUNC_3(VAR_5, "minf");
    if (VAR_7->par->codec_type == VAR_2)
        FUNC_12(VAR_5);
    else if (VAR_7->par->codec_type == VAR_0)
        FUNC_10(VAR_5);
    else if (VAR_7->par->codec_type == VAR_1) {
        if (VAR_7->tag == FUNC_0('t','e','x','t') || FUNC_4(VAR_7)) {
            FUNC_6(VAR_5, VAR_7);
        } else {
            FUNC_9(VAR_5);
        }
    } else if (VAR_7->tag == FUNC_0('r','t','p',' ')) {
        FUNC_8(VAR_5);
    } else if (VAR_7->tag == FUNC_0('t','m','c','d')) {
        if (VAR_7->mode != VAR_3)
            FUNC_9(VAR_5);
        else
            FUNC_6(VAR_5, VAR_7);
    } else if (VAR_7->tag == FUNC_0('g','p','m','d')) {
        FUNC_6(VAR_5, VAR_7);
    }
    if (VAR_7->mode == VAR_3)
        FUNC_7(VAR_4, VAR_5, ((void*)0));
    FUNC_5(VAR_5);
    if ((VAR_9 = FUNC_11(VAR_4, VAR_5, VAR_6, VAR_7)) < 0)
        return VAR_9;
    return FUNC_13(VAR_5, VAR_8);
}
