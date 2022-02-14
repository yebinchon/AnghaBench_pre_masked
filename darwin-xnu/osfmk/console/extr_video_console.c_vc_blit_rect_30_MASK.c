
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int v_rowbytes; scalar_t__ v_baseaddr; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int* VAR_5 ;
 scalar_t__ VAR_6 ;
 int*** VAR_7 ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static void FUNC_0(int VAR_9, int VAR_10, int VAR_11,
                            int VAR_12, int VAR_13,
       int VAR_14, int VAR_15,
       const unsigned char * VAR_16,
       unsigned int * VAR_17,
       unsigned int VAR_18)
{
    volatile unsigned int * VAR_19;
    int VAR_20, VAR_21;
    unsigned int VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;
    unsigned long long VAR_25;
    int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
    int VAR_32 = 0x10000;

    VAR_28 = VAR_7[VAR_3 & VAR_18][0][0] * VAR_32;
    VAR_29 = VAR_7[VAR_3 & VAR_18][0][1] * VAR_32;
    VAR_30 = VAR_7[VAR_3 & VAR_18][1][0] * VAR_32;
    VAR_31 = VAR_7[VAR_3 & VAR_18][1][1] * VAR_32;
    VAR_26 = ((VAR_28 + VAR_29) < 0) ? ((VAR_12 * VAR_32) - 0x8000) : 0;
    VAR_27 = ((VAR_30 + VAR_31) < 0) ? ((VAR_13 * VAR_32) - 0x8000) : 0;

    if (!VAR_14) VAR_22 = (unsigned int)(uintptr_t)VAR_16;
    else if (1 == VAR_14) VAR_28 = 0;

    if (VAR_17)
 VAR_17 += VAR_11;
    VAR_19 = (volatile unsigned int *) (VAR_8.v_baseaddr +
                                    (VAR_10 * VAR_8.v_rowbytes) +
                                    (VAR_9 * 4));

    for( VAR_20 = 0; VAR_20 < VAR_13; VAR_20++)
    {
        for( VAR_21 = 0; VAR_21 < VAR_12; VAR_21++)
 {
     if (VAR_14) VAR_22 = VAR_16[((VAR_26 + (VAR_21 * VAR_28) + (VAR_20 * VAR_29)) >> 16)
    + VAR_14 * (((VAR_27 + (VAR_21 * VAR_30) + (VAR_20 * VAR_31)) >> 16))];
     if (VAR_17) {
  if (VAR_4 & VAR_18) {
      VAR_24 = *(VAR_19 + VAR_21);
      *VAR_17++ = VAR_24;
  } else
      VAR_24 = *VAR_17++;
     }
     if (VAR_2 & VAR_18) {
  VAR_23 = (VAR_5[VAR_22*3 + 0] << 22)
   | (VAR_5[VAR_22*3 + 1] << 12)
   | (VAR_5[VAR_22*3 + 2] << 2);
     } else if (VAR_0 & VAR_18) {
  VAR_25 = VAR_24;
  VAR_25 = (((((VAR_25 & 0x3FF003FF) * VAR_22) + 0x0FF000FF) >> 8) & 0x3FF003FF)
       | (((((VAR_25 & 0x000FFC00) * VAR_22) + 0x0003FC00) >> 8) & 0x000FFC00);
  VAR_23 = (unsigned int)VAR_25;
  if (VAR_6) VAR_23 += ((0xFF - VAR_22) << 22)
         | ((0xFF - VAR_22) << 12)
         | ((0xFF - VAR_22) << 2);
            } else if (VAR_1 & VAR_18)
  VAR_23 = VAR_24;
     else
  VAR_23 = VAR_22;
            *(VAR_19 + VAR_21) = VAR_23;
 }
        VAR_19 = (volatile unsigned int *) (((volatile char*)VAR_19) + VAR_8.v_rowbytes);
 if (VAR_17)
     VAR_17 += VAR_15 - VAR_12;
    }
}
