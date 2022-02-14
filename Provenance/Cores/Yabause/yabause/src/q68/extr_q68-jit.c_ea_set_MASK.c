
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int Q68State ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_10(Q68State *VAR_5, uint32_t VAR_6, int VAR_7)
{
    switch (FUNC_0(VAR_6)) {
      case 128:
        if (VAR_7 == VAR_2) {
            FUNC_7(VAR_4, FUNC_1(VAR_6) * 4);
        } else if (VAR_7 == VAR_3) {
            FUNC_9(VAR_4, FUNC_1(VAR_6) * 4);
        } else {
            FUNC_8(VAR_4, FUNC_1(VAR_6) * 4);
        }
        return;
      case 129:
        if (VAR_7 == VAR_3) {
            FUNC_3(VAR_4, (8 + FUNC_1(VAR_6)) * 4);
        } else {
            FUNC_8(VAR_4, (8 + FUNC_1(VAR_6)) * 4);
        }
        return;
      default: {
        if (VAR_7 == VAR_2) {
            FUNC_4(VAR_4);
        } else if (VAR_7 == VAR_3) {

            FUNC_2(
                VAR_4, VAR_6,
                VAR_0 | VAR_1
            );

            FUNC_6(VAR_4);
        } else {

            FUNC_2(
                VAR_4, VAR_6,
                VAR_0 | VAR_1
            );

            FUNC_5(VAR_4);
        }
        return;
      }
    }
}
