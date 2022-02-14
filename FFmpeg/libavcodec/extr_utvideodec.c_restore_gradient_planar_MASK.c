
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_4__ {int (* add_gradient_pred ) (int*,int,int) ;int (* add_left_pred ) (int*,int*,int,int ) ;} ;
struct TYPE_5__ {TYPE_1__ llviddsp; } ;
typedef TYPE_2__ UtvideoContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int*,int*,int,int ) ;
 int FUNC_2 (int*,int,int) ;

__attribute__((used)) static void FUNC_3(UtvideoContext *VAR_0, uint8_t *VAR_1, ptrdiff_t VAR_2,
                                    int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12;
    uint8_t *VAR_13;
    int VAR_14, VAR_15;
    const int VAR_16 = ~VAR_6;
    int VAR_17 = FUNC_0(VAR_3, 32);

    for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
        VAR_14 = ((VAR_9 * VAR_4) / VAR_5) & VAR_16;
        VAR_15 = ((((VAR_9 + 1) * VAR_4) / VAR_5) & VAR_16) -
                       VAR_14;

        if (!VAR_15)
            continue;
        VAR_13 = VAR_1 + VAR_14 * VAR_2;


        VAR_13[0] += 0x80;
        VAR_0->llviddsp.add_left_pred(VAR_13, VAR_13, VAR_3, 0);
        VAR_13 += VAR_2;
        if (VAR_15 <= 1)
            continue;
        for (VAR_8 = 1; VAR_8 < VAR_15; VAR_8++) {

            VAR_13[0] = (VAR_13[0] + VAR_13[-VAR_2]) & 0xFF;
            for (VAR_7 = 1; VAR_7 < VAR_17; VAR_7++) {
                VAR_10 = VAR_13[VAR_7 - VAR_2];
                VAR_11 = VAR_13[VAR_7 - (VAR_2 + 1)];
                VAR_12 = VAR_13[VAR_7 - 1];
                VAR_13[VAR_7] = (VAR_10 - VAR_11 + VAR_12 + VAR_13[VAR_7]) & 0xFF;
            }
            if (VAR_3 > 32)
                VAR_0->llviddsp.add_gradient_pred(VAR_13 + 32, VAR_2, VAR_3 - 32);
            VAR_13 += VAR_2;
        }
    }
}
