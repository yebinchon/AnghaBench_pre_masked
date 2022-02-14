
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct AVAES {int dummy; } ;


 int FUNC_0 (struct AVAES*,int*,int*,int) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct AVAES *VAR_0, const uint8_t *VAR_1, int VAR_2,
                       uint8_t *VAR_3, int VAR_4)
{
    uint8_t VAR_5[16] = { 0 };
    FUNC_1(VAR_5, VAR_1, 14);

    VAR_5[14 - 7] ^= VAR_2;
    FUNC_2(VAR_3, 0, VAR_4);
    FUNC_0(VAR_0, VAR_5, VAR_3, VAR_4);
}
