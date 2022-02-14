
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int PSDevice ;
typedef int DWORD ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int ,int ,int,int ,int,scalar_t__*) ;
 int VAR_0 ;

void FUNC_1 (PSDevice VAR_1, WORD VAR_2, DWORD VAR_3)
{
BYTE VAR_4[4];

    if (VAR_2 > 273)
        return;
    VAR_4[0] = (BYTE)VAR_3;
    VAR_4[1] = (BYTE)(VAR_3>>8);
    VAR_4[2] = (BYTE)(VAR_3>>16);
    VAR_4[3] = (BYTE)(VAR_3>>24);

    FUNC_0(VAR_1,
                        VAR_0,
                        VAR_2,
                        0,
                        4,
                        VAR_4
                        );
}
