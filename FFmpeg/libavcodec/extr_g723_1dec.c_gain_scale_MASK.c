
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int pf_gain; } ;
typedef TYPE_1__ G723_1_ChannelContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(G723_1_ChannelContext *VAR_1, int16_t * VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
    int VAR_9;

    VAR_4 = VAR_3;
    VAR_5 = 0;
    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
        int VAR_10 = VAR_2[VAR_9] >> 2;
        VAR_10 *= VAR_10;
        VAR_5 = FUNC_2(VAR_5, VAR_10);
    }

    if (VAR_4 && VAR_5) {
        VAR_7 = FUNC_3(VAR_4, 31);
        VAR_8 = FUNC_3(VAR_5, 31);
        VAR_4 = VAR_4 << VAR_7 >> 1;
        VAR_5 <<= VAR_8;

        VAR_8 = 5 + VAR_7 - VAR_8;
        VAR_8 = FUNC_1(VAR_8, 5);

        VAR_6 = (VAR_4 >> 1) / (VAR_5 >> 16);
        VAR_6 = FUNC_4(VAR_6 << 16 >> VAR_8);
    } else {
        VAR_6 = 1 << 12;
    }

    for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
        VAR_1->pf_gain = (15 * VAR_1->pf_gain + VAR_6 + (1 << 3)) >> 4;
        VAR_2[VAR_9] = FUNC_0((VAR_2[VAR_9] * (VAR_1->pf_gain + (VAR_1->pf_gain >> 4)) +
                                   (1 << 10)) >> 11);
    }
}
