
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tBT_TRANSPORT ;
struct TYPE_4__ {int sec_flags; int link_key; void* bond_type; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;


 void* VAR_0 ;
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
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2 (tBTM_SEC_DEV_REC *VAR_18, tBT_TRANSPORT VAR_19)
{
    if (VAR_19 == VAR_15) {
        FUNC_1(VAR_18->link_key, 0, VAR_17);
        VAR_18->sec_flags &= ~(VAR_3 | VAR_2
                                | VAR_4 | VAR_13
                                | VAR_12 | VAR_11
                                | VAR_14 | VAR_1);
    } else if (VAR_19 == VAR_16) {
        VAR_18->bond_type = VAR_0;
        VAR_18->sec_flags &= ~(VAR_6 | VAR_7
                                | VAR_10 | VAR_9
                                | VAR_8 | VAR_14);


        FUNC_0 (VAR_18);

    } else {
        VAR_18->bond_type = VAR_0;
        FUNC_1(VAR_18->link_key, 0, VAR_17);
        VAR_18->sec_flags = 0;



        FUNC_0 (VAR_18);

    }

    if(VAR_18->sec_flags == VAR_5) {
        VAR_18->sec_flags = 0;
    }
}
