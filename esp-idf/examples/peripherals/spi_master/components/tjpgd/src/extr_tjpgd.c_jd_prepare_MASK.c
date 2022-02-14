
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_17__ {int sz_pool; int (* infunc ) (TYPE_1__*,uint8_t*,int) ;int nrst; int* inbuf; int width; int height; int msx; int msy; int* qtid; int* mcubuf; int* dptr; int dctr; int dmsk; void* workbuf; scalar_t__* qttbl; scalar_t__** huffbits; scalar_t__** huffdata; scalar_t__** huffcode; void* device; void* pool; } ;
typedef int JRESULT ;
typedef TYPE_1__ JDEC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int*) ;
 void* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int*,int) ;
 int FUNC_3 (TYPE_1__*,int*,int) ;
 int FUNC_4 (TYPE_1__*,int*,int) ;
 int FUNC_5 (TYPE_1__*,int*,int) ;
 int FUNC_6 (TYPE_1__*,int*,int) ;
 int FUNC_7 (TYPE_1__*,int*,int) ;
 int FUNC_8 (TYPE_1__*,int*,int) ;
 int FUNC_9 (TYPE_1__*,int*,int) ;
 int FUNC_10 (TYPE_1__*,int*,int) ;
 int FUNC_11 (TYPE_1__*,int*,int) ;
 int FUNC_12 (TYPE_1__*,int*,int) ;

