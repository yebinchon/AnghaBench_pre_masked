
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uInt ;
struct inflate_huft_s {int exop; int base; void* bits; } ;
typedef struct inflate_huft_s inflate_huft ;
typedef int* C4 ;
typedef void* Byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(uInt *VAR_7, uInt VAR_8, uInt VAR_9, const uInt *VAR_10, const uInt *VAR_11, inflate_huft ** VAR_12, uInt *VAR_13, inflate_huft *VAR_14, uInt *VAR_15, uInt *VAR_16)
{

  uInt VAR_17;
  uInt VAR_18[VAR_0+1];
  uInt VAR_19;
  int VAR_20;
  int VAR_21;
  register uInt VAR_22;
  register uInt VAR_23;
  register int VAR_24;
  int VAR_25;
  uInt VAR_26;
  register uInt *VAR_27;
  inflate_huft *VAR_28;
  struct inflate_huft_s VAR_29;
  inflate_huft *VAR_30[VAR_0];
  register int VAR_31;
  uInt VAR_32[VAR_0+1];
  uInt *VAR_33;
  int VAR_34;
  uInt VAR_35;



  VAR_27 = VAR_18;



  *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0; *VAR_27++ = 0;
  VAR_27 = VAR_7; VAR_22 = VAR_8;
  do {
    VAR_18[*VAR_27++]++;
  } while (--VAR_22);
  if (VAR_18[0] == VAR_8)
  {
    *VAR_12 = (inflate_huft *)VAR_5;
    *VAR_13 = 0;
    return VAR_6;
  }



  VAR_25 = *VAR_13;
  for (VAR_23 = 1; VAR_23 <= VAR_0; VAR_23++)
    if (VAR_18[VAR_23])
      break;
  VAR_24 = VAR_23;
  if ((uInt)VAR_25 < VAR_23)
    VAR_25 = VAR_23;
  for (VAR_22 = VAR_0; VAR_22; VAR_22--)
    if (VAR_18[VAR_22])
      break;
  VAR_20 = VAR_22;
  if ((uInt)VAR_25 > VAR_22)
    VAR_25 = VAR_22;
  *VAR_13 = VAR_25;



  for (VAR_34 = 1 << VAR_23; VAR_23 < VAR_22; VAR_23++, VAR_34 <<= 1)
    if ((VAR_34 -= VAR_18[VAR_23]) < 0)
      return VAR_3;
  if ((VAR_34 -= VAR_18[VAR_22]) < 0)
    return VAR_3;
  VAR_18[VAR_22] += VAR_34;



  VAR_32[1] = VAR_23 = 0;
  VAR_27 = VAR_18 + 1; VAR_33 = VAR_32 + 2;
  while (--VAR_22) {
    *VAR_33++ = (VAR_23 += *VAR_27++);
  }



  VAR_27 = VAR_7; VAR_22 = 0;
  do {
    if ((VAR_23 = *VAR_27++) != 0)
      VAR_16[VAR_32[VAR_23]++] = VAR_22;
  } while (++VAR_22 < VAR_8);
  VAR_8 = VAR_32[VAR_20];



  VAR_32[0] = VAR_22 = 0;
  VAR_27 = VAR_16;
  VAR_21 = -1;
  VAR_31 = -VAR_25;
  VAR_30[0] = (inflate_huft *)VAR_5;
  VAR_28 = (inflate_huft *)VAR_5;
  VAR_35 = 0;


  for (; VAR_24 <= VAR_20; VAR_24++)
  {
    VAR_17 = VAR_18[VAR_24];
    while (VAR_17--)
    {


      while (VAR_24 > VAR_31 + VAR_25)
      {
        VAR_21++;
        VAR_31 += VAR_25;


        VAR_35 = VAR_20 - VAR_31;
        VAR_35 = VAR_35 > (uInt)VAR_25 ? VAR_25 : VAR_35;
        if ((VAR_19 = 1 << (VAR_23 = VAR_24 - VAR_31)) > VAR_17 + 1)
        {
          VAR_19 -= VAR_17 + 1;
          VAR_33 = VAR_18 + VAR_24;
          if (VAR_23 < VAR_35)
            while (++VAR_23 < VAR_35)
            {
              if ((VAR_19 <<= 1) <= *++VAR_33)
                break;
              VAR_19 -= *VAR_33;
            }
        }
        VAR_35 = 1 << VAR_23;


        if (*VAR_15 + VAR_35 > VAR_1)
          return VAR_4;
        VAR_30[VAR_21] = VAR_28 = VAR_14 + *VAR_15;
        *VAR_15 += VAR_35;


        if (VAR_21)
        {
          VAR_32[VAR_21] = VAR_22;
          VAR_29.bits = (Byte)VAR_25;
          VAR_29.exop = (Byte)VAR_23;
          VAR_23 = VAR_22 >> (VAR_31 - VAR_25);
          VAR_29.base = (uInt)(VAR_28 - VAR_30[VAR_21-1] - VAR_23);
          VAR_30[VAR_21-1][VAR_23] = VAR_29;
        }
        else
          *VAR_12 = VAR_28;
      }


      VAR_29.bits = (Byte)(VAR_24 - VAR_31);
      if (VAR_27 >= VAR_16 + VAR_8)
        VAR_29.exop = 128 + 64;
      else if (*VAR_27 < VAR_9)
      {
        VAR_29.exop = (Byte)(*VAR_27 < 256 ? 0 : 32 + 64);
        VAR_29.base = *VAR_27++;
      }
      else
      {
        VAR_29.exop = (Byte)(VAR_11[*VAR_27 - VAR_9] + 16 + 64);
        VAR_29.base = VAR_10[*VAR_27++ - VAR_9];
      }


      VAR_19 = 1 << (VAR_24 - VAR_31);
      for (VAR_23 = VAR_22 >> VAR_31; VAR_23 < VAR_35; VAR_23 += VAR_19)
        VAR_28[VAR_23] = VAR_29;


      for (VAR_23 = 1 << (VAR_24 - 1); VAR_22 & VAR_23; VAR_23 >>= 1)
        VAR_22 ^= VAR_23;
      VAR_22 ^= VAR_23;


      VAR_26 = (1 << VAR_31) - 1;
      while ((VAR_22 & VAR_26) != VAR_32[VAR_21])
      {
        VAR_21--;
        VAR_31 -= VAR_25;
        VAR_26 = (1 << VAR_31) - 1;
      }
    }
  }



  return VAR_34 != 0 && VAR_20 != 1 ? VAR_2 : VAR_6;
}
