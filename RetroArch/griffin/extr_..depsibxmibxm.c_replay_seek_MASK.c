
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct replay {int sample_rate; int tempo; int * channels; TYPE_1__* module; } ;
struct TYPE_2__ {int num_channels; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct replay*,int ) ;
 int FUNC_3 (struct replay*) ;

int FUNC_4( struct replay *VAR_0, int VAR_1 ) {
 int VAR_2, VAR_3, VAR_4 = 0;
 FUNC_2( VAR_0, 0 );
 VAR_3 = FUNC_0( VAR_0->tempo, VAR_0->sample_rate );
 while( ( VAR_1 - VAR_4 ) >= VAR_3 ) {
  for( VAR_2 = 0; VAR_2 < VAR_0->module->num_channels; VAR_2++ ) {
   FUNC_1( &VAR_0->channels[ VAR_2 ],
    VAR_3 * 2, VAR_0->sample_rate * 2 );
  }
  VAR_4 += VAR_3;
  FUNC_3( VAR_0 );
  VAR_3 = FUNC_0( VAR_0->tempo, VAR_0->sample_rate );
 }
 return VAR_4;
}
