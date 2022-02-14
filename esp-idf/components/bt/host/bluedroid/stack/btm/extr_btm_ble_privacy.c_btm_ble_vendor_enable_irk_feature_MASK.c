
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTM_STATUS ;
typedef int UINT8 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int) ;

tBTM_STATUS FUNC_3(BOOLEAN VAR_5)
{
    UINT8 VAR_6[20], *VAR_7;
    tBTM_STATUS VAR_8 = VAR_2;

    VAR_7 = VAR_6;
    FUNC_2(VAR_6, 0, 20);


    FUNC_1(VAR_7, VAR_1);
    FUNC_1(VAR_7, VAR_5 ? 0x01 : 0x00);

    VAR_8 = FUNC_0 (VAR_3, VAR_0,
                                    VAR_6, VAR_4);

    return VAR_8;
}
