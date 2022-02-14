
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int device_type; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ) ;

BOOLEAN FUNC_1 (BD_ADDR VAR_3)
{
    BOOLEAN VAR_4 = VAR_1;


    tBTM_SEC_DEV_REC *VAR_5 = FUNC_0 (VAR_3);
    if (VAR_5 && (VAR_5->device_type & VAR_0) == VAR_0) {
        VAR_4 = VAR_2;
    }

    return VAR_4;
}
