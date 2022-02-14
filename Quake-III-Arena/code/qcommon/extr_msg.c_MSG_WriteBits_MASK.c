
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int maxsize; size_t cursize; int* data; int bit; scalar_t__ oob; int overflowed; } ;
typedef TYPE_1__ msg_t ;
struct TYPE_5__ {int compressor; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int*,int*) ;
 int FUNC_2 (int,int*,int*) ;
 unsigned int FUNC_3 (int) ;
 unsigned short FUNC_4 (int) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_5( msg_t *VAR_5, int VAR_6, int VAR_7 ) {
 int VAR_8;


 VAR_2 += VAR_7;


 if ( VAR_5->maxsize - VAR_5->cursize < 4 ) {
  VAR_5->overflowed = VAR_4;
  return;
 }

 if ( VAR_7 == 0 || VAR_7 < -31 || VAR_7 > 32 ) {
  FUNC_0( VAR_0, "MSG_WriteBits: bad bits %i", VAR_7 );
 }


 if ( VAR_7 != 32 ) {
  if ( VAR_7 > 0 ) {
   if ( VAR_6 > ( ( 1 << VAR_7 ) - 1 ) || VAR_6 < 0 ) {
    VAR_3++;
   }
  } else {
   int VAR_9;

   VAR_9 = 1 << (VAR_7-1);

   if ( VAR_6 > VAR_9 - 1 || VAR_6 < -VAR_9 ) {
    VAR_3++;
   }
  }
 }
 if ( VAR_7 < 0 ) {
  VAR_7 = -VAR_7;
 }
 if (VAR_5->oob) {
  if (VAR_7==8) {
   VAR_5->data[VAR_5->cursize] = VAR_6;
   VAR_5->cursize += 1;
   VAR_5->bit += 8;
  } else if (VAR_7==16) {
   unsigned short *VAR_10 = (unsigned short *)&VAR_5->data[VAR_5->cursize];
   *VAR_10 = FUNC_4(VAR_6);
   VAR_5->cursize += 2;
   VAR_5->bit += 16;
  } else if (VAR_7==32) {
   unsigned int *VAR_11 = (unsigned int *)&VAR_5->data[VAR_5->cursize];
   *VAR_11 = FUNC_3(VAR_6);
   VAR_5->cursize += 4;
   VAR_5->bit += 8;
  } else {
   FUNC_0(VAR_0, "can't read %d bits\n", VAR_7);
  }
 } else {

  VAR_6 &= (0xffffffff>>(32-VAR_7));
  if (VAR_7&7) {
   int VAR_12;
   VAR_12 = VAR_7&7;
   for(VAR_8=0;VAR_8<VAR_12;VAR_8++) {
    FUNC_2((VAR_6&1), VAR_5->data, &VAR_5->bit);
    VAR_6 = (VAR_6>>1);
   }
   VAR_7 = VAR_7 - VAR_12;
  }
  if (VAR_7) {
   for(VAR_8=0;VAR_8<VAR_7;VAR_8+=8) {

    FUNC_1 (&VAR_1.compressor, (VAR_6&0xff), VAR_5->data, &VAR_5->bit);
    VAR_6 = (VAR_6>>8);
   }
  }
  VAR_5->cursize = (VAR_5->bit>>3)+1;

 }
}
