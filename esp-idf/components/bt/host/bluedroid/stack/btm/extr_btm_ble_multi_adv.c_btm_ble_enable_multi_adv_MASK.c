
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
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int ,int,int*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int,int,int) ;
 int VAR_4 ;
 int FUNC_4 (int*,int ,int) ;

tBTM_STATUS FUNC_5 (BOOLEAN VAR_5, UINT8 VAR_6, UINT8 VAR_7)
{
    UINT8 VAR_8[VAR_1], *VAR_9;
    UINT8 VAR_10 = VAR_5 ? 1 : 0;
    tBTM_STATUS VAR_11;

    VAR_9 = VAR_8;
    FUNC_4(VAR_8, 0, VAR_1);

    FUNC_2 (VAR_9, VAR_0);
    FUNC_2 (VAR_9, VAR_10);
    FUNC_2 (VAR_9, VAR_6);

    FUNC_0 (" btm_ble_enable_multi_adv: enb %d, Inst ID %d", VAR_10, VAR_6);

    if ((VAR_11 = FUNC_1 (VAR_3,
                                         VAR_1,
                                         VAR_8,
                                         VAR_4))
            == VAR_2) {
        FUNC_3(VAR_0, VAR_6, VAR_7);
    }
    return VAR_11;
}
