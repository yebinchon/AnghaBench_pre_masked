
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bRadioOff; int byRFType; int PortOffset; int byLocalID; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (char*) ;

BOOL FUNC_6 (PVOID VAR_10)
{
    PSDevice VAR_11 = (PSDevice) VAR_10;
    BOOL VAR_12 = VAR_9;

    if (VAR_11->bRadioOff == VAR_9)
        return VAR_9;


    switch (VAR_11->byRFType) {

        case 128:
            FUNC_3(VAR_11->PortOffset, VAR_4, VAR_8);
            FUNC_4(VAR_11->PortOffset, VAR_4, VAR_5);
            break;

        case 131:
        case 129:
        case 130:
            FUNC_3(VAR_11->PortOffset, VAR_4, VAR_6);
            FUNC_3(VAR_11->PortOffset, VAR_4, VAR_7);
            break;

    }

    FUNC_1(VAR_11->PortOffset, VAR_3, VAR_0);

    FUNC_0(VAR_11->PortOffset, VAR_11->byLocalID);

    VAR_11->bRadioOff = VAR_9;

FUNC_5("chester power off\n");
FUNC_2(VAR_11->PortOffset, VAR_2, VAR_1);
    return VAR_12;
}
