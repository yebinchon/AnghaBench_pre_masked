
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int*** huffbits; int*** huffcode; int*** huffdata; } ;
typedef TYPE_1__ JDEC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_1 (
 JDEC* VAR_3,
 const uint8_t* VAR_4,
 uint16_t VAR_5
)
{
 uint16_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 uint8_t VAR_12, *VAR_13, *VAR_14;
 uint16_t VAR_15, *VAR_16;


 while (VAR_5) {
  if (VAR_5 < 17) return VAR_0;
  VAR_5 -= 17;
  VAR_12 = *VAR_4++;
  if (VAR_12 & 0xEE) return VAR_0;
  VAR_10 = VAR_12 >> 4; VAR_11 = VAR_12 & 0x0F;
  VAR_13 = FUNC_0(VAR_3, 16);
  if (!VAR_13) return VAR_1;
  VAR_3->huffbits[VAR_11][VAR_10] = VAR_13;
  for (VAR_9 = VAR_6 = 0; VAR_6 < 16; VAR_6++) {
   VAR_9 += (VAR_13[VAR_6] = *VAR_4++);
  }
  VAR_16 = FUNC_0(VAR_3, (uint16_t)(VAR_9 * sizeof (uint16_t)));
  if (!VAR_16) return VAR_1;
  VAR_3->huffcode[VAR_11][VAR_10] = VAR_16;
  VAR_15 = 0;
  for (VAR_7 = VAR_6 = 0; VAR_6 < 16; VAR_6++) {
   VAR_8 = VAR_13[VAR_6];
   while (VAR_8--) VAR_16[VAR_7++] = VAR_15++;
   VAR_15 <<= 1;
  }

  if (VAR_5 < VAR_9) return VAR_0;
  VAR_5 -= VAR_9;
  VAR_14 = FUNC_0(VAR_3, VAR_9);
  if (!VAR_14) return VAR_1;
  VAR_3->huffdata[VAR_11][VAR_10] = VAR_14;
  for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++) {
   VAR_12 = *VAR_4++;
   if (!VAR_10 && VAR_12 > 11) return VAR_0;
   *VAR_14++ = VAR_12;
  }
 }

 return VAR_2;
}
