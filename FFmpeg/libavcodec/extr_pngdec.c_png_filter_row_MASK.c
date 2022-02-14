
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int (* add_paeth_prediction ) (int*,int*,int*,int,int) ;int (* add_bytes_l2 ) (int*,int*,int*,int) ;} ;
typedef TYPE_1__ PNGDSPContext ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int*,int*,int,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int*,int*,int) ;
 int FUNC_4 (int*,int*,int*,int,int) ;

__attribute__((used)) static void FUNC_5(PNGDSPContext *VAR_2, uint8_t *VAR_3, int VAR_4,
                           uint8_t *VAR_5, uint8_t *VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

    switch (VAR_4) {
    case 131:
        FUNC_2(VAR_3, VAR_5, VAR_7);
        break;
    case 129:
        for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
            VAR_3[VAR_9] = VAR_5[VAR_9];
        if (VAR_8 == 4) {
            VAR_10 = *(int *)VAR_3;
            for (; VAR_9 < VAR_7; VAR_9 += VAR_8) {
                unsigned VAR_15 = *(int *)(VAR_5 + VAR_9);
                VAR_10 = ((VAR_15 & 0x7f7f7f7f) + (VAR_10 & 0x7f7f7f7f)) ^ ((VAR_15 ^ VAR_10) & 0x80808080);
                *(int *)(VAR_3 + VAR_9) = VAR_10;
            }
        } else {

            FUNC_0(VAR_1);
        }
        break;
    case 128:
        VAR_2->add_bytes_l2(VAR_3, VAR_5, VAR_6, VAR_7);
        break;
    case 132:
        for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
            VAR_10 = (VAR_6[VAR_9] >> 1);
            VAR_3[VAR_9] = VAR_10 + VAR_5[VAR_9];
        }

        FUNC_0(VAR_0);
        break;
    case 130:
        for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
            VAR_10 = VAR_6[VAR_9];
            VAR_3[VAR_9] = VAR_10 + VAR_5[VAR_9];
        }
        if (VAR_8 > 2 && VAR_7 > 4) {


            int VAR_16 = (VAR_8 & 3) ? VAR_7 - 3 : VAR_7;

            if (VAR_16 > VAR_9) {
                VAR_2->add_paeth_prediction(VAR_3 + VAR_9, VAR_5 + VAR_9, VAR_6 + VAR_9, VAR_7 - VAR_9, VAR_8);
                VAR_9 = VAR_16;
            }
        }
        FUNC_1(VAR_3 + VAR_9, VAR_5 + VAR_9, VAR_6 + VAR_9, VAR_7 - VAR_9, VAR_8);
        break;
    }
}
