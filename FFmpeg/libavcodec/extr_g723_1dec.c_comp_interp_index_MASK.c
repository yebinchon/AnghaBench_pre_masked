
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int excitation; int * audio; } ;
typedef TYPE_1__ G723_1_ChannelContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int*,int,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(G723_1_ChannelContext *VAR_4, int VAR_5,
                             int *VAR_6, int *VAR_7)
{
    int VAR_8 = VAR_2 + 2 * VAR_3;
    int16_t *VAR_9 = VAR_4->audio + VAR_1;

    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

    *VAR_7 = FUNC_3(VAR_9, VAR_4->excitation, VAR_0 + VAR_2);
    VAR_9 += VAR_8;


    VAR_11 = 0;
    VAR_10 = FUNC_0(VAR_9, VAR_8, &VAR_11, VAR_5, VAR_3 * 2, -1);
    VAR_11 = FUNC_1(VAR_11, 1 << 15) >> 16;


    VAR_12 = FUNC_2(VAR_9, VAR_9, VAR_3 * 2);
    *VAR_6 = FUNC_1(VAR_12, 1 << 15) >> 16;

    if (VAR_11 <= 0)
        return 0;


    VAR_13 = FUNC_2(VAR_9 - VAR_10, VAR_9 - VAR_10,
                                     VAR_3 * 2);
    VAR_13 = FUNC_1(VAR_13, 1 << 15) >> 16;

    VAR_14 = VAR_13 * *VAR_6 >> 3;

    if (VAR_14 < VAR_11 * VAR_11) {
        return VAR_10;
    } else
        return 0;
}
