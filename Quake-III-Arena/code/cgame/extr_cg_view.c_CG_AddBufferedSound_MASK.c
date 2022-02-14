
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sfxHandle_t ;
struct TYPE_2__ {size_t soundBufferIn; int soundBufferOut; scalar_t__* soundBuffer; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

void FUNC_0( sfxHandle_t VAR_2 ) {
 if ( !VAR_2 )
  return;
 VAR_1.soundBuffer[VAR_1.soundBufferIn] = VAR_2;
 VAR_1.soundBufferIn = (VAR_1.soundBufferIn + 1) % VAR_0;
 if (VAR_1.soundBufferIn == VAR_1.soundBufferOut) {
  VAR_1.soundBufferOut++;
 }
}
