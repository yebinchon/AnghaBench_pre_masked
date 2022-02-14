
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int member_0; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,int const) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,struct tm*) ;
 int FUNC_8 () ;
 int VAR_2 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(void)
{
    FUNC_0( FUNC_8() );
    FUNC_3();
    FUNC_0( FUNC_2() );





    FUNC_0(FUNC_4());

    FUNC_6();


    time_t VAR_3 = 0;
    struct tm VAR_4 = { 0 };
    int VAR_5 = 0;
    const int VAR_6 = 10;
    while (FUNC_9() == VAR_0 && ++VAR_5 < VAR_6) {
        FUNC_1(VAR_1, "Waiting for system time to be set... (%d/%d)", VAR_5, VAR_6);
        FUNC_11(2000 / VAR_2);
    }
    FUNC_10(&VAR_3);
    FUNC_7(&VAR_3, &VAR_4);

    FUNC_0( FUNC_5() );
}
