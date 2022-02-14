
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PSDevice ;
typedef int * PBYTE ;
typedef int BYTE ;


 int FUNC_0 (int ,int ,int ,int ,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1(PSDevice VAR_3, PBYTE VAR_4)
{
BYTE VAR_5[6];


    VAR_5[0] = *((PBYTE)VAR_4);
    VAR_5[1] = *((PBYTE)VAR_4+1);
    VAR_5[2] = *((PBYTE)VAR_4+2);
    VAR_5[3] = *((PBYTE)VAR_4+3);
    VAR_5[4] = *((PBYTE)VAR_4+4);
    VAR_5[5] = *((PBYTE)VAR_4+5);

    FUNC_0(VAR_3,
                        VAR_2,
                        VAR_0,
                        VAR_1,
                        6,
                        VAR_5
                        );
}
