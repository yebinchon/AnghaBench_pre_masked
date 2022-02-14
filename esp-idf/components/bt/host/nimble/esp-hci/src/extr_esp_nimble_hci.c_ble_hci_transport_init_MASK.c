
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mpe_mp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int *,int *,int ,int) ;
 int FUNC_4 (TYPE_1__*,int,int ,int ,char*) ;
 int FUNC_5 (int *,int,int,int ,char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    int VAR_15;


    FUNC_1();

    VAR_15 = FUNC_4(&VAR_8,
                             FUNC_0(VAR_1),
                             VAR_0,
                             VAR_6,
                             "ble_hci_acl_pool");
    FUNC_2(VAR_15 == 0);

    VAR_15 = FUNC_3(&VAR_7,
                           &VAR_8.mpe_mp,
                           VAR_0,
                           FUNC_0(VAR_1));
    FUNC_2(VAR_15 == 0);







    VAR_15 = FUNC_5(&VAR_10,
                         1,
                         VAR_5,
                         VAR_9,
                         "ble_hci_cmd_pool");
    FUNC_2(VAR_15 == 0);

    VAR_15 = FUNC_5(&VAR_12,
                         FUNC_0(VAR_3),
                         FUNC_0(VAR_2),
                         VAR_11,
                         "ble_hci_evt_hi_pool");
    FUNC_2(VAR_15 == 0);

    VAR_15 = FUNC_5(&VAR_14,
                         FUNC_0(VAR_4),
                         FUNC_0(VAR_2),
                         VAR_13,
                         "ble_hci_evt_lo_pool");
    FUNC_2(VAR_15 == 0);
}
