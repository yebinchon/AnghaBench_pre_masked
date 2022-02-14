
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;


 long VAR_0 ;
 long VAR_1 ;

__attribute__((used)) static void FUNC_0(uint8_t *VAR_2, uint8_t *VAR_3, ptrdiff_t VAR_4)
{
    long VAR_5;

    for (VAR_5 = 0; VAR_5 <= VAR_4 - (int) sizeof(long); VAR_5 += sizeof(long)) {
        long VAR_6 = *(long *) (VAR_3 + VAR_5);
        long VAR_7 = *(long *) (VAR_2 + VAR_5);
        *(long *) (VAR_2 + VAR_5) = ((VAR_6 & VAR_0) + (VAR_7 & VAR_0)) ^ ((VAR_6 ^ VAR_7) & VAR_1);
    }
    for (; VAR_5 < VAR_4; VAR_5++)
        VAR_2[VAR_5 + 0] += VAR_3[VAR_5 + 0];
}
