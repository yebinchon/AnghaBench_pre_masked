
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int link_key ;
typedef int btc_config_section_iter_t ;
typedef int bt_status_t ;
struct TYPE_6__ {int address; } ;
typedef TYPE_1__ bt_bdaddr_t ;
typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_7__ {int member_2; int member_1; int member_0; } ;
typedef int LINK_KEY ;
typedef TYPE_2__ DEV_CLASS ;
typedef int BOOLEAN ;


 int FUNC_0 (int ,TYPE_2__,int ,int ,int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (char const*,int ,int ,size_t*) ;
 scalar_t__ FUNC_4 (char const*,int ,int*) ;
 int FUNC_5 () ;
 int * FUNC_6 () ;
 int const* FUNC_7 () ;
 char* FUNC_8 (int const*) ;
 int * FUNC_9 (int const*) ;
 int FUNC_10 () ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char const*,TYPE_1__*) ;
 int FUNC_13 (int ,TYPE_2__) ;

__attribute__((used)) static bt_status_t FUNC_14(int VAR_7)
{
    BOOLEAN VAR_8 = VAR_5;

    FUNC_5();
    for (const btc_config_section_iter_t *VAR_9 = FUNC_6(); VAR_9 != FUNC_7(); VAR_9 = FUNC_9(VAR_9)) {
        const char *VAR_10 = FUNC_8(VAR_9);
        if (!FUNC_11(VAR_10)) {
            continue;
        }

        FUNC_1("Remote device:%s\n", VAR_10);
        LINK_KEY VAR_11;
        size_t VAR_12 = sizeof(VAR_11);
        if (FUNC_3(VAR_10, VAR_1, VAR_11, &VAR_12)) {
            int VAR_13;
            if (FUNC_4(VAR_10, VAR_2, &VAR_13)) {
                bt_bdaddr_t VAR_14;
                FUNC_12(VAR_10, &VAR_14);
                if (VAR_7) {
                    DEV_CLASS VAR_15 = {0, 0, 0};
                    int VAR_16;
                    int VAR_17 = 0;
                    if (FUNC_4(VAR_10, VAR_0, &VAR_16)) {
                        FUNC_13((UINT32)VAR_16, VAR_15);
                    }
                    FUNC_4(VAR_10, VAR_3, &VAR_17);

                    FUNC_0(VAR_14.address, VAR_15, VAR_11, 0, 0,
                                    (UINT8)VAR_13, 0, VAR_17);

                }
                VAR_8 = VAR_6;
            } else {
                FUNC_2("bounded device:%s, LinkKeyType or PinLength is invalid\n", VAR_10);
            }
        }
        if (!VAR_8) {
            FUNC_1("Remote device:%s, no link key\n", VAR_10);
        }
    }
    FUNC_10();

    return VAR_4;
}
