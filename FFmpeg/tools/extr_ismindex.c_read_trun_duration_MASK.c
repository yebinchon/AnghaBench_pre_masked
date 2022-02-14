
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int AVIOContext ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_6 ;

__attribute__((used)) static int64_t FUNC_6(AVIOContext *VAR_7, int VAR_8,
                                  int64_t VAR_9)
{
    int64_t VAR_10 = 0;
    int64_t VAR_11;
    int VAR_12, VAR_13;
    int VAR_14;
    int64_t VAR_15 = 0;
    int64_t VAR_16 = 0;
    FUNC_1(VAR_7);
    VAR_12 = FUNC_2(VAR_7);
    if (VAR_8 <= 0 && !(VAR_12 & VAR_3)) {
        FUNC_5(VAR_6, "No sample duration in trun flags\n");
        return -1;
    }
    VAR_14 = FUNC_3(VAR_7);

    if (VAR_12 & VAR_0) FUNC_3(VAR_7);
    if (VAR_12 & VAR_1) FUNC_3(VAR_7);

    VAR_11 = FUNC_4(VAR_7);
    for (VAR_13 = 0; VAR_13 < VAR_14 && VAR_11 < VAR_9; VAR_13++) {
        int VAR_17 = VAR_8;
        int64_t VAR_18 = VAR_10;
        if (VAR_12 & VAR_3) VAR_17 = FUNC_3(VAR_7);
        if (VAR_12 & VAR_5) FUNC_3(VAR_7);
        if (VAR_12 & VAR_4) FUNC_3(VAR_7);
        if (VAR_12 & VAR_2) VAR_18 += FUNC_3(VAR_7);
        if (VAR_17 < 0) {
            FUNC_5(VAR_6, "Negative sample duration %d\n", VAR_17);
            return -1;
        }
        if (VAR_13 == 0)
            VAR_15 = VAR_18;
        VAR_16 = FUNC_0(VAR_16, VAR_18 + VAR_17);
        VAR_10 += VAR_17;
        VAR_11 = FUNC_4(VAR_7);
    }

    return VAR_16 - VAR_15;
}
