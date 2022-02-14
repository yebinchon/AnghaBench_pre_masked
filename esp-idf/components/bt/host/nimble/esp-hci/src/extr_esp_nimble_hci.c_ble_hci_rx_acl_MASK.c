
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct os_mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct os_mbuf*,int *) ;
 struct os_mbuf* FUNC_4 () ;
 scalar_t__ FUNC_5 (struct os_mbuf*,int *,int ) ;
 int FUNC_6 (struct os_mbuf*) ;

__attribute__((used)) static void FUNC_7(uint8_t *VAR_2, uint16_t VAR_3)
{
    struct os_mbuf *VAR_4;
    int VAR_5;
    if (VAR_3 < VAR_1 || VAR_3 > FUNC_0(VAR_0)) {
        return;
    }

    VAR_4 = FUNC_4();

    if (!VAR_4) {
        return;
    }
    if (FUNC_5(VAR_4, VAR_2, VAR_3)) {
        FUNC_6(VAR_4);
        return;
    }
    FUNC_1(VAR_5);
    if (&FUNC_3) {
        FUNC_3(VAR_4, ((void*)0));
    }
    FUNC_2(VAR_5);
}
