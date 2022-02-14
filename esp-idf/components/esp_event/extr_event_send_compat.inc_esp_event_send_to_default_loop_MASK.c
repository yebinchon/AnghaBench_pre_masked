
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int event_id; } ;
typedef TYPE_1__ system_event_t ;
typedef int esp_err_t ;
typedef int TickType_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;

esp_err_t FUNC_3(system_event_t *VAR_41)
{




    const TickType_t VAR_42 = 0;
    switch (VAR_41->event_id) {

        FUNC_0(VAR_28, VAR_29);
        FUNC_1(VAR_28, VAR_15, VAR_36);
        FUNC_0(VAR_28, VAR_21);
        FUNC_0(VAR_28, VAR_22);


        FUNC_1(VAR_28, VAR_17, VAR_32);
        FUNC_1(VAR_28, VAR_18, VAR_33);
        FUNC_1(VAR_28, VAR_16, VAR_31);


        FUNC_0(VAR_28, VAR_26);
        FUNC_0(VAR_28, VAR_27);
        FUNC_1(VAR_28, VAR_23, VAR_39);
        FUNC_1(VAR_28, VAR_25, VAR_40);
        FUNC_0(VAR_28, VAR_24);


        FUNC_0(VAR_28, VAR_4);
        FUNC_0(VAR_28, VAR_5);
        FUNC_1(VAR_28, VAR_1, VAR_37);
        FUNC_1(VAR_28, VAR_2, VAR_38);
        FUNC_1(VAR_28, VAR_0, VAR_30);
        FUNC_1(VAR_14, VAR_19, VAR_34);
        FUNC_1(VAR_14, VAR_10, VAR_34);
        FUNC_0(VAR_14, VAR_20);
        FUNC_1(VAR_14, VAR_13, VAR_35);
        FUNC_0(VAR_14, VAR_3);
        default:
            return VAR_6;
    }
}
