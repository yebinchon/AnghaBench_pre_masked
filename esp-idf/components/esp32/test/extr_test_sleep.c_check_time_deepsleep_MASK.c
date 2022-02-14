
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_2__ {int tv_sec; int tv_usec; } ;
typedef scalar_t__ RESET_REASON ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_5(void)
{
    struct timeval VAR_2;
    RESET_REASON VAR_3 = FUNC_4(0);
    FUNC_0(VAR_3 == VAR_0);
    FUNC_2(&VAR_2, ((void*)0));

    int VAR_4 = (VAR_2.tv_sec - VAR_1.tv_sec) * 1000 + (VAR_2.tv_usec - VAR_1.tv_usec) / 1000;
    FUNC_3("delta time = %d \n", VAR_4);
    FUNC_1(VAR_4 > 0, "Time in deep sleep is negative");
}
