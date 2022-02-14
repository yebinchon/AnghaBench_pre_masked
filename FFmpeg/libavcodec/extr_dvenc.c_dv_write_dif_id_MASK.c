
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum dv_section_type { ____Placeholder_dv_section_type } dv_section_type ;



__attribute__((used)) static inline int FUNC_0(enum dv_section_type VAR_0, uint8_t VAR_1,
                                  uint8_t VAR_2, uint8_t VAR_3,
                                  uint8_t *VAR_4)
{
    int VAR_5 = VAR_1 & 1;
    int VAR_6 = 1 - (VAR_1 >> 1);

    VAR_4[0] = (uint8_t) VAR_0;
    VAR_4[1] = (VAR_2 << 4) |
             (VAR_5 << 3) |
             (VAR_6 << 2) |
             3;
    VAR_4[2] = VAR_3;
    return 3;
}
