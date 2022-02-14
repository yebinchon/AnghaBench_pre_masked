
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
    xSemaphoreHandle *VAR_3 = (xSemaphoreHandle *) VAR_2;
    char* VAR_4 = (char *) FUNC_1(256);

    while (VAR_1 == 0) {
        FUNC_2(VAR_0, VAR_4, 256);

        FUNC_3(VAR_0, 0);
    }

    FUNC_0(VAR_4);
    FUNC_5(*VAR_3);
    FUNC_4(((void*)0));
}
