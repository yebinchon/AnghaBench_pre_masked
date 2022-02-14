
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bRadioControlOff; scalar_t__ bHWRadioOff; scalar_t__ bRadioOff; int byRFType; int PortOffset; int byLocalID; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (char*) ;

BOOL FUNC_6 (PVOID VAR_11)
{
    PSDevice VAR_12 = (PSDevice) VAR_11;
    BOOL VAR_13 = VAR_10;
FUNC_5("chester power on\n");
    if (VAR_12->bRadioControlOff == VAR_10){
if (VAR_12->bHWRadioOff == VAR_10) FUNC_5("chester bHWRadioOff\n");
if (VAR_12->bRadioControlOff == VAR_10) FUNC_5("chester bRadioControlOff\n");
        return VAR_0;}

    if (VAR_12->bRadioOff == VAR_0)
       {
FUNC_5("chester pbRadioOff\n");
return VAR_10;}

    FUNC_0(VAR_12->PortOffset, VAR_12->byLocalID);

    FUNC_2(VAR_12->PortOffset, VAR_4, VAR_1);

    switch (VAR_12->byRFType) {

        case 128:
            FUNC_4(VAR_12->PortOffset, VAR_5, VAR_9);
            FUNC_3(VAR_12->PortOffset, VAR_5, VAR_6);
            break;

        case 131:
        case 129:
        case 130:
            FUNC_4(VAR_12->PortOffset, VAR_5, (VAR_7 |
                                                                        VAR_8));
            break;

    }

    VAR_12->bRadioOff = VAR_0;

FUNC_5("chester power on\n");
FUNC_1(VAR_12->PortOffset, VAR_3, VAR_2);
    return VAR_13;
}
