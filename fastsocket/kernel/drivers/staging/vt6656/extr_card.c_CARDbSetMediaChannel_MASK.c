
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int WORD ;
typedef int UINT ;
struct TYPE_7__ {scalar_t__ byBBType; int byCurPwr; int * abyCCKPwrTbl; int * abyOFDMPwrTbl; int * abyOFDMAPwrTbl; } ;
typedef int PVOID ;
typedef TYPE_1__* PSDevice ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int VAR_11 ;

BOOL FUNC_5 (PVOID VAR_12, UINT VAR_13)
{
PSDevice VAR_14 = (PSDevice) VAR_12;
BOOL VAR_15 = VAR_11;


    if (VAR_14->byBBType == VAR_0) {
        if ((VAR_13 < (VAR_3+1)) || (VAR_13 > VAR_2))
            VAR_13 = (VAR_3+1);
    } else {
        if ((VAR_13 > VAR_3) || (VAR_13 == 0))
            VAR_13 = 1;
    }


    FUNC_3(VAR_14, VAR_6, VAR_4);


    FUNC_2(VAR_14, VAR_5, 0x80);




    FUNC_0(VAR_14,
                        VAR_8,
                        (WORD) VAR_13,
                        0,
                        0,
                        ((void*)0)
                        );




    if (VAR_14->byBBType == VAR_0) {
        VAR_14->byCurPwr = 0xFF;
        FUNC_4(VAR_14, VAR_14->abyOFDMAPwrTbl[VAR_13-15], VAR_10);
    } else if (VAR_14->byBBType == VAR_1) {
        VAR_14->byCurPwr = 0xFF;
        FUNC_4(VAR_14, VAR_14->abyOFDMPwrTbl[VAR_13-1], VAR_10);
    } else {
        VAR_14->byCurPwr = 0xFF;
        FUNC_4(VAR_14, VAR_14->abyCCKPwrTbl[VAR_13-1], VAR_9);
    }
    FUNC_1(VAR_14,VAR_7,VAR_5,(BYTE)(VAR_13|0x80));
    return(VAR_15);
}
