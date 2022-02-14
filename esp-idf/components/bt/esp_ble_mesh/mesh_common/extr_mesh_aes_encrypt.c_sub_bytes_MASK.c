
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t* VAR_2 ;

__attribute__((used)) static inline void FUNC_0(uint8_t *VAR_3)
{
    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < (VAR_0 * VAR_1); ++VAR_4) {
        VAR_3[VAR_4] = VAR_2[VAR_3[VAR_4]];
    }
}
