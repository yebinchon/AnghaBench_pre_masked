
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int PSDevice ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int ,int ,scalar_t__,int ,int,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(PSDevice VAR_2, BYTE VAR_3, WORD VAR_4)
{
BYTE VAR_5[2];


    VAR_5[0] = (BYTE)(VAR_4 & 0xff);
    VAR_5[1] = (BYTE)(VAR_4 >> 8);

    FUNC_0(VAR_2,
                        VAR_1,
                        VAR_3,
                        VAR_0,
                        2,
                        VAR_5
                        );

}
