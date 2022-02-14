
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;
struct TYPE_3__ {int * pb; } ;
typedef scalar_t__ GXFPktType ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__*,int*) ;

__attribute__((used)) static int64_t FUNC_6(AVFormatContext *VAR_4, uint64_t VAR_5, int VAR_6, int VAR_7) {
    uint32_t VAR_8;
    uint64_t VAR_9;
    uint64_t VAR_10 = 0;
    int VAR_11;
    int64_t VAR_12 = VAR_0;
    int VAR_13;
    AVIOContext *VAR_14 = VAR_4->pb;
    GXFPktType VAR_15;
    VAR_8 = FUNC_2(VAR_14);
start:
    while (VAR_8)
        FUNC_0();
    FUNC_0();
    if (VAR_8 != 1)
        goto start;
    VAR_9 = FUNC_4(VAR_14);
    if (FUNC_3(VAR_14, -5, VAR_2) < 0)
        goto out;
    if (!FUNC_5(VAR_14, &VAR_15, &VAR_13) || VAR_15 != VAR_1) {
        if (FUNC_3(VAR_14, VAR_9, VAR_3) < 0)
            goto out;
        goto start;
    }
    FUNC_1(VAR_14);
    VAR_11 = FUNC_1(VAR_14);
    VAR_12 = FUNC_2(VAR_14);
    VAR_10 = FUNC_4(VAR_14) - 16 - 6;
    if ((VAR_6 >= 0 && VAR_6 != VAR_11) || (VAR_7 >= 0 && VAR_7 > VAR_12)) {
        if (FUNC_3(VAR_14, VAR_9, VAR_3) >= 0)
            goto start;
    }
out:
    if (VAR_10)
        FUNC_3(VAR_14, VAR_10, VAR_3);
    return VAR_12;
}
