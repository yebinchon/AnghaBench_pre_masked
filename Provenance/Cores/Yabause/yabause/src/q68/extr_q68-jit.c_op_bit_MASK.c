
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned int) ;
 int FUNC_9 (int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int *,int,int,int,int*,int) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_14(Q68State *VAR_7, uint32_t VAR_8)
{

    if (FUNC_0(VAR_8) == VAR_0) {
        if (VAR_8 & 0x0100) {
            return FUNC_12(VAR_7, VAR_8);
        } else {
            return FUNC_13(VAR_7, VAR_8);
        }
    }

    enum {BTST = 0, BCHG = 1, BCLR = 2, BSET = 3} VAR_9 = VAR_8>>6 & 3;
    int VAR_10;


    if (VAR_8 & 0x0100) {

        VAR_2;
        FUNC_9(VAR_5, VAR_6*4);
        VAR_10 = 0;
    } else {
        unsigned int VAR_11 = FUNC_1(VAR_7);
        FUNC_8(VAR_5, VAR_11);
        VAR_10 = 4;
    }


    int VAR_12 = (FUNC_0(VAR_8)==VAR_1 ? VAR_4 : VAR_3);
    int VAR_13;
    FUNC_10(VAR_7, VAR_8, VAR_12, 1, &VAR_13, 2);
    if (VAR_13 < 0) {
        return 1;
    }
    VAR_10 += VAR_13;
    if (VAR_12 == VAR_4 && (VAR_9 == BCLR || VAR_9 == BTST)) {
        VAR_10 += 2;
    }




    if (VAR_12 == VAR_3) {
        FUNC_6(VAR_5);
    } else {
        FUNC_7(VAR_5);
    }
    switch (VAR_9) {
      default: break;
      case BCHG: FUNC_3(VAR_5); break;
      case BCLR: FUNC_4(VAR_5); break;
      case BSET: FUNC_5(VAR_5); break;
    }


    if (VAR_9 != BTST) {
        FUNC_11(VAR_7, VAR_8, VAR_12);
    }



    FUNC_2(VAR_5, (VAR_9==BTST ? 4 : 8) + VAR_10);

    return 0;
}
