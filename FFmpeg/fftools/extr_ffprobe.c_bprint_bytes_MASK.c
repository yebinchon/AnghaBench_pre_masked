
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVBPrint ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(AVBPrint *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
    int VAR_3;
    FUNC_0(VAR_0, "0X");
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
        FUNC_0(VAR_0, "%02X", VAR_1[VAR_3]);
}
