
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct replay {int sample_rate; int interpolation; struct channel* channels; TYPE_1__* module; int tempo; } ;
struct channel {int dummy; } ;
struct TYPE_2__ {int num_channels; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct channel*,int*,int ,int,int,int ) ;
 int FUNC_2 (struct channel*,int,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (int*,int ,int) ;
 int FUNC_5 (struct replay*) ;
 int FUNC_6 (struct replay*,int*,int) ;

int FUNC_7( struct replay *VAR_0, int *VAR_1 ) {
 struct channel *VAR_2;
 int VAR_3, VAR_4, VAR_5 = FUNC_0( VAR_0->tempo, VAR_0->sample_rate );

 FUNC_4( VAR_1, 0, ( VAR_5 + 65 ) * 4 * sizeof( int ) );

 VAR_4 = VAR_0->module->num_channels;
 for( VAR_3 = 0; VAR_3 < VAR_4; VAR_3++ ) {
  VAR_2 = &VAR_0->channels[ VAR_3 ];
  FUNC_1( VAR_2, VAR_1, 0, ( VAR_5 + 65 ) * 2,
   VAR_0->sample_rate * 2, VAR_0->interpolation );
  FUNC_2( VAR_2, VAR_5 * 2, VAR_0->sample_rate * 2 );
 }
 FUNC_3( VAR_1, VAR_5 + 64 );
 FUNC_6( VAR_0, VAR_1, VAR_5 );
 FUNC_5( VAR_0 );
 return VAR_5;
}
