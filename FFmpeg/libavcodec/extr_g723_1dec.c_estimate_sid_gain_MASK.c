
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int64_t ;
typedef int int32_t ;
struct TYPE_3__ {int cur_gain; int sid_gain; } ;
typedef TYPE_1__ G723_1_ChannelContext ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int* VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_2(G723_1_ChannelContext *VAR_4)
{
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_6 = 16 - VAR_4->cur_gain * 2;
    if (VAR_6 > 0) {
        if (VAR_4->sid_gain == 0) {
            VAR_9 = 0;
        } else if (VAR_6 >= 31 || (int32_t)((uint32_t)VAR_4->sid_gain << VAR_6) >> VAR_6 != VAR_4->sid_gain) {
            if (VAR_4->sid_gain < 0) VAR_9 = VAR_1;
            else VAR_9 = VAR_0;
        } else
            VAR_9 = VAR_4->sid_gain * (1 << VAR_6);
    } else if(VAR_6 < -31) {
        VAR_9 = (VAR_4->sid_gain < 0) ? -1 : 0;
    }else
        VAR_9 = VAR_4->sid_gain >> -VAR_6;
    VAR_12 = FUNC_1(VAR_9 * (int64_t)VAR_3[0] >> 16);

    if (VAR_12 >= VAR_2[2])
        return 0x3F;

    if (VAR_12 >= VAR_2[1]) {
        VAR_6 = 4;
        VAR_7 = 3;
    } else {
        VAR_6 = 3;
        VAR_7 = (VAR_12 >= VAR_2[0]);
    }
    VAR_8 = FUNC_0(VAR_7, 3);

    VAR_10 = 1 << VAR_6;
    VAR_11 = VAR_10 >> 1;
    for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
        VAR_9 = VAR_7 * 32 + (VAR_10 << VAR_8);
        VAR_9 *= VAR_9;
        if (VAR_12 >= VAR_9)
            VAR_10 += VAR_11;
        else
            VAR_10 -= VAR_11;
        VAR_11 >>= 1;
    }

    VAR_9 = VAR_7 * 32 + (VAR_10 << VAR_8);
    VAR_13 = VAR_9 * VAR_9 - VAR_12;
    if (VAR_13 <= 0) {
        VAR_9 = VAR_7 * 32 + ((VAR_10 + 1) << VAR_8);
        VAR_9 = VAR_9 * VAR_9 - VAR_12;
        VAR_10 = (VAR_8 - 1) * 16 + VAR_10;
        if (VAR_9 >= VAR_13)
            VAR_10++;
    } else {
        VAR_9 = VAR_7 * 32 + ((VAR_10 - 1) << VAR_8);
        VAR_9 = VAR_9 * VAR_9 - VAR_12;
        VAR_10 = (VAR_8 - 1) * 16 + VAR_10;
        if (VAR_9 >= VAR_13)
            VAR_10--;
    }

    return VAR_10;
}
