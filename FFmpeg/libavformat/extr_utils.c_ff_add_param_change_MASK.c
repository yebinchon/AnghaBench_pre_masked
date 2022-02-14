
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int int32_t ;
typedef int AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int **,int) ;
 int FUNC_3 (int **,int ) ;

int FUNC_4(AVPacket *VAR_7, int32_t VAR_8,
                        uint64_t VAR_9, int32_t VAR_10,
                        int32_t VAR_11, int32_t VAR_12)
{
    uint32_t VAR_13 = 0;
    int VAR_14 = 4;
    uint8_t *VAR_15;
    if (!VAR_7)
        return FUNC_0(VAR_5);
    if (VAR_8) {
        VAR_14 += 4;
        VAR_13 |= VAR_1;
    }
    if (VAR_9) {
        VAR_14 += 8;
        VAR_13 |= VAR_2;
    }
    if (VAR_10) {
        VAR_14 += 4;
        VAR_13 |= VAR_4;
    }
    if (VAR_11 || VAR_12) {
        VAR_14 += 8;
        VAR_13 |= VAR_3;
    }
    VAR_15 = FUNC_1(VAR_7, VAR_0, VAR_14);
    if (!VAR_15)
        return FUNC_0(VAR_6);
    FUNC_2(&VAR_15, VAR_13);
    if (VAR_8)
        FUNC_2(&VAR_15, VAR_8);
    if (VAR_9)
        FUNC_3(&VAR_15, VAR_9);
    if (VAR_10)
        FUNC_2(&VAR_15, VAR_10);
    if (VAR_11 || VAR_12) {
        FUNC_2(&VAR_15, VAR_11);
        FUNC_2(&VAR_15, VAR_12);
    }
    return 0;
}
