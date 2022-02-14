
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tGATT_SEC_ACTION ;
typedef int tBTM_BLE_SEC_ACT ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;

__attribute__((used)) static BOOLEAN FUNC_0(tGATT_SEC_ACTION VAR_5, tBTM_BLE_SEC_ACT *VAR_6 )
{
    BOOLEAN VAR_7 = VAR_4;
    switch (VAR_5) {
    case 130:
        *VAR_6 = VAR_0;
        break;
    case 128:
        *VAR_6 = VAR_2;
        break;
    case 129:
        *VAR_6 = VAR_1;
        break;
    default:
        VAR_7 = VAR_3;
        break;
    }

    return VAR_7;
}
