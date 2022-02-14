
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int ,char*,int ,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int* VAR_3 ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(void)
{
    uint32_t VAR_4;
    for (int VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {

        FUNC_1(VAR_2[VAR_5], &VAR_4);

        FUNC_2(VAR_2[VAR_5], VAR_4 * VAR_3[VAR_5]);
        FUNC_0(VAR_0, "test init: touch pad [%d] base %d, thresh %d", VAR_2[VAR_5], VAR_4, (uint32_t)(VAR_4 * VAR_3[VAR_5]));

    }
}
