
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bHWRadioOff; scalar_t__ bRadioControlOff; int byRFType; scalar_t__ bRadioOff; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;






 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

BOOL FUNC_2 (PVOID VAR_7)
{
PSDevice VAR_8 = (PSDevice) VAR_7;
BOOL VAR_9 = VAR_6;


    if ((VAR_8->bHWRadioOff == VAR_6) || (VAR_8->bRadioControlOff == VAR_6)) {
        return VAR_0;
    }




    VAR_8->bRadioOff = VAR_0;

    FUNC_0(VAR_8);

    FUNC_1(VAR_8, VAR_2, VAR_1);

    switch (VAR_8->byRFType) {
        case 132:
        case 131:
        case 133:
        case 130:
        case 129:
        case 128:
            FUNC_1(VAR_8, VAR_3, (VAR_4 | VAR_5));
            break;
    }

    return VAR_9;
}
