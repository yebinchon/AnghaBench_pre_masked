
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct replay {int sample_rate; int interpolation; int* ramp_buf; struct channel* channels; struct module* module; } ;
struct module {int num_channels; } ;
struct channel {int dummy; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct replay*) ;
 int FUNC_2 (struct replay*,int ) ;

struct replay* FUNC_3( struct module *VAR_0, int VAR_1, int VAR_2 ) {
 struct replay *VAR_3 = (struct replay*)FUNC_0( 1, sizeof( struct replay ) );
 if( VAR_3 ) {
  VAR_3->module = VAR_0;
  VAR_3->sample_rate = VAR_1;
  VAR_3->interpolation = VAR_2;
  VAR_3->ramp_buf = (int*)FUNC_0( 128, sizeof( int ) );
  VAR_3->channels = (struct channel*)FUNC_0( VAR_0->num_channels, sizeof( struct channel ) );
  if( VAR_3->ramp_buf && VAR_3->channels ) {
   FUNC_2( VAR_3, 0 );
  } else {
   FUNC_1( VAR_3 );
   VAR_3 = ((void*)0);
  }
 }
 return VAR_3;
}
