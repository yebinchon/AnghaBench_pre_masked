
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTM_STATUS ;
typedef int UINT8 ;
typedef scalar_t__ UINT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

tBTM_STATUS FUNC_4(UINT8 *VAR_6, UINT32 VAR_7)
{
    tBTM_STATUS VAR_8;

    FUNC_1(&VAR_3, VAR_1);
    if (FUNC_0((UINT8)VAR_7, VAR_6)) {
        FUNC_3(&VAR_4, VAR_2);
        VAR_8 = VAR_5;
    } else {
        VAR_8 = VAR_0;
    }
    FUNC_2(&VAR_3);

    return VAR_8;
}
