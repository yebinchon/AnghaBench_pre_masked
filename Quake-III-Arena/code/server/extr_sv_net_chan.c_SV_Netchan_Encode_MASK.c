
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {long cursize; int readcount; int bit; int oob; int* data; } ;
typedef TYPE_2__ msg_t ;
struct TYPE_7__ {int outgoingSequence; } ;
struct TYPE_9__ {int challenge; TYPE_1__ netchan; scalar_t__ lastClientCommandString; } ;
typedef TYPE_3__ client_t ;
typedef int byte ;


 long FUNC_0 (TYPE_2__*) ;
 long VAR_0 ;

__attribute__((used)) static void FUNC_1( client_t *VAR_1, msg_t *VAR_2 ) {
 long VAR_3, VAR_4, VAR_5;
 byte VAR_6, *VAR_7;
        int VAR_8, VAR_9, VAR_10;

 if ( VAR_2->cursize < VAR_0 ) {
  return;
 }

        VAR_8 = VAR_2->readcount;
        VAR_9 = VAR_2->bit;
        VAR_10 = VAR_2->oob;

        VAR_2->bit = 0;
        VAR_2->readcount = 0;
        VAR_2->oob = 0;

 VAR_3 = FUNC_0(VAR_2);

        VAR_2->oob = VAR_10;
        VAR_2->bit = VAR_9;
        VAR_2->readcount = VAR_8;

 VAR_7 = (byte *)VAR_1->lastClientCommandString;
 VAR_5 = 0;

 VAR_6 = VAR_1->challenge ^ VAR_1->netchan.outgoingSequence;
 for (VAR_4 = VAR_0; VAR_4 < VAR_2->cursize; VAR_4++) {

  if (!VAR_7[VAR_5])
   VAR_5 = 0;
  if (VAR_7[VAR_5] > 127 || VAR_7[VAR_5] == '%') {
   VAR_6 ^= '.' << (VAR_4 & 1);
  }
  else {
   VAR_6 ^= VAR_7[VAR_5] << (VAR_4 & 1);
  }
  VAR_5++;

  *(VAR_2->data + VAR_4) = *(VAR_2->data + VAR_4) ^ VAR_6;
 }
}
