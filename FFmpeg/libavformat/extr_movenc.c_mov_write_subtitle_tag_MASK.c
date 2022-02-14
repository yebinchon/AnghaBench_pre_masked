
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {TYPE_1__* par; int tag; } ;
struct TYPE_5__ {scalar_t__ codec_id; scalar_t__ extradata_size; int extradata; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(AVIOContext *VAR_1, MOVTrack *VAR_2)
{
    int64_t VAR_3 = FUNC_0(VAR_1);
    FUNC_2(VAR_1, 0);
    FUNC_3(VAR_1, VAR_2->tag);
    FUNC_2(VAR_1, 0);
    FUNC_1(VAR_1, 0);
    FUNC_1(VAR_1, 1);

    if (VAR_2->par->codec_id == VAR_0)
        FUNC_5(VAR_1, VAR_2);
    else if (VAR_2->par->extradata_size)
        FUNC_4(VAR_1, VAR_2->par->extradata, VAR_2->par->extradata_size);

    return FUNC_6(VAR_1, VAR_3);
}
