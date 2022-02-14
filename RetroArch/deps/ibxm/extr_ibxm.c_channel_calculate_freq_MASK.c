
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct channel {int period; int vibrato_add; int arpeggio_add; int freq; TYPE_2__* replay; } ;
struct TYPE_4__ {TYPE_1__* module; } ;
struct TYPE_3__ {int c2_rate; scalar_t__ linear_periods; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1( struct channel *VAR_1 ) {
 int VAR_2 = VAR_1->period + VAR_1->vibrato_add;
 if( VAR_1->replay->module->linear_periods ) {
  VAR_2 = VAR_2 - ( VAR_1->arpeggio_add << 6 );
  if( VAR_2 < 28 || VAR_2 > 7680 ) {
   VAR_2 = 7680;
  }
  VAR_1->freq = ( ( VAR_1->replay->module->c2_rate >> 4 )
   * FUNC_0( ( ( 4608 - VAR_2 ) << VAR_0 ) / 768 ) ) >> ( VAR_0 - 4 );
 } else {
  if( VAR_2 > 29021 ) {
   VAR_2 = 29021;
  }
  VAR_2 = ( VAR_2 << VAR_0 ) / FUNC_0( ( VAR_1->arpeggio_add << VAR_0 ) / 12 );
  if( VAR_2 < 28 ) {
   VAR_2 = 29021;
  }
  VAR_1->freq = VAR_1->replay->module->c2_rate * 1712 / VAR_2;
 }
}
