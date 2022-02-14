
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_3__ {int (* scalarproduct_int16 ) (int*,int*,int) ;} ;
typedef TYPE_1__ AudioDSPContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int const*,int*,int,int,int ,int ,int) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int*,int*,int) ;

__attribute__((used)) static int16_t FUNC_5(AudioDSPContext *VAR_0, int16_t *VAR_1,
                             const int16_t *VAR_2, int16_t* VAR_3,
                             int VAR_4)
{
    int VAR_5,VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;

    VAR_1[10] = 4096;


    FUNC_2(VAR_1 + 11, VAR_2 + 1, VAR_1 + 11, 22, 10, 0, 0, 0x800);



    VAR_6 = VAR_0->scalarproduct_int16(VAR_1 + 10, VAR_1 + 10, 20);
    VAR_5 = VAR_0->scalarproduct_int16(VAR_1 + 10, VAR_1 + 11, 20);


    VAR_7 = FUNC_1(VAR_6) - 14;
    if (VAR_7 > 0) {
        VAR_6 >>= VAR_7;
        VAR_5 >>= VAR_7;
    }

    if (FUNC_0(VAR_5) > VAR_6 || !VAR_6)
        return 0;

    VAR_9 = 0;
    for (VAR_8 = 0; VAR_8 < 20; VAR_8++)
        VAR_9 += FUNC_0(VAR_1[VAR_8 + 10]);
    VAR_9 >>= 2;

    if (VAR_9 > 0x400) {
        VAR_7 = 0x2000000 / VAR_9;
        for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
            VAR_3[VAR_8] = (VAR_3[VAR_8] * VAR_7 + 0x4000) >> 15;
    }

    return -(VAR_5 * (1 << 15)) / VAR_6;
}
