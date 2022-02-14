
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int readcount; int bit; int oob; int* data; long cursize; } ;
typedef TYPE_1__ msg_t ;
typedef int byte ;
struct TYPE_6__ {int** reliableCommands; int challenge; } ;


 long VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 long FUNC_1 (TYPE_1__*) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_2( msg_t *VAR_3 ) {
 long VAR_4, VAR_5, VAR_6;
 byte VAR_7, *VAR_8;
        int VAR_9, VAR_10, VAR_11;

        VAR_9 = VAR_3->readcount;
        VAR_10 = VAR_3->bit;
        VAR_11 = VAR_3->oob;

        VAR_3->oob = 0;

 VAR_4 = FUNC_1(VAR_3);

        VAR_3->oob = VAR_11;
        VAR_3->bit = VAR_10;
        VAR_3->readcount = VAR_9;

 VAR_8 = VAR_2.reliableCommands[ VAR_4 & (VAR_1-1) ];
 VAR_6 = 0;

 VAR_7 = VAR_2.challenge ^ FUNC_0( *(unsigned *)VAR_3->data );
 for (VAR_5 = VAR_3->readcount + VAR_0; VAR_5 < VAR_3->cursize; VAR_5++) {

  if (!VAR_8[VAR_6])
   VAR_6 = 0;
  if (VAR_8[VAR_6] > 127 || VAR_8[VAR_6] == '%') {
   VAR_7 ^= '.' << (VAR_5 & 1);
  }
  else {
   VAR_7 ^= VAR_8[VAR_6] << (VAR_5 & 1);
  }
  VAR_6++;

  *(VAR_3->data + VAR_5) = *(VAR_3->data + VAR_5) ^ VAR_7;
 }
}
