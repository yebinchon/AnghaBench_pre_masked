
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef enum Mode { ____Placeholder_Mode } Mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(int *VAR_3, int *VAR_4, int VAR_5,
                                 uint8_t *VAR_6, int VAR_7, enum Mode VAR_8)
{
    if (VAR_7 == 0 || (VAR_7 == 2 && VAR_8 != VAR_2)) {
        if (VAR_5 < 116) {
            *VAR_3 = (VAR_5 + 69) >> 1;
            *VAR_4 = (VAR_5 - (*VAR_3 << 1) + 68) * 2;
        } else {
            *VAR_3 = VAR_5 - 24;
            *VAR_4 = 0;
        }

        *VAR_6 = FUNC_0(*VAR_3 - 8 - (*VAR_4 < 0),
                                VAR_1, VAR_0 - 15);
    } else {
        *VAR_3 = (VAR_5 + 1) >> 1;
        *VAR_4 = (VAR_5 - (*VAR_3 << 1)) * 2;
        *VAR_3 += *VAR_6;
    }
}
