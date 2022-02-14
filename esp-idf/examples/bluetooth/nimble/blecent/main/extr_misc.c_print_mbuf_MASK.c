
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_mbuf {int om_len; int * om_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 struct os_mbuf* FUNC_1 (struct os_mbuf const*,int ) ;
 int VAR_1 ;

void
FUNC_2(const struct os_mbuf *VAR_2)
{
    int VAR_3, VAR_4;

    VAR_3 = 0;
    while (VAR_2 != ((void*)0)) {
        if (VAR_3) {
            FUNC_0(VAR_0, ":");
        } else {
            VAR_3 = 1;
        }
        for (VAR_4 = 0; VAR_4 < VAR_2->om_len; VAR_4++) {
            FUNC_0(VAR_0, "%s0x%02x", VAR_4 != 0 ? ":" : "", VAR_2->om_data[VAR_4]);
        }
        VAR_2 = FUNC_1(VAR_2, VAR_1);
    }
}
