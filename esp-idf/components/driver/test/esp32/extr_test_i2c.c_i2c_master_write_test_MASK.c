
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    uint8_t *VAR_5 = (uint8_t *) FUNC_8(VAR_0);
    int VAR_6;

    i2c_config_t VAR_7 = FUNC_5();
    FUNC_0(FUNC_7(VAR_1, &VAR_7));

    FUNC_0(FUNC_4(VAR_1, VAR_4,
                                   VAR_2,
                                   VAR_3, 0));
    FUNC_10("i2c slave init finish");

    FUNC_9("master write");
    for (VAR_6 = 0; VAR_6 < VAR_0 / 2; VAR_6++) {
        VAR_5[VAR_6] = VAR_6;
    }
    FUNC_6(VAR_1, VAR_5, VAR_0 / 2);
    FUNC_1(VAR_5, VAR_6 + 1);
    FUNC_2(VAR_5);
    FUNC_10("ready to delete");
    FUNC_0(FUNC_3(VAR_1));
}
