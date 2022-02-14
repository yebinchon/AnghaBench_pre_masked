
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBT_TRANSPORT ;
typedef int UINT8 ;
typedef int BD_ADDR ;


 int FUNC_0 (int ,int*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

void FUNC_2(BD_ADDR VAR_3, tBT_TRANSPORT VAR_4, UINT8 *VAR_5, UINT8 *VAR_6)
{
    UINT8 VAR_7 = 0;

    FUNC_0(VAR_3, &VAR_7, VAR_4);

    VAR_7 &= (VAR_2 | VAR_1 | VAR_0);

    *VAR_6 = FUNC_1(VAR_3);

    *VAR_5 = VAR_7;
}
