
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int d; int nbits; } ;
typedef TYPE_1__ adpcm_state ;


 int** VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int,int,TYPE_1__*,unsigned char**,int*) ;
 int* VAR_3 ;

int
FUNC_1(adpcm_state * VAR_4, int VAR_5, unsigned char *VAR_6,
        unsigned char *VAR_7, int VAR_8)
{
 int VAR_9 = VAR_4->a;
 int VAR_10 = VAR_4->d;
 int VAR_11 = VAR_4->nbits;
 int VAR_12 = 0;

 while (VAR_8--) {
  int VAR_13 = 0,
   VAR_14 = 1 << (VAR_11 - 1);
  int VAR_15,
   VAR_16;

  if (VAR_5)
   VAR_16 = (VAR_2[*VAR_6++] >> 2) - VAR_9;
  else
   VAR_16 = (VAR_3[*VAR_6++] >> 2) - VAR_9;
  if (VAR_16 < 0) {
   VAR_13 = VAR_14;
   VAR_16 = -VAR_16;
  }
  while (--VAR_14 && VAR_16 > VAR_10) {
   VAR_16 -= VAR_10;
   VAR_13++;
  }
  if (VAR_11 == 4 && ((VAR_13 & 0x0f) == 0))
   VAR_13 = 8;
  FUNC_0(VAR_13, VAR_11, VAR_4, &VAR_7, &VAR_12);
  VAR_15 = (VAR_13 >> (VAR_11 - 1)) ? -1 : 1;
  VAR_13 &= VAR_1[VAR_11 - 1];

  VAR_9 += VAR_15 * ((VAR_13 << 1) + 1) * VAR_10 >> 1;
  if (VAR_10 & 1)
   VAR_9++;
  VAR_10 = (VAR_10 * VAR_0[VAR_11 - 2][VAR_13] + 0x2000) >> 14;
  if (VAR_10 < 5)
   VAR_10 = 5;
 }
 VAR_4->a = VAR_9;
 VAR_4->d = VAR_10;
 return VAR_12;
}
