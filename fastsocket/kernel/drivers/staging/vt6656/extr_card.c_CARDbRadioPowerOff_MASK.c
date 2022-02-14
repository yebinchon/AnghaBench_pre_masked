
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int byRFType; void* bRadioOff; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef void* BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int) ;






 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;

BOOL FUNC_2 (PVOID VAR_6)
{
PSDevice VAR_7 = (PSDevice) VAR_6;
BOOL VAR_8 = VAR_5;




    VAR_7->bRadioOff = VAR_5;

    switch (VAR_7->byRFType) {
        case 132:
        case 131:
        case 133:
        case 130:
        case 129:
        case 128:
            FUNC_1(VAR_7, VAR_2, (VAR_3 | VAR_4));
            break;
    }

    FUNC_1(VAR_7, VAR_1, VAR_0);

    FUNC_0(VAR_7);

    return VAR_8;
}
