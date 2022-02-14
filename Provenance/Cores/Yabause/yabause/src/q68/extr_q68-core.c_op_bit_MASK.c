
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {unsigned int* D; int SR; } ;
typedef TYPE_1__ Q68State ;


 int VAR_0 ;

 int FUNC_0 (int) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,int,int,int,int*) ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 size_t VAR_5 ;

__attribute__((used)) static int FUNC_6(Q68State *VAR_6, uint32_t VAR_7)
{

    if (FUNC_0(VAR_7) == VAR_0) {
        if (VAR_7 & 0x0100) {
            return FUNC_4(VAR_6, VAR_7);
        } else {
            return FUNC_5(VAR_6, VAR_7);
        }
    }

    enum {BTST = 0, BCHG = 1, BCLR = 2, BSET = 3} VAR_8 = VAR_7>>6 & 3;
    int VAR_9;


    unsigned int VAR_10;
    if (VAR_7 & 0x0100) {

        VAR_1;
        VAR_10 = VAR_6->D[VAR_5];
        VAR_9 = 0;
    } else {
        VAR_10 = FUNC_1(VAR_6);
        VAR_9 = 4;
    }


    int VAR_11;
    switch (FUNC_0(VAR_7)) {
      case 128:
        VAR_11 = VAR_3;
        VAR_10 %= 32;
        break;
      default:
        VAR_11 = VAR_2;
        VAR_10 %= 8;
        break;
    }
    int VAR_12;
    uint32_t VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_11, 1, &VAR_12);
    if (VAR_12 < 0) {
        return 0;
    }
    VAR_9 += VAR_12;
    if (VAR_11 == VAR_3 && (VAR_8 == BCLR || VAR_8 == BTST)) {
        VAR_9 += 2;
    }


    if ((VAR_13 >> VAR_10) & 1) {
        VAR_6->SR &= ~VAR_4;
    } else {
        VAR_6->SR |= VAR_4;
    }
    switch (VAR_8) {
      case BTST: break;
      case BCHG: VAR_13 ^= 1 << VAR_10; break;
      case BCLR: VAR_13 &= ~(1 << VAR_10); break;
      case BSET: VAR_13 |= 1 << VAR_10; break;
    }


    if (VAR_8 != BTST) {
        FUNC_3(VAR_6, VAR_7, VAR_11, VAR_13);
    }



    return (VAR_8==BTST ? 4 : 8) + VAR_9;
}
