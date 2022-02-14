
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int a; int d; int nbits; } ;
typedef TYPE_1__ adpcm_state ;


 int** VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned char**,int*) ;
 size_t FUNC_1 (int) ;
 int * VAR_2 ;

int
FUNC_2(adpcm_state * VAR_3, int VAR_4, unsigned char *VAR_5,
        unsigned char *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_3->a;
 int VAR_9 = VAR_3->d;
 int VAR_10 = VAR_3->nbits;
 int VAR_11 = 0;

 while (VAR_7) {
  int VAR_12 = FUNC_0(VAR_3, &VAR_5, &VAR_7);
  int VAR_13;

  if (VAR_10 == 4 && VAR_12 == 0)
   VAR_9 = 4;
  VAR_13 = (VAR_12 >> (VAR_10 - 1)) ? -1 : 1;
  VAR_12 &= VAR_1[VAR_10 - 1];
  VAR_8 += VAR_13 * ((VAR_12 << 1) + 1) * VAR_9 >> 1;
  if (VAR_9 & 1)
   VAR_8++;
  if (VAR_4)
   *VAR_6++ = VAR_2[
      FUNC_1(VAR_8 << 2)];
  else
   *VAR_6++ = FUNC_1(VAR_8 << 2);
  VAR_11++;
  VAR_9 = (VAR_9 * VAR_0[VAR_10 - 2][VAR_12] + 0x2000) >> 14;
  if (VAR_9 < 5)
   VAR_9 = 5;
 }
 VAR_3->a = VAR_8;
 VAR_3->d = VAR_9;
 return VAR_11;
}
