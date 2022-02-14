
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ UINT32 ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

UINT32 FUNC_2(DWORD *VAR_1, uint32_t VAR_2)
{
    int VAR_3;

    VAR_3 = FUNC_1(VAR_1, VAR_2);
    if (VAR_3 == 0) {
        return 0;
    }

    return (((VAR_3 - 1) << VAR_0) +
            FUNC_0(VAR_1[VAR_3 - 1]) );
}
