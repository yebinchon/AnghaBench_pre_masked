
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void *VAR_6)
{
    static int VAR_7;
    int VAR_8 = 0;
    int VAR_9 = 0;
    while (1) {
        if (VAR_9 == 0) {

            FUNC_4();
            for (int VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
                if (VAR_4[VAR_10] == 1) {
                    FUNC_0(VAR_0, "T%d activated!", VAR_10);

                    FUNC_6(200 / VAR_3);

                    VAR_4[VAR_10] = 0;


                    VAR_7 = 1;
                }
            }
        } else {

            FUNC_3();
            FUNC_2();
            for (int VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
                uint16_t VAR_12 = 0;
                FUNC_5(VAR_11, &VAR_12);
                if (VAR_12 < VAR_5[VAR_11] * VAR_2 / 100) {
                    FUNC_0(VAR_0, "T%d activated!", VAR_11);
                    FUNC_0(VAR_0, "value: %d; init val: %d", VAR_12, VAR_5[VAR_11]);
                    FUNC_6(200 / VAR_3);

                    VAR_8 = 1;
                    VAR_7 = 1;
                }
            }
        }

        FUNC_6(10 / VAR_3);



        if (VAR_7++ % 500 == 0) {
            FUNC_0(VAR_0, "Waiting for any pad being touched...");
        }


        if (VAR_8++ % 2000 == 0) {
            VAR_9 = !VAR_9;
            FUNC_1(VAR_0, "Change mode...%s", VAR_9 == 0 ? "interrupt mode" : "filter mode");
        }
    }
}
