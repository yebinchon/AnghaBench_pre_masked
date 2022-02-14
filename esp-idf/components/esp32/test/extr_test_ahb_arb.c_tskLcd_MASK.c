
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int* FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int*,int*,int) ;
 int VAR_2 ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void *VAR_3)
{
    uint16_t *VAR_4 = FUNC_3(VAR_0 * 2);
    uint16_t *VAR_5 = FUNC_3(VAR_0 * 2);
    uint16_t VAR_6 = 0;
    int VAR_7;
    FUNC_2();

    while (1) {
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            VAR_4[VAR_7] = VAR_7 ^ VAR_6;
        }
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
            VAR_5[VAR_7] = 0;
        }
        FUNC_5(VAR_4, VAR_5, VAR_0);
        FUNC_6(20 / VAR_1);
        FUNC_1();
        for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) if (VAR_5[VAR_7] != (VAR_7 ^ VAR_6)) {
                FUNC_4("Rxbuf err! pos %d val %x xor %x", VAR_7, (int)VAR_5[VAR_7], (int)VAR_6);
            }
        FUNC_4(".");
        FUNC_0(VAR_2);
        VAR_6++;
    }
}
