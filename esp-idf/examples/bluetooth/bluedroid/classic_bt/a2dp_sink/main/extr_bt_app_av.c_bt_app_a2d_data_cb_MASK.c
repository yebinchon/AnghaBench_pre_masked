
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int const*,int ) ;

void FUNC_2(const uint8_t *VAR_2, uint32_t VAR_3)
{
    FUNC_1(VAR_2, VAR_3);
    if (++VAR_1 % 100 == 0) {
        FUNC_0(VAR_0, "Audio packet count %u", VAR_1);
    }
}
