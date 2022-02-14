
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_4__ {int current_PC; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;
 int VAR_1 ;







 unsigned int FUNC_0 (int) ;


 unsigned int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int const,unsigned int const) ;
 int FUNC_5 (int ,int const,unsigned int const) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (int ,int,unsigned int const,int const) ;
 int FUNC_8 (int ,int,unsigned int const,int const) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int,unsigned int const) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int,unsigned int const) ;
 int FUNC_13 (int ) ;
 int VAR_2 ;
 unsigned int FUNC_14 (int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_15(Q68State *VAR_4, uint32_t VAR_5, int VAR_6,
                      int VAR_7)
{
    const unsigned int VAR_8 = FUNC_0(VAR_5);
    const unsigned int VAR_9 = FUNC_1(VAR_5);
    const unsigned int VAR_10 = FUNC_14(VAR_6);

    static const int VAR_11[8] = {0, 0, 4, 4, 6, 8, 10, 0};
    int VAR_12 = VAR_11[VAR_8] + (VAR_6==VAR_2 ? 4 : 0);

    switch (VAR_8) {
      case 134:
        FUNC_9(VAR_3, (8+VAR_9)*4);
        break;
      case 129:
        if (VAR_10 == 1 && VAR_9 == 7) {
            FUNC_11(VAR_3);
        } else {
            FUNC_10(VAR_3, (8+VAR_9)*4, VAR_10);
        }
        break;
      case 128:
        if (VAR_7 == VAR_1) {


            VAR_12 -= 2;
        }
        if (VAR_10 == 1 && VAR_9 == 7) {
            FUNC_13(VAR_3);
        } else {
            FUNC_12(VAR_3, (8+VAR_9)*4, VAR_10);
        }
        break;
      case 136:
        FUNC_6(VAR_3, (8+VAR_9)*4, (int16_t)FUNC_2(VAR_4));
        break;
      case 135: {
        const uint16_t VAR_13 = FUNC_2(VAR_4);
        const unsigned int VAR_14 = VAR_13 >> 12;
        const int8_t VAR_15 = (int8_t)VAR_13;
        if (VAR_13 & 0x0800) {
            FUNC_7(VAR_3, (8+VAR_9)*4, VAR_14*4, VAR_15);
        } else {
            FUNC_8(VAR_3, (8+VAR_9)*4, VAR_14*4, VAR_15);
        }
        break;
      }
      default:
        switch (VAR_9) {
          case 132:
            VAR_12 += 8;
            FUNC_3(VAR_3, (int16_t)FUNC_2(VAR_4));
            break;
          case 133: {
            VAR_12 += 12;
            uint32_t VAR_16 = FUNC_2(VAR_4) << 16;
            VAR_16 |= (uint16_t)FUNC_2(VAR_4);
            FUNC_3(VAR_3, VAR_16);
            break;
          }
          case 131:
            if (VAR_7 != VAR_0) {
                return -1;
            } else {
                VAR_12 += 8;
                FUNC_3(
                    VAR_3, VAR_4->current_PC + (int16_t)FUNC_2(VAR_4)
                );
            }
            break;
          case 130:
            if (VAR_7 != VAR_0) {
                return -1;
            } else {
                VAR_12 += 10;
                const uint16_t VAR_17 = FUNC_2(VAR_4);
                const unsigned int VAR_18 = VAR_17 >> 12;
                const int32_t VAR_19 = (int32_t)((int8_t)VAR_17);
                if (VAR_17 & 0x0800) {
                    FUNC_4(
                        VAR_3, VAR_4->current_PC + VAR_19, VAR_18*4
                    );
                } else {
                    FUNC_5(
                        VAR_3, VAR_4->current_PC + VAR_19, VAR_18*4
                    );
                }
            }
            break;
          default:
            return -1;
        }
    }
    return VAR_12;
}
