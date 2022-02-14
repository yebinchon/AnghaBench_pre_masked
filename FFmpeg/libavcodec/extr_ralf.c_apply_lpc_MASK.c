
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int** channel_data; int filter_bits; int filter_length; scalar_t__* filter; } ;
typedef TYPE_1__ RALFContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(RALFContext *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5, VAR_6;
    int *VAR_7 = VAR_0->channel_data[VAR_1];
    int VAR_8 = 1 << (VAR_0->filter_bits - 1);
    int VAR_9 = (1 << VAR_3) - 1, VAR_10 = -VAR_9 - 1;

    for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++) {
        int VAR_11 = FUNC_1(VAR_0->filter_length, VAR_4);

        VAR_6 = 0;
        for (VAR_5 = 0; VAR_5 < VAR_11; VAR_5++)
            VAR_6 += (unsigned)VAR_0->filter[VAR_5] * VAR_7[VAR_4 - VAR_5 - 1];
        if (VAR_6 < 0) {
            VAR_6 = (VAR_6 + VAR_8 - 1) >> VAR_0->filter_bits;
            VAR_6 = FUNC_0(VAR_6, VAR_10);
        } else {
            VAR_6 = (VAR_6 + VAR_8) >> VAR_0->filter_bits;
            VAR_6 = FUNC_1(VAR_6, VAR_9);
        }
        VAR_7[VAR_4] += VAR_6;
    }
}
