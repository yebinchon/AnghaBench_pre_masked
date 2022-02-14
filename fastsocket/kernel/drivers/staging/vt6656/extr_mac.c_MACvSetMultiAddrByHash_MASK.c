
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int UINT ;
typedef int PSDevice ;
typedef int BYTE ;


 int FUNC_0 (int ,int ,int ,int ,int,int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_1 (PSDevice VAR_3, BYTE VAR_4)
{
    UINT VAR_5;
    BYTE VAR_6;
    BYTE VAR_7[2];



    VAR_5 = VAR_4 / 8;


    VAR_6 = 1;
    VAR_6 <<= (VAR_4 % 8);


    VAR_7[0] = VAR_6;
    VAR_7[1] = VAR_6;

    FUNC_0(VAR_3,
                        VAR_2,
                        (WORD) (VAR_0 + VAR_5),
                        VAR_1,
                        2,
                        VAR_7);
}
