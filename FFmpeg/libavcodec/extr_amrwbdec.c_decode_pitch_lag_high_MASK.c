
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(int *VAR_2, int *VAR_3, int VAR_4,
                                  uint8_t *VAR_5, int VAR_6)
{
    if (VAR_6 == 0 || VAR_6 == 2) {
        if (VAR_4 < 376) {
            *VAR_2 = (VAR_4 + 137) >> 2;
            *VAR_3 = VAR_4 - (*VAR_2 << 2) + 136;
        } else if (VAR_4 < 440) {
            *VAR_2 = (VAR_4 + 257 - 376) >> 1;
            *VAR_3 = (VAR_4 - (*VAR_2 << 1) + 256 - 376) * 2;

        } else {
            *VAR_2 = VAR_4 - 280;
            *VAR_3 = 0;
        }

        *VAR_5 = FUNC_0(*VAR_2 - 8 - (*VAR_3 < 0),
                                VAR_1, VAR_0 - 15);



    } else {
        *VAR_2 = (VAR_4 + 1) >> 2;
        *VAR_3 = VAR_4 - (*VAR_2 << 2);
        *VAR_2 += *VAR_5;
    }
}
