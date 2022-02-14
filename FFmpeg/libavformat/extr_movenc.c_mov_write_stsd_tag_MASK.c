
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_11__ {TYPE_1__* par; } ;
struct TYPE_10__ {scalar_t__ codec_type; scalar_t__ codec_tag; } ;
typedef TYPE_2__ MOVTrack ;
typedef int MOVMuxContext ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *,int *,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *,int *,int *,TYPE_2__*) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_3, AVIOContext *VAR_4, MOVMuxContext *VAR_5, MOVTrack *VAR_6)
{
    int64_t VAR_7 = FUNC_1(VAR_4);
    int VAR_8 = 0;
    FUNC_2(VAR_4, 0);
    FUNC_3(VAR_4, "stsd");
    FUNC_2(VAR_4, 0);
    FUNC_2(VAR_4, 1);
    if (VAR_6->par->codec_type == VAR_2)
        VAR_8 = FUNC_9(VAR_3, VAR_4, VAR_5, VAR_6);
    else if (VAR_6->par->codec_type == VAR_0)
        VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6);
    else if (VAR_6->par->codec_type == VAR_1)
        VAR_8 = FUNC_7(VAR_4, VAR_6);
    else if (VAR_6->par->codec_tag == FUNC_0('r','t','p',' '))
        VAR_8 = FUNC_6(VAR_4, VAR_6);
    else if (VAR_6->par->codec_tag == FUNC_0('t','m','c','d'))
        VAR_8 = FUNC_8(VAR_4, VAR_6);
    else if (VAR_6->par->codec_tag == FUNC_0('g','p','m','d'))
        VAR_8 = FUNC_5(VAR_4, VAR_6);

    if (VAR_8 < 0)
        return VAR_8;

    return FUNC_10(VAR_4, VAR_7);
}
