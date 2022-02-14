
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,int const) ;

void
FUNC_1(const uint8_t *VAR_1, int VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        FUNC_0(VAR_0, "%s0x%02x", VAR_3 != 0 ? ":" : "", VAR_1[VAR_3]);
    }
}
