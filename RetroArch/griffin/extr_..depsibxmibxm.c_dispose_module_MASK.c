
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int num_patterns; int num_instruments; int num_samples; struct module* instruments; struct module* samples; struct module* data; struct module* patterns; struct module* sequence; struct module* default_panning; } ;
struct instrument {int num_patterns; int num_instruments; int num_samples; struct instrument* instruments; struct instrument* samples; struct instrument* data; struct instrument* patterns; struct instrument* sequence; struct instrument* default_panning; } ;


 int FUNC_0 (struct module*) ;

void FUNC_1( struct module *VAR_0 ) {
 int VAR_1, VAR_2;
 struct instrument *VAR_3;
 FUNC_0( VAR_0->default_panning );
 FUNC_0( VAR_0->sequence );
 if( VAR_0->patterns ) {
  for( VAR_1 = 0; VAR_1 < VAR_0->num_patterns; VAR_1++ ) {
   FUNC_0( VAR_0->patterns[ VAR_1 ].data );
  }
  FUNC_0( VAR_0->patterns );
 }
 if( VAR_0->instruments ) {
  for( VAR_1 = 0; VAR_1 <= VAR_0->num_instruments; VAR_1++ ) {
   VAR_3 = &VAR_0->instruments[ VAR_1 ];
   if( VAR_3->samples ) {
    for( VAR_2 = 0; VAR_2 < VAR_3->num_samples; VAR_2++ ) {
     FUNC_0( VAR_3->samples[ VAR_2 ].data );
    }
    FUNC_0( VAR_3->samples );
   }
  }
  FUNC_0( VAR_0->instruments );
 }
 FUNC_0( VAR_0 );
}
