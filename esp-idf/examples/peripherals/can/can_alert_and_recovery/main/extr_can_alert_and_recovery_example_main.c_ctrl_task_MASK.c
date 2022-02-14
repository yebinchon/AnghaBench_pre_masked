
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 () ;
 int VAR_5 ;
 int FUNC_7 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static void FUNC_12(void *VAR_9)
{
    FUNC_11(VAR_5, VAR_6);
    FUNC_0(FUNC_6());
    FUNC_1(VAR_4, "Driver started");
    FUNC_1(VAR_4, "Starting transmissions");
    FUNC_10(VAR_8);


    FUNC_5(VAR_0 | VAR_3 | VAR_1, ((void*)0));
    for (int VAR_10 = 3; VAR_10 > 0; VAR_10--) {
        FUNC_2(VAR_4, "Trigger TX errors in %d", VAR_10);
        FUNC_8(FUNC_7(1000));
    }
    FUNC_1(VAR_4, "Trigger errors");
    VAR_7 = 1;

    while (1) {
        uint32_t VAR_11;
        FUNC_4(&VAR_11, VAR_6);
        if (VAR_11 & VAR_0) {
            FUNC_1(VAR_4, "Surpassed Error Warning Limit");
        }
        if (VAR_11 & VAR_3) {
            FUNC_1(VAR_4, "Entered Error Passive state");
        }
        if (VAR_11 & VAR_1) {
            FUNC_1(VAR_4, "Bus Off state");

            FUNC_5(VAR_2, ((void*)0));
            for (int VAR_12 = 3; VAR_12 > 0; VAR_12--) {
                FUNC_2(VAR_4, "Initiate bus recovery in %d", VAR_12);
                FUNC_8(FUNC_7(1000));
            }
            FUNC_3();
            FUNC_1(VAR_4, "Initiate bus recovery");
        }
        if (VAR_11 & VAR_2) {

            FUNC_1(VAR_4, "Bus Recovered");
            break;
        }
    }

    FUNC_10(VAR_5);
    FUNC_9(((void*)0));
}
