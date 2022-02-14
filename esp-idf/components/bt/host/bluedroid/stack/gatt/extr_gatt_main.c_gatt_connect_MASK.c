
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int att_lcid; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef scalar_t__ tBT_TRANSPORT ;
typedef int tBLE_ADDR_TYPE ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

BOOLEAN FUNC_4 (BD_ADDR VAR_7, tBLE_ADDR_TYPE VAR_8, tGATT_TCB *VAR_9, tBT_TRANSPORT VAR_10)
{
    BOOLEAN VAR_11 = VAR_2;

    if (FUNC_2(VAR_9) != VAR_4) {
        FUNC_3(VAR_9, VAR_3);
    }

    if (VAR_10 == VAR_1) {
        VAR_9->att_lcid = VAR_5;
        VAR_11 = FUNC_0 (VAR_5, VAR_7, VAR_8);

    } else {
        if ((VAR_9->att_lcid = FUNC_1(VAR_0, VAR_7)) != 0) {
            VAR_11 = VAR_6;
        }


    }

    return VAR_11;
}
