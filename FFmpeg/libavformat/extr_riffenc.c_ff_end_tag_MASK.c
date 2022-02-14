
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int64_t ;
typedef int AVIOContext ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(AVIOContext *VAR_1, int64_t VAR_2)
{
    int64_t VAR_3;

    FUNC_1((VAR_2&1) == 0);

    VAR_3 = FUNC_3(VAR_1);
    if (VAR_3 & 1)
        FUNC_4(VAR_1, 0);
    FUNC_2(VAR_1, VAR_2 - 4, VAR_0);
    FUNC_5(VAR_1, (uint32_t)(VAR_3 - VAR_2));
    FUNC_2(VAR_1, FUNC_0(VAR_3, 2), VAR_0);
}
