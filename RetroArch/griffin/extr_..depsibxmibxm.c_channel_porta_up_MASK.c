
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct channel {scalar_t__ period; int fx_count; } ;



__attribute__((used)) static void FUNC_0( struct channel *VAR_0, int VAR_1 ) {
 switch( VAR_1 & 0xF0 ) {
  case 0xE0:
   if( VAR_0->fx_count == 0 ) {
    VAR_0->period -= VAR_1 & 0xF;
   }
   break;
  case 0xF0:
   if( VAR_0->fx_count == 0 ) {
    VAR_0->period -= ( VAR_1 & 0xF ) << 2;
   }
   break;
  default:
   if( VAR_0->fx_count > 0 ) {
    VAR_0->period -= VAR_1 << 2;
   }
   break;
 }
 if( VAR_0->period < 0 ) {
  VAR_0->period = 0;
 }
}
