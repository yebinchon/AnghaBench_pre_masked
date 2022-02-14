
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int,scalar_t__) ;
 int VAR_4 ;
 int FUNC_4 (int ,int,int *,int *,int *) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(void *VAR_7)
{
    xSemaphoreHandle *VAR_8 = (xSemaphoreHandle *) VAR_7;
    VAR_4 = 1;

    FUNC_1(FUNC_4(VAR_3, VAR_2 | VAR_1, ((void*)0), ((void*)0), &VAR_6));

    while (VAR_5 == 0) {
        FUNC_3(2, FUNC_2() + 21);
        for (int VAR_9 = 0; VAR_9 < 200; ++VAR_9) {
            if (FUNC_0(VAR_0) != FUNC_0(VAR_0)) {
                VAR_4 = 0;
                break;
            }
        }
    }
    FUNC_5(VAR_6);
    FUNC_6("accessDPORT2 finish\n");

    FUNC_8(*VAR_8);
    FUNC_7(((void*)0));
}
