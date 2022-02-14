
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDWTELEM ;
typedef int DWTCompose ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int,int,int,int) ;
 int FUNC_1 (int *,int *,int *,int,int,int,int,int,int) ;

void FUNC_2(IDWTELEM *VAR_1, IDWTELEM *VAR_2, int VAR_3, int VAR_4,
                     int VAR_5, int VAR_6, int VAR_7)
{
    DWTCompose VAR_8[VAR_0];
    int VAR_9;
    FUNC_0(VAR_8, VAR_1, VAR_3, VAR_4, VAR_5, VAR_6,
                         VAR_7);
    for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9 += 4)
        FUNC_1(VAR_8, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                              VAR_7, VAR_9);
}
