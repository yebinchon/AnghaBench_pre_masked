
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {short sample; scalar_t__ index; } ;
struct TYPE_9__ {scalar_t__ sndChunk; TYPE_1__ adpcm; struct TYPE_9__* next; } ;
typedef TYPE_2__ sndBuffer ;
struct TYPE_10__ {int soundLength; TYPE_2__* soundData; } ;
typedef TYPE_3__ sfx_t ;
typedef int byte ;
struct TYPE_11__ {short sample; scalar_t__ index; } ;
typedef TYPE_4__ adpcm_state_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (short*,int *,int,TYPE_4__*) ;

void FUNC_2( sfx_t *VAR_1, short *VAR_2 ) {
 adpcm_state_t VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 sndBuffer *VAR_7, *VAR_8;
 byte *VAR_9;

 VAR_4 = 0;
 VAR_5 = VAR_1->soundLength;
 VAR_3.index = 0;
 VAR_3.sample = VAR_2[0];

 VAR_8 = ((void*)0);
 while( VAR_5 ) {
  VAR_6 = VAR_5;
  if( VAR_6 > VAR_0*2 ) {
   VAR_6 = VAR_0*2;
  }

  VAR_7 = FUNC_0();
  if (VAR_1->soundData == ((void*)0)) {
   VAR_1->soundData = VAR_7;
  } else {
   VAR_8->next = VAR_7;
  }
  VAR_8 = VAR_7;


  VAR_8->adpcm.index = VAR_3.index;
  VAR_8->adpcm.sample = VAR_3.sample;

  VAR_9 = (byte *)VAR_8->sndChunk;


  FUNC_1( VAR_2 + VAR_4, VAR_9, VAR_6, &VAR_3 );

  VAR_4 += VAR_6;
  VAR_5 -= VAR_6;
 }
}
