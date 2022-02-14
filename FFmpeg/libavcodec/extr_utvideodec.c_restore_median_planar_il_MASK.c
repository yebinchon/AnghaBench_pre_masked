
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_4__ {int (* add_left_pred ) (int*,int*,int,int) ;int (* add_median_pred ) (int*,int*,int*,int,int*,int*) ;} ;
struct TYPE_5__ {TYPE_1__ llviddsp; } ;
typedef TYPE_2__ UtvideoContext ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,int,int) ;
 int FUNC_2 (int*,int*,int,int) ;
 int FUNC_3 (int*,int*,int,int) ;
 int FUNC_4 (int*,int*,int*,int,int*,int*) ;
 int FUNC_5 (int*,int*,int*,int,int*,int*) ;
 int FUNC_6 (int*,int*,int*,int,int*,int*) ;
 int FUNC_7 (int*,int*,int*,int,int*,int*) ;

__attribute__((used)) static void FUNC_8(UtvideoContext *VAR_0, uint8_t *VAR_1, ptrdiff_t VAR_2,
                                     int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12;
    uint8_t *VAR_13;
    int VAR_14, VAR_15;
    const int VAR_16 = ~(VAR_6 ? 3 : 1);
    const ptrdiff_t VAR_17 = VAR_2 << 1;

    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
        VAR_14 = ((VAR_9 * VAR_4) / VAR_5) & VAR_16;
        VAR_15 = ((((VAR_9 + 1) * VAR_4) / VAR_5) & VAR_16) -
                         VAR_14;
        VAR_15 >>= 1;
        if (!VAR_15)
            continue;

        VAR_13 = VAR_1 + VAR_14 * VAR_2;


        VAR_13[0] += 0x80;
        VAR_10 = VAR_0->llviddsp.add_left_pred(VAR_13, VAR_13, VAR_3, 0);
        VAR_0->llviddsp.add_left_pred(VAR_13 + VAR_2, VAR_13 + VAR_2, VAR_3, VAR_10);
        VAR_13 += VAR_17;
        if (VAR_15 <= 1)
            continue;

        VAR_12 = VAR_13[-VAR_17];
        VAR_13[0] += VAR_12;
        VAR_10 = VAR_13[0];
        for (VAR_7 = 1; VAR_7 < FUNC_0(VAR_3, 16); VAR_7++) {
            VAR_11 = VAR_13[VAR_7 - VAR_17];
            VAR_13[VAR_7] += FUNC_1(VAR_10, VAR_11, (uint8_t)(VAR_10 + VAR_11 - VAR_12));
            VAR_12 = VAR_11;
            VAR_10 = VAR_13[VAR_7];
        }
        if (VAR_3 > 16)
            VAR_0->llviddsp.add_median_pred(VAR_13 + 16, VAR_13 - VAR_17 + 16,
                                        VAR_13 + 16, VAR_3 - 16, &VAR_10, &VAR_11);

        VAR_0->llviddsp.add_median_pred(VAR_13 + VAR_2, VAR_13 - VAR_2,
                                        VAR_13 + VAR_2, VAR_3, &VAR_10, &VAR_11);
        VAR_13 += VAR_17;

        for (VAR_8 = 2; VAR_8 < VAR_15; VAR_8++) {
            VAR_0->llviddsp.add_median_pred(VAR_13, VAR_13 - VAR_17,
                                            VAR_13, VAR_3, &VAR_10, &VAR_11);
            VAR_0->llviddsp.add_median_pred(VAR_13 + VAR_2, VAR_13 - VAR_2,
                                            VAR_13 + VAR_2, VAR_3, &VAR_10, &VAR_11);
            VAR_13 += VAR_17;
        }
    }
}
