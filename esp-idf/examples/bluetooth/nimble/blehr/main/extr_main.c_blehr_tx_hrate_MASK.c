
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xTimerHandle ;
typedef int uint8_t ;
struct os_mbuf {int dummy; } ;
typedef int hrm ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct os_mbuf*) ;
 struct os_mbuf* FUNC_2 (int*,int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(xTimerHandle VAR_4)
{
    static uint8_t VAR_5[2];
    int VAR_6;
    struct os_mbuf *VAR_7;

    if (!VAR_3) {
        FUNC_4();
        VAR_1 = 90;
        return;
    }

    VAR_5[0] = 0x06;
    VAR_5[1] = VAR_1;


    VAR_1++;
    if (VAR_1 == 160) {
        VAR_1 = 90;
    }

    VAR_7 = FUNC_2(VAR_5, sizeof(VAR_5));
    VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_7);

    FUNC_0(VAR_6 == 0);

    FUNC_3();
}
