
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TaskHandle_t ;


 int FUNC_0 (unsigned int,unsigned int volatile) ;
 int FUNC_1 (unsigned int,unsigned int volatile) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,unsigned int volatile) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,void*,scalar_t__,int *,int) ;

__attribute__((used)) static void FUNC_8(int VAR_2)
{
    volatile unsigned VAR_3 = 0;
    TaskHandle_t VAR_4;

    FUNC_7(VAR_1, "Count", 2048,
                            (void *)&VAR_3, VAR_0 + 1,
                            &VAR_4, VAR_2);

    FUNC_3(10);

    FUNC_1(0, VAR_3);



    const int VAR_5 = 5;
    for (int VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        FUNC_6(VAR_4);
        unsigned VAR_7 = VAR_3;
        FUNC_2("Suspending @ %d\n", VAR_7);

        FUNC_3(2);

        FUNC_2("Still suspended @ %d\n", VAR_3);


        FUNC_0(VAR_7, VAR_3);
        FUNC_5(VAR_4);
        FUNC_3(2);

        FUNC_2("Resumed @ %d\n", VAR_3);

        FUNC_1(VAR_7, VAR_3);
    }

    FUNC_4(VAR_4);
}
