
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int FUNC_8 (int *) ;
 int VAR_3 ;
 int FUNC_9 (int *,int,int ,int,int*,int) ;
 int FUNC_10 (int *,int,int ) ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12(Q68State *VAR_4, uint32_t VAR_5)
{
    int VAR_6;
    int VAR_7;
    int VAR_8;
    switch (VAR_5>>9 & 3) {
      case 0:
        VAR_6 = 0;
        VAR_7 = 1;
        VAR_8 = (FUNC_0(VAR_5) == VAR_1) ? 6 : 8;
        break;
      case 1:
        return FUNC_11(VAR_4, VAR_5);
      case 2:
        VAR_6 = 1;
        VAR_7 = 0;
        VAR_8 = 12;
        break;
      default:
        FUNC_2(VAR_3);
        VAR_6 = 0;
        VAR_7 = 0;
        VAR_8 = 12;
        break;
    }

    if (FUNC_0(VAR_5) == VAR_0) {
        return FUNC_11(VAR_4, VAR_5);
    }




    int VAR_9;
    FUNC_9(VAR_4, VAR_5, VAR_2, VAR_7, &VAR_9, 1);
    if (VAR_9 < 0) {
        return 1;
    }
    VAR_8 += VAR_9;



    FUNC_1(VAR_3, VAR_8);
    FUNC_8(VAR_4);

    if (VAR_7) {
        if (VAR_6) {
            FUNC_3(VAR_3);
        } else {
            FUNC_4(VAR_3);
        }
        FUNC_5(VAR_3);
        FUNC_10(VAR_4, VAR_5, VAR_2);
    } else {
        FUNC_5(VAR_3);

        if (VAR_6) {
            FUNC_6(VAR_3);
        } else {
            FUNC_7(VAR_3);
        }
    }

    return 0;
}
