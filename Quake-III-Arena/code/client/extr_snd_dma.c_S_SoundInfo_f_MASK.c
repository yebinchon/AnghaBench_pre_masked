
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int buffer; int speed; int submission_chunk; int samplebits; int samples; scalar_t__ channels; } ;


 int FUNC_0 (char*,...) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

void FUNC_1(void) {
 FUNC_0("----- Sound Info -----\n" );
 if (!VAR_4) {
  FUNC_0 ("sound system not started\n");
 } else {
  if ( VAR_3 ) {
   FUNC_0 ("sound system is muted\n");
  }

  FUNC_0("%5d stereo\n", VAR_0.channels - 1);
  FUNC_0("%5d samples\n", VAR_0.samples);
  FUNC_0("%5d samplebits\n", VAR_0.samplebits);
  FUNC_0("%5d submission_chunk\n", VAR_0.submission_chunk);
  FUNC_0("%5d speed\n", VAR_0.speed);
  FUNC_0("0x%x dma buffer\n", VAR_0.buffer);
  if ( VAR_1 ) {
   FUNC_0("Background file: %s\n", VAR_2 );
  } else {
   FUNC_0("No background file.\n" );
  }

 }
 FUNC_0("----------------------\n" );
}
