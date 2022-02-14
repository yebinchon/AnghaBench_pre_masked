
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_7__ {float* angles; int origin; } ;
struct TYPE_6__ {int bmodel; } ;
struct TYPE_8__ {TYPE_2__ s; TYPE_1__ r; } ;
typedef TYPE_3__ sharedEntity_t ;
typedef int clipHandle_t ;


 int FUNC_0 (int const,int ) ;
 int FUNC_1 (int const,int ,int ,float*) ;
 int VAR_0 ;
 int FUNC_2 (int const,int const,int*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int) ;
 float* VAR_1 ;

int FUNC_5( const vec3_t VAR_2, int VAR_3 ) {
 int VAR_4[VAR_0];
 sharedEntity_t *VAR_5;
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 clipHandle_t VAR_10;
 float *VAR_11;


 VAR_8 = FUNC_0( VAR_2, 0 );


 VAR_7 = FUNC_2( VAR_2, VAR_2, VAR_4, VAR_0 );

 for ( VAR_6=0 ; VAR_6<VAR_7 ; VAR_6++ ) {
  if ( VAR_4[VAR_6] == VAR_3 ) {
   continue;
  }
  VAR_5 = FUNC_4( VAR_4[VAR_6] );

  VAR_10 = FUNC_3( VAR_5 );
  VAR_11 = VAR_5->s.angles;
  if ( !VAR_5->r.bmodel ) {
   VAR_11 = VAR_1;
  }

  VAR_9 = FUNC_1 (VAR_2, VAR_10, VAR_5->s.origin, VAR_5->s.angles);

  VAR_8 |= VAR_9;
 }

 return VAR_8;
}
