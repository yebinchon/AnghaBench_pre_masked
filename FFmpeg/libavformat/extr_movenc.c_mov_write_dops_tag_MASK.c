
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {TYPE_1__* par; } ;
struct TYPE_4__ {int extradata_size; scalar_t__ extradata; } ;
typedef TYPE_2__ MOVTrack ;
typedef int AVIOContext ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,scalar_t__,int) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_2, AVIOContext *VAR_3, MOVTrack *VAR_4)
{
    int64_t VAR_5 = FUNC_4(VAR_3);
    FUNC_7(VAR_3, 0);
    FUNC_9(VAR_3, "dOps");
    FUNC_5(VAR_3, 0);
    if (VAR_4->par->extradata_size < 19) {
        FUNC_3(VAR_2, VAR_1, "invalid extradata size\n");
        return VAR_0;
    }



    FUNC_5(VAR_3, FUNC_0(VAR_4->par->extradata + 9));
    FUNC_6(VAR_3, FUNC_1(VAR_4->par->extradata + 10));
    FUNC_7(VAR_3, FUNC_2(VAR_4->par->extradata + 12));
    FUNC_6(VAR_3, FUNC_1(VAR_4->par->extradata + 16));

    FUNC_8(VAR_3, VAR_4->par->extradata + 18, VAR_4->par->extradata_size - 18);

    return FUNC_10(VAR_3, VAR_5);
}
