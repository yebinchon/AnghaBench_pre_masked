
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int i2c_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int*,int ,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_5 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    uint8_t *VAR_6 = (uint8_t *) FUNC_9(VAR_0);
    int VAR_7 = 0;
    int VAR_8 = 0;

    i2c_config_t VAR_9 = FUNC_7();
    FUNC_1(FUNC_6( VAR_2, &VAR_9));
    FUNC_1(FUNC_5(VAR_2, VAR_1,
                                   VAR_3,
                                   VAR_4, 0));
    FUNC_10("i2c slave init finish");

    FUNC_11("master write");
    while (1) {
        VAR_8 = FUNC_8( VAR_2, VAR_6 + VAR_7, VAR_0, 10000 / VAR_5);
        if (VAR_8 == 0) {
            break;
        }
        VAR_7 += VAR_8;
    }
    FUNC_2(VAR_6, VAR_7);
    for (int VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
        FUNC_0(VAR_6[VAR_10] == VAR_10);
    }
    FUNC_3(VAR_6);
    FUNC_10("ready to delete");
    FUNC_1(FUNC_4(VAR_2));
}
