
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
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int*,int,int) ;
 int FUNC_9 (int ,int*,int,int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int*,int ,int) ;
 int VAR_6 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static void FUNC_15(void)
{
    uint8_t *VAR_7 = (uint8_t *) FUNC_10(VAR_0);
    FUNC_11(VAR_7, 0, VAR_0);
    uint8_t *VAR_8 = (uint8_t *) FUNC_10(VAR_0);
    int VAR_9;

    i2c_config_t VAR_10 = FUNC_7();
    FUNC_1(FUNC_6( VAR_2, &VAR_10));
    FUNC_1(FUNC_5(VAR_2, VAR_1,
                                   VAR_3,
                                   VAR_4, 0));
    FUNC_13("i2c slave init finish");
    FUNC_14("slave write");

    for (int VAR_11 = 0; VAR_11 < VAR_0 / 2; VAR_11++) {
        VAR_8[VAR_11] = VAR_11/2;
    }
    VAR_9 = FUNC_9(VAR_2, VAR_8, VAR_5, 2000 / VAR_6);
    FUNC_2(VAR_8, VAR_9);
    FUNC_13("master read and write");
    FUNC_14("slave read");
    VAR_9 = FUNC_8( VAR_2, VAR_7, VAR_5, 1000 / VAR_6);
    FUNC_12("slave read data is:\n");
    FUNC_2(VAR_7, VAR_9);
    for (int VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
        FUNC_0(VAR_7[VAR_12] == VAR_12 % 3);
    }
    FUNC_3(VAR_8);
    FUNC_3(VAR_7);
    FUNC_13("ready to delete");
    FUNC_4(VAR_2);
}
