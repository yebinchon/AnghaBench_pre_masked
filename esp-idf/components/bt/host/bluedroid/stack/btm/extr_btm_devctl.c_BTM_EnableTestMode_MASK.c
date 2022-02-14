
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int cond ;
typedef int bt_event_mask_t ;
typedef int UINT8 ;
struct TYPE_4__ {int (* transmit_command ) (int ,int *,int *,int *) ;} ;
struct TYPE_3__ {int (* make_set_event_mask ) (int const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ,int ,int *,int) ;
 TYPE_2__* FUNC_5 () ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (int ,int *,int *,int *) ;
 int FUNC_8 (int const*) ;

tBTM_STATUS FUNC_9(void)
{
    UINT8 VAR_11;

    FUNC_2 ("BTM: BTM_EnableTestMode");



    VAR_11 = VAR_8;
    if (!FUNC_4(VAR_10,
                                     VAR_9,
                                     &VAR_11, sizeof(VAR_11))) {
        return (VAR_6);
    }


    if (!(FUNC_0(VAR_0, VAR_2,
                               VAR_1) == VAR_7)) {
        return VAR_6;
    }


    if (!(FUNC_1(VAR_5, VAR_4,
                                VAR_3) == VAR_7)) {
        return VAR_6;
    }


    FUNC_5()->transmit_command(
        FUNC_6()->make_set_event_mask((const bt_event_mask_t *)("\x00\x00\x00\x00\x00\x00\x00\x00")),
        ((void*)0),
        ((void*)0),
        ((void*)0));


    if (FUNC_3 ()) {
        return (VAR_7);
    } else {
        return (VAR_6);
    }
}
