
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; scalar_t__ sndChunk; struct TYPE_5__* next; } ;
typedef TYPE_1__ sndBuffer ;
struct TYPE_6__ {int soundLength; TYPE_1__* soundData; } ;
typedef TYPE_2__ sfx_t ;
typedef size_t byte ;


 scalar_t__ FUNC_0 (size_t) ;
 size_t FUNC_1 (short) ;
 int VAR_0 ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int* VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_3( sfx_t *VAR_4, short *VAR_5) {
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 sndBuffer *VAR_11, *VAR_12;
 byte *VAR_13;

 if (!VAR_1) {
  for (VAR_6=0;VAR_6<256;VAR_6++) {
   VAR_2[VAR_6] = (float)FUNC_0((byte)VAR_6);
  }
  VAR_1 = VAR_3;
 }

 VAR_12 = ((void*)0);
 VAR_7 = VAR_4->soundLength;
 VAR_9 = 0;

 while(VAR_7>0) {
  VAR_8 = VAR_7;
  if (VAR_8>(VAR_0*2)) {
   VAR_8 = (VAR_0*2);
  }

  VAR_11 = FUNC_2();
  if (VAR_4->soundData == ((void*)0)) {
   VAR_4->soundData = VAR_11;
  } else {
   VAR_12->next = VAR_11;
  }
  VAR_12 = VAR_11;
  VAR_13 = (byte *)VAR_12->sndChunk;
  for(VAR_6=0; VAR_6<VAR_8; VAR_6++) {
   VAR_10 = VAR_5[0]+VAR_9;
   if (VAR_10>32767) {
    VAR_10 = 32767;
   } else if (VAR_10<-32768) {
    VAR_10 = -32768;
   }
   VAR_13[VAR_6] = FUNC_1((short)VAR_10);
   VAR_9 = VAR_10 - VAR_2[VAR_13[VAR_6]];
   VAR_5++;
  }
  VAR_12->size = VAR_8;
  VAR_7 -= VAR_8;
 }
}
