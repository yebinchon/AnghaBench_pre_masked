
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_slave_context_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;

void FUNC_11(void)
{
    esp_slave_context_t VAR_2;
    esp_err_t VAR_3;


    FUNC_7();

    FUNC_1(VAR_1, "host ready, start initializing slave...");

    VAR_3 = FUNC_6(&VAR_2);
    FUNC_0(VAR_3);

    VAR_3 = FUNC_8(&VAR_2);
    FUNC_0(VAR_3);

    uint32_t VAR_4, VAR_5;

    FUNC_4(&VAR_2, 10);

    int VAR_6 = 2;

    while (1) {
        FUNC_3(&VAR_2);
        VAR_4 = FUNC_10();
        while (1) {
            FUNC_5(&VAR_2);
            FUNC_9(1);
            VAR_5 = FUNC_10();
            if ((VAR_5 - VAR_4) * 1000 / VAR_0 > 5000) {
                break;
            }
        }
        if (--VAR_6 == 0) {
            break;
        }
    };

    while (1) {
        FUNC_2(&VAR_2);

        VAR_4 = FUNC_10();
        while (1) {
            FUNC_5(&VAR_2);
            FUNC_9(1);
            VAR_5 = FUNC_10();
            if ((VAR_5 - VAR_4) * 1000 / VAR_0 > 2000) {
                break;
            }
        }
    }
}
