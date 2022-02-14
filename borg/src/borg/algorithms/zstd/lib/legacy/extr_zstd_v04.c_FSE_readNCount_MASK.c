
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef int BYTE ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (short) ;
 int VAR_2 ;
 int FUNC_2 (int const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static size_t FUNC_3 (short* VAR_6, unsigned* VAR_7, unsigned* VAR_8,
                 const void* VAR_9, size_t VAR_10)
{
    const BYTE* const VAR_11 = (const BYTE*) VAR_9;
    const BYTE* const VAR_12 = VAR_11 + VAR_10;
    const BYTE* VAR_13 = VAR_11;
    int VAR_14;
    int VAR_15;
    int VAR_16;
    U32 VAR_17;
    int VAR_18;
    unsigned VAR_19 = 0;
    int VAR_20 = 0;

    if (VAR_10 < 4) return FUNC_0(VAR_4);
    VAR_17 = FUNC_2(VAR_13);
    VAR_14 = (VAR_17 & 0xF) + VAR_0;
    if (VAR_14 > VAR_1) return FUNC_0(VAR_5);
    VAR_17 >>= 4;
    VAR_18 = 4;
    *VAR_8 = VAR_14;
    VAR_15 = (1<<VAR_14)+1;
    VAR_16 = 1<<VAR_14;
    VAR_14++;

    while ((VAR_15>1) && (VAR_19<=*VAR_7))
    {
        if (VAR_20)
        {
            unsigned VAR_21 = VAR_19;
            while ((VAR_17 & 0xFFFF) == 0xFFFF)
            {
                VAR_21+=24;
                if (VAR_13 < VAR_12-5)
                {
                    VAR_13+=2;
                    VAR_17 = FUNC_2(VAR_13) >> VAR_18;
                }
                else
                {
                    VAR_17 >>= 16;
                    VAR_18+=16;
                }
            }
            while ((VAR_17 & 3) == 3)
            {
                VAR_21+=3;
                VAR_17>>=2;
                VAR_18+=2;
            }
            VAR_21 += VAR_17 & 3;
            VAR_18 += 2;
            if (VAR_21 > *VAR_7) return FUNC_0(VAR_3);
            while (VAR_19 < VAR_21) VAR_6[VAR_19++] = 0;
            if ((VAR_13 <= VAR_12-7) || (VAR_13 + (VAR_18>>3) <= VAR_12-4))
            {
                VAR_13 += VAR_18>>3;
                VAR_18 &= 7;
                VAR_17 = FUNC_2(VAR_13) >> VAR_18;
            }
            else
                VAR_17 >>= 2;
        }
        {
            const short VAR_22 = (short)((2*VAR_16-1)-VAR_15);
            short VAR_23;

            if ((VAR_17 & (VAR_16-1)) < (U32)VAR_22)
            {
                VAR_23 = (short)(VAR_17 & (VAR_16-1));
                VAR_18 += VAR_14-1;
            }
            else
            {
                VAR_23 = (short)(VAR_17 & (2*VAR_16-1));
                if (VAR_23 >= VAR_16) VAR_23 -= VAR_22;
                VAR_18 += VAR_14;
            }

            VAR_23--;
            VAR_15 -= FUNC_1(VAR_23);
            VAR_6[VAR_19++] = VAR_23;
            VAR_20 = !VAR_23;
            while (VAR_15 < VAR_16)
            {
                VAR_14--;
                VAR_16 >>= 1;
            }

            {
                if ((VAR_13 <= VAR_12-7) || (VAR_13 + (VAR_18>>3) <= VAR_12-4))
                {
                    VAR_13 += VAR_18>>3;
                    VAR_18 &= 7;
                }
                else
                {
                    VAR_18 -= (int)(8 * (VAR_12 - 4 - VAR_13));
                    VAR_13 = VAR_12 - 4;
                }
                VAR_17 = FUNC_2(VAR_13) >> (VAR_18 & 31);
            }
        }
    }
    if (VAR_15 != 1) return FUNC_0(VAR_2);
    *VAR_7 = VAR_19-1;

    VAR_13 += (VAR_18+7)>>3;
    if ((size_t)(VAR_13-VAR_11) > VAR_10) return FUNC_0(VAR_4);
    return VAR_13-VAR_11;
}
