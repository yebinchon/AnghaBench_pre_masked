
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tGATT_STATUS ;
struct TYPE_15__ {int attr_max_len; int attr_len; int* attr_val; } ;
typedef TYPE_4__ tGATT_ATTR_VAL ;
struct TYPE_14__ {int member_0; } ;
struct TYPE_12__ {int uuid16; int uuid128; } ;
struct TYPE_16__ {TYPE_3__ member_1; int member_0; TYPE_1__ uu; } ;
typedef TYPE_5__ tBT_UUID ;
typedef int UINT16 ;
struct TYPE_13__ {int handle; scalar_t__ service_change; int uuid; } ;
struct TYPE_17__ {int gatt_if; int handle_of_h_r; TYPE_2__ gattp_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,TYPE_5__*,TYPE_4__*,int *) ;
 int FUNC_1 (int ,TYPE_5__*,int ,int ,int *,int *) ;
 int FUNC_2 (int ,TYPE_5__*,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_6__ VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int *,int,int ) ;

void FUNC_8 (void)
{
    tBT_UUID VAR_13 = {VAR_7, 0};
    tBT_UUID VAR_14 = {VAR_8, VAR_10};
    UINT16 VAR_15 = 0;
    tGATT_STATUS VAR_16;


    FUNC_7 (&VAR_13.uu.uuid128, 0x81, VAR_7);



    VAR_11.gatt_if = FUNC_4(&VAR_13, &VAR_12);
    FUNC_5(VAR_11.gatt_if);

    VAR_15 = FUNC_2 (VAR_11.gatt_if , &VAR_14, 0, VAR_0, VAR_9);
    FUNC_6 ("GATTS_CreateService:  handle of service handle%x", VAR_15);



    VAR_14.uu.uuid16 = VAR_11.gattp_attr.uuid = VAR_6;
    VAR_11.gattp_attr.service_change = 0;
    VAR_11.gattp_attr.handle =
    VAR_11.handle_of_h_r = FUNC_1(VAR_15, &VAR_14, 0, VAR_2,
                    ((void*)0), ((void*)0));

    FUNC_6 ("gatt_profile_db_init:  handle of service changed%d\n",
                      VAR_11.handle_of_h_r);

    tBT_UUID VAR_17 = {VAR_8, VAR_5};
    uint8_t VAR_18[2] ={ 0x00, 0x00};

    tGATT_ATTR_VAL VAR_19 = {
        .attr_max_len = sizeof(UINT16),
        .attr_len = sizeof(UINT16),
        .attr_val = VAR_18,
    };

    FUNC_0 (VAR_15, VAR_3 | VAR_4 , &VAR_17, &VAR_19, ((void*)0));


    VAR_16 = FUNC_3 (VAR_11.gatt_if, VAR_15, VAR_1 );





    FUNC_6 ("gatt_profile_db_init:  gatt_if=%d   start status%d\n",
                      VAR_11.gatt_if, VAR_16);
}
