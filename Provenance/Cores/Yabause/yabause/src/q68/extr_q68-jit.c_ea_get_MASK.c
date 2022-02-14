
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int Q68State ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (int *,int,int,int ) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static void FUNC_15(Q68State *VAR_10, uint32_t VAR_11, int VAR_12,
                   int VAR_13, int *VAR_14, int VAR_15)
{
    switch (FUNC_0(VAR_11)) {

      case 129:
        *VAR_14 = 0;
        if (VAR_15 == 1) {
            FUNC_8(VAR_9, FUNC_1(VAR_11) * 4);
        } else {
            FUNC_12(VAR_9, FUNC_1(VAR_11) * 4);
        }
        break;

      case 130:
        *VAR_14 = 0;
        if (VAR_12 == VAR_6) {

            FUNC_14(VAR_10, VAR_3);
            *VAR_14 = -1;
            return;
        } else {
            if (VAR_15 == 1) {
                FUNC_8(VAR_9,
                                          (8 + FUNC_1(VAR_11)) * 4);
            } else {
                FUNC_12(VAR_9,
                                          (8 + FUNC_1(VAR_11)) * 4);
            }
        }
        break;

      case 128:
        if (FUNC_1(VAR_11) == VAR_2) {
            if (VAR_13) {
                FUNC_14(VAR_10, VAR_3);
                *VAR_14 = -1;
                return;
            } else {
                *VAR_14 = (VAR_12==VAR_7 ? 8 : 4);
                uint32_t VAR_16;
                VAR_16 = FUNC_2(VAR_10);
                if (VAR_12 == VAR_6) {
                    VAR_16 &= 0xFF;
                } else if (VAR_12 == VAR_7) {
                    VAR_16 <<= 16;
                    VAR_16 |= (uint16_t)FUNC_2(VAR_10);
                }
                if (VAR_15 == 1) {
                    FUNC_7(VAR_9, VAR_16);
                } else {
                    FUNC_7(VAR_9, VAR_16);
                }
            }
            break;
        }


      default:
        *VAR_14 = FUNC_13(VAR_10, VAR_11, VAR_12,
                                 VAR_13 ? VAR_0 : VAR_1);
        if (*VAR_14 < 0) {
            FUNC_14(VAR_10, VAR_3);
            return;
        }
        if (VAR_12 == VAR_6) {
            if (VAR_15 == 1) {
                FUNC_4(VAR_9);
            } else {
                FUNC_9(VAR_9);
            }
        } else if (VAR_12 == VAR_8) {

            FUNC_3(
                VAR_9, VAR_11,
                VAR_4 | VAR_5
            );

            if (VAR_15 == 1) {
                FUNC_6(VAR_9);
            } else {
                FUNC_11(VAR_9);
            }
        } else {

            FUNC_3(
                VAR_9, VAR_11,
                VAR_4 | VAR_5
            );

            if (VAR_15 == 1) {
                FUNC_5(VAR_9);
            } else {
                FUNC_10(VAR_9);
            }
        }
        break;

    }
}
