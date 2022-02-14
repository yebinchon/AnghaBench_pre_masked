
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sample; int index; } ;
struct TYPE_7__ {scalar_t__ sndChunk; TYPE_1__ adpcm; } ;
typedef TYPE_2__ sndBuffer ;
typedef int byte ;
struct TYPE_8__ {int sample; int index; } ;
typedef TYPE_3__ adpcm_state_t ;


 int VAR_0 ;
 int FUNC_0 (int *,short*,int,TYPE_3__*) ;

void FUNC_1(sndBuffer *VAR_1, short *VAR_2) {
 adpcm_state_t VAR_3;
 byte *VAR_4;


 VAR_3.index = VAR_1->adpcm.index;
 VAR_3.sample = VAR_1->adpcm.sample;

 VAR_4 = (byte *)VAR_1->sndChunk;

 FUNC_0( VAR_4, VAR_2, VAR_0*2, &VAR_3 );
}
