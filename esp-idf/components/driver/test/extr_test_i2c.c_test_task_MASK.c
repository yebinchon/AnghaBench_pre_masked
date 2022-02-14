
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;
typedef int uint8_t ;
typedef int i2c_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,int ,int ) ;
 int FUNC_6 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(void *VAR_7)
{
    xSemaphoreHandle *VAR_8 = (xSemaphoreHandle *) VAR_7;

    uint8_t *VAR_9 = (uint8_t *) FUNC_7(VAR_0);
    i2c_config_t VAR_10 = FUNC_4();
    FUNC_0(FUNC_3( VAR_2, &VAR_10));
    FUNC_0(FUNC_2(VAR_2, VAR_1,
                                   VAR_3,
                                   VAR_4, 0));
    while (VAR_5 == 0) {
        if (VAR_6) {
            FUNC_5(VAR_2, VAR_9, VAR_0, 0);
        } else {
            FUNC_6(VAR_2, VAR_9, VAR_0, 0);
        }
    }

    FUNC_1(VAR_9);
    FUNC_9(*VAR_8);
    FUNC_8(((void*)0));
}
