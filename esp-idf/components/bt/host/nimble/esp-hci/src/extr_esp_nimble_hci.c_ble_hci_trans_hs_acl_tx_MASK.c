
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct os_mbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct os_mbuf*) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (struct os_mbuf*,int ,scalar_t__,int *) ;
 int FUNC_6 (struct os_mbuf*) ;

int FUNC_7(struct os_mbuf *VAR_4)
{
    uint16_t VAR_5 = 0;
    uint8_t VAR_6[FUNC_1(VAR_0) + 1];

    if (FUNC_2(VAR_4) == 0) {
        FUNC_6(VAR_4);
        return 0;
    }
    VAR_6[0] = VAR_1;
    VAR_5++;

    if (!FUNC_3()) {
        FUNC_0(VAR_3, "Controller not ready to receive packets from host at this time, try again after sometime");
        return VAR_2;
    }

    FUNC_5(VAR_4, 0, FUNC_2(VAR_4), &VAR_6[1]);
    VAR_5 += FUNC_2(VAR_4);

    FUNC_4(VAR_6, VAR_5);

    FUNC_6(VAR_4);

    return 0;
}
