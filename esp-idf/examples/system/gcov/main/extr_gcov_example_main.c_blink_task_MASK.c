
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void *VAR_3)
{


    int VAR_4 = -2;






    FUNC_2(VAR_0);

    FUNC_3(VAR_0, VAR_1);

    while(1) {

        FUNC_4(VAR_0, 0);
        FUNC_6(500 / VAR_2);

        FUNC_4(VAR_0, 1);
        FUNC_6(500 / VAR_2);
        FUNC_0();
        if (VAR_4++ < 0) {

            FUNC_5("Ready to dump GCOV data...\n");
            FUNC_1();
            FUNC_5("GCOV data have been dumped.\n");
        }
    }
}
