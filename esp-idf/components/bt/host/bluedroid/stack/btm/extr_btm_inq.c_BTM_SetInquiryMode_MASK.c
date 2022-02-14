
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_3__ {int (* supports_extended_inquiry_response ) () ;int (* supports_rssi_with_inquiry_results ) () ;} ;
typedef TYPE_1__ controller_t ;
typedef scalar_t__ UINT8 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

tBTM_STATUS FUNC_6 (UINT8 VAR_8)
{
    const controller_t *VAR_9 = FUNC_3();
    FUNC_1 ("BTM_SetInquiryMode\n");
    if (VAR_8 == VAR_2) {

    } else if (VAR_8 == VAR_3) {
        if (!VAR_9->supports_rssi_with_inquiry_results()) {
            return (VAR_4);
        }
    } else if (VAR_8 == VAR_1) {
        if (!VAR_9->supports_extended_inquiry_response()) {
            return (VAR_4);
        }
    } else {
        return (VAR_0);
    }

    if (!FUNC_0()) {
        return (VAR_7);
    }

    if (!FUNC_2 (VAR_8)) {
        return (VAR_5);
    }

    return (VAR_6);
}
