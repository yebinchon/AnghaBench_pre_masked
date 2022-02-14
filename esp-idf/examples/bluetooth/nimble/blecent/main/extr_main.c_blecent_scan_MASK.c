
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ble_gap_disc_params {int filter_duplicates; int passive; scalar_t__ limited; scalar_t__ filter_policy; scalar_t__ window; scalar_t__ itvl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,struct ble_gap_disc_params*,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void)
{
    uint8_t VAR_3;
    struct ble_gap_disc_params VAR_4;
    int VAR_5;


    VAR_5 = FUNC_2(0, &VAR_3);
    if (VAR_5 != 0) {
        FUNC_0(VAR_1, "error determining address type; rc=%d\n", VAR_5);
        return;
    }




    VAR_4.filter_duplicates = 1;





    VAR_4.passive = 1;


    VAR_4.itvl = 0;
    VAR_4.window = 0;
    VAR_4.filter_policy = 0;
    VAR_4.limited = 0;

    VAR_5 = FUNC_1(VAR_3, VAR_0, &VAR_4,
                      VAR_2, ((void*)0));
    if (VAR_5 != 0) {
        FUNC_0(VAR_1, "Error initiating GAP discovery procedure; rc=%d\n",
                    VAR_5);
    }
}
