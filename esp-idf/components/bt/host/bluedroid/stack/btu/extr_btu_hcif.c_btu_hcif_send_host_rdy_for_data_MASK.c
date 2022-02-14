
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef int UINT16 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

void FUNC_2(void)
{
    UINT16 VAR_1[VAR_0 + 4];
    UINT16 VAR_2[VAR_0 + 4];
    UINT8 VAR_3;


    VAR_3 = FUNC_1 (VAR_1, VAR_2);




    if (VAR_3) {
        FUNC_0 (VAR_3, VAR_2, VAR_1);
    }
}
