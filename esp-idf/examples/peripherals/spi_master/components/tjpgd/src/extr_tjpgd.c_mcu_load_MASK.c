
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_5__ {int msx; int msy; int*** huffcode; int* dcv; int** qttbl; size_t* qtid; int scale; scalar_t__*** huffdata; scalar_t__*** huffbits; scalar_t__* mcubuf; scalar_t__ workbuf; } ;
typedef scalar_t__ JRESULT ;
typedef TYPE_1__ JDEC ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int*,scalar_t__*) ;
 int FUNC_3 (TYPE_1__*,scalar_t__ const*,int const*,scalar_t__ const*) ;

__attribute__((used)) static JRESULT FUNC_4 (
 JDEC* VAR_3
)
{
 int32_t *VAR_4 = (int32_t*)VAR_3->workbuf;
 int VAR_5, VAR_6, VAR_7;
 uint16_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 uint8_t *VAR_15;
 const uint8_t *VAR_16, *VAR_17;
 const uint16_t *VAR_18;
 const int32_t *VAR_19;


 VAR_9 = VAR_3->msx * VAR_3->msy;
 VAR_10 = 2;
 VAR_15 = VAR_3->mcubuf;

 for (VAR_8 = 0; VAR_8 < VAR_9 + VAR_10; VAR_8++) {
  VAR_14 = (VAR_8 < VAR_9) ? 0 : VAR_8 - VAR_9 + 1;
  VAR_13 = VAR_14 ? 1 : 0;


  VAR_16 = VAR_3->huffbits[VAR_13][0];
  VAR_18 = VAR_3->huffcode[VAR_13][0];
  VAR_17 = VAR_3->huffdata[VAR_13][0];
  VAR_5 = FUNC_3(VAR_3, VAR_16, VAR_18, VAR_17);
  if (VAR_5 < 0) return 0 - VAR_5;
  VAR_6 = VAR_3->dcv[VAR_14];
  if (VAR_5) {
   VAR_7 = FUNC_1(VAR_3, VAR_5);
   if (VAR_7 < 0) return 0 - VAR_7;
   VAR_5 = 1 << (VAR_5 - 1);
   if (!(VAR_7 & VAR_5)) VAR_7 -= (VAR_5 << 1) - 1;
   VAR_6 += VAR_7;
   VAR_3->dcv[VAR_14] = (int16_t)VAR_6;
  }
  VAR_19 = VAR_3->qttbl[VAR_3->qtid[VAR_14]];
  VAR_4[0] = VAR_6 * VAR_19[0] >> 8;


  for (VAR_11 = 1; VAR_11 < 64; VAR_4[VAR_11++] = 0) ;
  VAR_16 = VAR_3->huffbits[VAR_13][1];
  VAR_18 = VAR_3->huffcode[VAR_13][1];
  VAR_17 = VAR_3->huffdata[VAR_13][1];
  VAR_11 = 1;
  do {
   VAR_5 = FUNC_3(VAR_3, VAR_16, VAR_18, VAR_17);
   if (VAR_5 == 0) break;
   if (VAR_5 < 0) return 0 - VAR_5;
   VAR_12 = (uint16_t)VAR_5 >> 4;
   if (VAR_12) {
    VAR_11 += VAR_12;
    if (VAR_11 >= 64) return VAR_0;
   }
   if (VAR_5 &= 0x0F) {
    VAR_6 = FUNC_1(VAR_3, VAR_5);
    if (VAR_6 < 0) return 0 - VAR_6;
    VAR_5 = 1 << (VAR_5 - 1);
    if (!(VAR_6 & VAR_5)) VAR_6 -= (VAR_5 << 1) - 1;
    VAR_12 = FUNC_0(VAR_11);
    VAR_4[VAR_12] = VAR_6 * VAR_19[VAR_12] >> 8;
   }
  } while (++VAR_11 < 64);

  if (VAR_2 && VAR_3->scale == 3) {
   *VAR_15 = (uint8_t)((*VAR_4 / 256) + 128);
  } else {
   FUNC_2(VAR_4, VAR_15);
  }

  VAR_15 += 64;
 }

 return VAR_1;
}
