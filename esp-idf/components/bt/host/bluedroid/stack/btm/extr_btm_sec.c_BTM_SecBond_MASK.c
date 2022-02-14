
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBT_TRANSPORT ;
typedef int tBTM_STATUS ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int BD_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *,int *) ;

tBTM_STATUS FUNC_2 (BD_ADDR VAR_2, UINT8 VAR_3, UINT8 *VAR_4, UINT32 VAR_5[])
{
    tBT_TRANSPORT VAR_6 = VAR_0;

    if (FUNC_0(VAR_2)) {
        VAR_6 = VAR_1;
    }

    return FUNC_1(VAR_2, VAR_6, VAR_3, VAR_4, VAR_5);
}
