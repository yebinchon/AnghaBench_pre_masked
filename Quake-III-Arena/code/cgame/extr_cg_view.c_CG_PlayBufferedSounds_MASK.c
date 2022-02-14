
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ soundTime; scalar_t__ time; size_t soundBufferOut; size_t soundBufferIn; scalar_t__* soundBuffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1( void ) {
 if ( VAR_2.soundTime < VAR_2.time ) {
  if (VAR_2.soundBufferOut != VAR_2.soundBufferIn && VAR_2.soundBuffer[VAR_2.soundBufferOut]) {
   FUNC_0(VAR_2.soundBuffer[VAR_2.soundBufferOut], VAR_0);
   VAR_2.soundBuffer[VAR_2.soundBufferOut] = 0;
   VAR_2.soundBufferOut = (VAR_2.soundBufferOut + 1) % VAR_1;
   VAR_2.soundTime = VAR_2.time + 750;
  }
 }
}
