
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;


 unsigned char FUNC_0 (unsigned char) ;

__attribute__((used)) static inline void FUNC_1(unsigned char *VAR_0, ptrdiff_t VAR_1,
                        unsigned char *VAR_2, ptrdiff_t VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;
    for (VAR_5=0; VAR_5<8; VAR_5++)
        for (VAR_6=0; VAR_6<8; VAR_6++)
            VAR_0[VAR_5*VAR_1 + VAR_6] = FUNC_0(VAR_2[VAR_5*VAR_3 + VAR_6] + VAR_4);
}
