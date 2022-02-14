
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int member_1; int member_0; } ;
struct timeval {int tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,struct timezone*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void)
{
    struct timeval VAR_1 = {
        .tv_sec = 1509449941,
    };
    struct timezone VAR_2 = {
        0, 0
    };
    FUNC_0(&VAR_1, &VAR_2);


    FUNC_2(VAR_0);
    FUNC_1();
}
