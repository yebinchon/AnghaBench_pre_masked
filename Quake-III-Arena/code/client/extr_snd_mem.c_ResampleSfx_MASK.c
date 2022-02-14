
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* sndChunk; struct TYPE_6__* next; } ;
typedef TYPE_1__ sndBuffer ;
struct TYPE_7__ {float soundLength; TYPE_1__* soundData; } ;
typedef TYPE_2__ sfx_t ;
typedef int qboolean ;
typedef int data ;
typedef int byte ;
struct TYPE_8__ {float speed; } ;


 int FUNC_0 (short) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 () ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static void FUNC_2( sfx_t *VAR_2, int VAR_3, int VAR_4, byte *VAR_5, qboolean VAR_6 ) {
 int VAR_7;
 int VAR_8;
 float VAR_9;
 int VAR_10;
 int VAR_11, VAR_12, VAR_13;
 int VAR_14;
 sndBuffer *VAR_15;

 VAR_9 = (float)VAR_3 / VAR_1.speed;

 VAR_7 = VAR_2->soundLength / VAR_9;
 VAR_2->soundLength = VAR_7;

 VAR_12 = 0;
 VAR_13 = VAR_9 * 256;
 VAR_15 = VAR_2->soundData;

 for (VAR_10=0 ; VAR_10<VAR_7 ; VAR_10++)
 {
  VAR_8 = VAR_12 >> 8;
  VAR_12 += VAR_13;
  if( VAR_4 == 2 ) {
   VAR_11 = FUNC_0 ( ((short *)VAR_5)[VAR_8] );
  } else {
   VAR_11 = (int)( (unsigned char)(VAR_5[VAR_8]) - 128) << 8;
  }
  VAR_14 = (VAR_10&(VAR_0-1));
  if (VAR_14 == 0) {
   sndBuffer *VAR_16;
   VAR_16 = FUNC_1();
   if (VAR_15 == ((void*)0)) {
    VAR_2->soundData = VAR_16;
   } else {
    VAR_15->next = VAR_16;
   }
   VAR_15 = VAR_16;
  }

  VAR_15->sndChunk[VAR_14] = VAR_11;
 }
}
