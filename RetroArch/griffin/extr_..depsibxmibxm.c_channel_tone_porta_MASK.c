
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {scalar_t__ period; scalar_t__ porta_period; int tone_porta_param; } ;



__attribute__((used)) static void FUNC_0( struct channel *VAR_0 ) {
 if( VAR_0->period > 0 ) {
  if( VAR_0->period < VAR_0->porta_period ) {
   VAR_0->period += VAR_0->tone_porta_param << 2;
   if( VAR_0->period > VAR_0->porta_period ) {
    VAR_0->period = VAR_0->porta_period;
   }
  } else {
   VAR_0->period -= VAR_0->tone_porta_param << 2;
   if( VAR_0->period < VAR_0->porta_period ) {
    VAR_0->period = VAR_0->porta_period;
   }
  }
 }
}
