
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* par; } ;
struct TYPE_4__ {int extradata_size; int* extradata; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int*,char*,int) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_0, MOVTrack *VAR_1)
{
    FUNC_0(VAR_0, 12);
    FUNC_1(VAR_0, "DpxE");
    if (VAR_1->par->extradata_size >= 12 &&
        !FUNC_2(&VAR_1->par->extradata[4], "DpxE", 4)) {
        FUNC_0(VAR_0, VAR_1->par->extradata[11]);
    } else {
        FUNC_0(VAR_0, 1);
    }
    return 0;
}
