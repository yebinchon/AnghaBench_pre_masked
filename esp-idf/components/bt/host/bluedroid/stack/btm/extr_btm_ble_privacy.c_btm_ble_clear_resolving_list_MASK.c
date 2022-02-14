
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int UINT8 ;
struct TYPE_2__ {scalar_t__ (* supports_ble_privacy ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

tBTM_STATUS FUNC_5(void)
{
    tBTM_STATUS VAR_6 = VAR_2;

    if (FUNC_3()->supports_ble_privacy()) {
        if (FUNC_2()) {
            VAR_6 = VAR_3;
        }
    } else {
        UINT8 VAR_7[20] = {0};
        UINT8 *VAR_8 = VAR_7;

        FUNC_1(VAR_8, VAR_1);
        VAR_6 = FUNC_0 (VAR_4,
                                        VAR_0,
                                        VAR_7,
                                        VAR_5);
    }

    return VAR_6;
}
