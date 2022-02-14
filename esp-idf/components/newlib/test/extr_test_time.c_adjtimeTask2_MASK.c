
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;
struct timeval {int tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*,struct timeval*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
    xSemaphoreHandle *VAR_2 = (xSemaphoreHandle *) VAR_1;
    struct timeval VAR_3 = {.tv_sec = 0, .tv_usec = 0};
    struct timeval VAR_4;


    while (VAR_0 == 0) {
        VAR_3.tv_sec += 1;
        VAR_3.tv_usec = 900000;
        if (VAR_3.tv_sec >= 2146) VAR_3.tv_sec = 1;
        FUNC_0(&VAR_3, &VAR_4);
    }
    FUNC_2(*VAR_2);
    FUNC_1(((void*)0));
}