JRESULT FUNC_13 (
 JDEC* VAR_8,
 uint16_t (*VAR_9)(JDEC*, uint8_t*, uint16_t),
 void* VAR_10,
 uint16_t VAR_11,
 void* VAR_12
)
{
 uint8_t *VAR_13, VAR_14;
 uint16_t VAR_15;
 uint32_t VAR_16;
 uint16_t VAR_17, VAR_18, VAR_19, VAR_20;
 JRESULT VAR_21;


 if (!VAR_10) return VAR_6;

 VAR_8->pool = VAR_10;
 VAR_8->sz_pool = VAR_11;
 VAR_8->infunc = VAR_9;
 VAR_8->device = VAR_12;
 VAR_8->nrst = 0;

 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  for (VAR_19 = 0; VAR_19 < 2; VAR_19++) {
   VAR_8->huffbits[VAR_18][VAR_19] = 0;
   VAR_8->huffcode[VAR_18][VAR_19] = 0;
   VAR_8->huffdata[VAR_18][VAR_19] = 0;
  }
 }
 for (VAR_18 = 0; VAR_18 < 4; VAR_8->qttbl[VAR_18++] = 0) ;

 VAR_8->inbuf = VAR_13 = FUNC_1(VAR_8, VAR_7);
 if (!VAR_13) return VAR_3;

 if (VAR_8->infunc(VAR_8, VAR_13, 2) != 2) return VAR_2;
 if (FUNC_0(VAR_13) != 0xFFD8) return VAR_0;
 VAR_16 = 2;

 for (;;) {

  if (VAR_8->infunc(VAR_8, VAR_13, 4) != 4) return VAR_2;
  VAR_15 = FUNC_0(VAR_13);
  VAR_20 = FUNC_0(VAR_13 + 2);
  if (VAR_20 <= 2 || (VAR_15 >> 8) != 0xFF) return VAR_0;
  VAR_20 -= 2;
  VAR_16 += 4 + VAR_20;

  switch (VAR_15 & 0xFF) {
  case 0xC0:

   if (VAR_20 > VAR_7) return VAR_4;
   if (VAR_8->infunc(VAR_8, VAR_13, VAR_20) != VAR_20) return VAR_2;

   VAR_8->width = FUNC_0(VAR_13+3);
   VAR_8->height = FUNC_0(VAR_13+1);
   if (VAR_13[5] != 3) return VAR_1;


   for (VAR_18 = 0; VAR_18 < 3; VAR_18++) {
    VAR_14 = VAR_13[7 + 3 * VAR_18];
    if (!VAR_18) {
     if (VAR_14 != 0x11 && VAR_14 != 0x22 && VAR_14 != 0x21) {
      return VAR_1;
     }
     VAR_8->msx = VAR_14 >> 4; VAR_8->msy = VAR_14 & 15;
    } else {
     if (VAR_14 != 0x11) return VAR_1;
    }
    VAR_14 = VAR_13[8 + 3 * VAR_18];
    if (VAR_14 > 3) return VAR_1;
    VAR_8->qtid[VAR_18] = VAR_14;
   }
   break;

  case 0xDD:

   if (VAR_20 > VAR_7) return VAR_4;
   if (VAR_8->infunc(VAR_8, VAR_13, VAR_20) != VAR_20) return VAR_2;


   VAR_8->nrst = FUNC_0(VAR_13);
   break;

  case 0xC4:

   if (VAR_20 > VAR_7) return VAR_4;
   if (VAR_8->infunc(VAR_8, VAR_13, VAR_20) != VAR_20) return VAR_2;


   VAR_21 = FUNC_2(VAR_8, VAR_13, VAR_20);
   if (VAR_21) return VAR_21;
   break;

  case 0xDB:

   if (VAR_20 > VAR_7) return VAR_4;
   if (VAR_8->infunc(VAR_8, VAR_13, VAR_20) != VAR_20) return VAR_2;


   VAR_21 = FUNC_3(VAR_8, VAR_13, VAR_20);
   if (VAR_21) return VAR_21;
   break;

  case 0xDA:

   if (VAR_20 > VAR_7) return VAR_4;
   if (VAR_8->infunc(VAR_8, VAR_13, VAR_20) != VAR_20) return VAR_2;

   if (!VAR_8->width || !VAR_8->height) return VAR_0;

   if (VAR_13[0] != 3) return VAR_1;


   for (VAR_18 = 0; VAR_18 < 3; VAR_18++) {
    VAR_14 = VAR_13[2 + 2 * VAR_18];
    if (VAR_14 != 0x00 && VAR_14 != 0x11) return VAR_1;
    VAR_14 = VAR_18 ? 1 : 0;
    if (!VAR_8->huffbits[VAR_14][0] || !VAR_8->huffbits[VAR_14][1]) {
     return VAR_0;
    }
    if (!VAR_8->qttbl[VAR_8->qtid[VAR_18]]) {
     return VAR_0;
    }
   }


   VAR_17 = VAR_8->msy * VAR_8->msx;
   if (!VAR_17) return VAR_0;
   VAR_20 = VAR_17 * 64 * 2 + 64;
   if (VAR_20 < 256) VAR_20 = 256;
   VAR_8->workbuf = FUNC_1(VAR_8, VAR_20);
   if (!VAR_8->workbuf) return VAR_3;
   VAR_8->mcubuf = (uint8_t*)FUNC_1(VAR_8, (uint16_t)((VAR_17 + 2) * 64));
   if (!VAR_8->mcubuf) return VAR_3;


   VAR_8->dptr = VAR_13; VAR_8->dctr = 0; VAR_8->dmsk = 0;
   if (VAR_16 %= VAR_7) {
    VAR_8->dctr = VAR_8->infunc(VAR_8, VAR_13 + VAR_16, (uint16_t)(VAR_7 - VAR_16));
    VAR_8->dptr = VAR_13 + VAR_16 - 1;
   }

   return VAR_5;

  case 0xC1:
  case 0xC2:
  case 0xC3:
  case 0xC5:
  case 0xC6:
  case 0xC7:
  case 0xC9:
  case 0xCA:
  case 0xCB:
  case 0xCD:
  case 0xCE:
  case 0xCF:
  case 0xD9:
   return VAR_1;

  default:

   if (VAR_8->infunc(VAR_8, 0, VAR_20) != VAR_20) {
    return VAR_2;
   }
  }
 }
}
