
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_7__ {int SR; int exception; } ;
typedef TYPE_1__ Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int,int ,int,int*) ;
 int FUNC_2 (TYPE_1__*,int,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5(Q68State *VAR_5, uint32_t VAR_6)
{
    int VAR_7;
    int VAR_8;
    int VAR_9;
    switch (VAR_6>>9 & 3) {
      case 0:
        VAR_7 = 0;
        VAR_8 = 1;
        VAR_9 = (FUNC_0(VAR_6) == VAR_1) ? 6 : 8;
        break;
      case 1:
        return FUNC_3(VAR_5, VAR_6);
      case 2:
        VAR_7 = 1;
        VAR_8 = 0;
        VAR_9 = 12;
        break;
      default:
        if (!(VAR_5->SR & VAR_4)) {
            VAR_5->exception = VAR_2;
            return 0;
        }
        VAR_7 = 0;
        VAR_8 = 0;
        VAR_9 = 12;
        break;
    }

    if (FUNC_0(VAR_6) == VAR_0) {
        return FUNC_3(VAR_5, VAR_6);
    }




    int VAR_10;
    uint16_t VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_3, VAR_8, &VAR_10);
    if (VAR_10 < 0) {
        return 0;
    }
    VAR_9 += VAR_10;

    if (VAR_8) {
        uint16_t VAR_12 = VAR_5->SR;
        if (VAR_7) {
            VAR_12 &= 0x00FF;
        }
        FUNC_2(VAR_5, VAR_6, VAR_3, VAR_12);
    } else {
        if (!VAR_7) {
            FUNC_4(VAR_5, VAR_11);
        }
    }
    return VAR_9;
}
