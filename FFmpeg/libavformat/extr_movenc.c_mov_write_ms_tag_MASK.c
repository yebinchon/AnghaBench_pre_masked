
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int codec_tag; } ;
struct TYPE_4__ {int tag; TYPE_3__* par; } ;
typedef TYPE_1__ MOVTrack ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,TYPE_3__*,int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(AVFormatContext *VAR_0, AVIOContext *VAR_1, MOVTrack *VAR_2)
{
    int VAR_3;
    int64_t VAR_4 = FUNC_1(VAR_1);
    FUNC_2(VAR_1, 0);
    FUNC_3(VAR_1, VAR_2->tag);
    VAR_2->par->codec_tag = FUNC_0(VAR_2->tag >> 16);
    if ((VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2->par, 0)) < 0)
        return VAR_3;
    return FUNC_5(VAR_1, VAR_4);
}
