
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ RESET_REASON ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(void)
{
    RESET_REASON VAR_4 = FUNC_4(0);
    if(VAR_4 != VAR_0){
        FUNC_3("Not power on reset\n");
    }
    FUNC_1(VAR_0, VAR_4);
    static uint8_t VAR_5 = 0;
    FUNC_6();

    FUNC_7(VAR_2, VAR_1);

    while( !(FUNC_5(VAR_2) & VAR_3) &&
            VAR_5++ < 100) {
        FUNC_8(200);
    }

    FUNC_0(FUNC_5(VAR_2) & VAR_3);
    FUNC_2();
}
