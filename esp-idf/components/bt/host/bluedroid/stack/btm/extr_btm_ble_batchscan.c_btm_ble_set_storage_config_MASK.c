
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTM_STATUS ;
typedef int UINT8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int,int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int) ;

tBTM_STATUS FUNC_4(UINT8 VAR_7, UINT8 VAR_8,
                                       UINT8 VAR_9)
{
    tBTM_STATUS VAR_10 = VAR_4;
    UINT8 VAR_11[VAR_1], *VAR_12;

    VAR_12 = VAR_11;
    FUNC_3(VAR_11, 0, VAR_1);

    FUNC_2 (VAR_12, VAR_0);
    FUNC_2 (VAR_12, VAR_7);
    FUNC_2 (VAR_12, VAR_8);
    FUNC_2 (VAR_12, VAR_9);

    if ((VAR_10 = FUNC_1 (VAR_5,
                  VAR_1, VAR_11,
                  VAR_6)) != VAR_2) {
        FUNC_0("btm_ble_set_storage_config %d", VAR_10);
        return VAR_3;
    }

    return VAR_10;
}
