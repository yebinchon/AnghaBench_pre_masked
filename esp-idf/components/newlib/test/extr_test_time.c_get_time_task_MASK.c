
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xSemaphoreHandle ;
struct timeval {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
    xSemaphoreHandle *VAR_2 = (xSemaphoreHandle *) VAR_1;
    struct timeval VAR_3;

    while (VAR_0 == 0) {
        FUNC_0(&VAR_3, ((void*)0));
    }
    FUNC_2(*VAR_2);
    FUNC_1(((void*)0));
}
