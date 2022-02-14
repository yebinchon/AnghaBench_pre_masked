
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int i2c_config_t ;
typedef int i2c_cmd_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int*,int,int ) ;
 int FUNC_10 (int ,int*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int,int ) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int*,int ,int ) ;
 int VAR_11 ;
 int FUNC_17 (char*,int) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int) ;

__attribute__((used)) static void FUNC_21(void)
{
    uint8_t *VAR_12 = (uint8_t *) FUNC_15(VAR_2);
    FUNC_16(VAR_12, 0, VAR_2);
    i2c_config_t VAR_13 = FUNC_8();
    FUNC_1(FUNC_14(VAR_4, &VAR_13));
    FUNC_1(FUNC_6(VAR_4, VAR_7,
                                   VAR_5,
                                   VAR_6, 0));
    FUNC_19("i2c slave init finish");

    i2c_cmd_handle_t VAR_14 = FUNC_3();
    FUNC_11(VAR_14);
    FUNC_13(VAR_14, ( VAR_3 << 1 ) | VAR_9, VAR_0);

    FUNC_18("slave write");
    FUNC_19("master read");
    FUNC_9(VAR_14, VAR_12, VAR_10-1, VAR_1);
    FUNC_10(VAR_14, VAR_12 + VAR_10-1, VAR_8);
    FUNC_12(VAR_14);
    FUNC_7(VAR_4, VAR_14, 5000 / VAR_11);
    FUNC_4(VAR_14);
    FUNC_20(100 / VAR_11);
    for (int VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
        FUNC_17("%d\n", VAR_12[VAR_15]);
        FUNC_0(VAR_12[VAR_15]==VAR_15);
    }
    FUNC_2(VAR_12);
    FUNC_18("ready to delete");
    FUNC_5(VAR_4);
}
