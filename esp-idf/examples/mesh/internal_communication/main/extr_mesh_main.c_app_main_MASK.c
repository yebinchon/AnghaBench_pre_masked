
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int wifi_init_config_t ;
typedef int uint8_t ;
struct TYPE_7__ {int password; int max_connection; } ;
struct TYPE_6__ {int ssid_len; int password; int ssid; } ;
struct TYPE_8__ {TYPE_2__ mesh_ap; TYPE_1__ router; int channel; int mesh_id; } ;
typedef TYPE_3__ mesh_cfg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__ FUNC_2 () ;
 int VAR_12 ;
 int FUNC_3 () ;
 int VAR_13 ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ) ;
 int FUNC_19 () ;
 int VAR_14 ;
 int FUNC_20 (int *,int ,int) ;
 int VAR_15 ;
 int FUNC_21 () ;
 int VAR_16 ;
 int FUNC_22 () ;
 int FUNC_23 (int ) ;

void FUNC_24(void)
{
    FUNC_0(FUNC_21());
    FUNC_0(FUNC_22());

    FUNC_16();

    FUNC_0(FUNC_5());

    FUNC_0(FUNC_15(&VAR_16, ((void*)0)));

    wifi_init_config_t VAR_17 = FUNC_3();
    FUNC_0(FUNC_17(&VAR_17));
    FUNC_0(FUNC_4(VAR_8, VAR_9, &VAR_14, ((void*)0)));
    FUNC_0(FUNC_18(VAR_13));
    FUNC_0(FUNC_19());

    FUNC_0(FUNC_7());
    FUNC_0(FUNC_4(VAR_10, VAR_7, &VAR_15, ((void*)0)));
    FUNC_0(FUNC_12(VAR_4));
    FUNC_0(FUNC_13(1));
    FUNC_0(FUNC_9(10));
    mesh_cfg_t VAR_18 = FUNC_2();

    FUNC_20((uint8_t *) &VAR_18.mesh_id, VAR_11, 6);

    VAR_18.channel = VAR_3;
    VAR_18.router.ssid_len = FUNC_23(VAR_6);
    FUNC_20((uint8_t *) &VAR_18.router.ssid, VAR_6, VAR_18.router.ssid_len);
    FUNC_20((uint8_t *) &VAR_18.router.password, VAR_5,
           FUNC_23(VAR_5));

    FUNC_0(FUNC_10(VAR_0));
    VAR_18.mesh_ap.max_connection = VAR_1;
    FUNC_20((uint8_t *) &VAR_18.mesh_ap.password, VAR_2,
           FUNC_23(VAR_2));
    FUNC_0(FUNC_11(&VAR_18));

    FUNC_0(FUNC_14());
    FUNC_1(VAR_12, "mesh starts successfully, heap:%d, %s\n", FUNC_6(),
             FUNC_8() ? "root fixed" : "root not fixed");
}
