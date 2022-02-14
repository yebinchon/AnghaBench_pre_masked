
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ptrdiff_t ;
typedef int int16_t ;
struct TYPE_3__ {int (* fdct ) (int *) ;} ;
typedef TYPE_1__ FDCTDSPContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(FDCTDSPContext *VAR_0, const uint16_t *VAR_1,
                        ptrdiff_t VAR_2, int16_t *VAR_3)
{
    int VAR_4, VAR_5;
    const uint16_t *VAR_6 = VAR_1;

    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
        for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
            VAR_3[VAR_5 * 8 + VAR_4] = VAR_6[VAR_4];
        VAR_6 += VAR_2 >> 1;
    }
    VAR_0->fdct(VAR_3);
}
