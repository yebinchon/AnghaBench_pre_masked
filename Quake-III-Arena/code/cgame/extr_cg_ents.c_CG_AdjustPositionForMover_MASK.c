
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_4__ {scalar_t__ eType; int apos; int pos; } ;
struct TYPE_5__ {TYPE_1__ currentState; } ;
typedef TYPE_2__ centity_t ;


 int FUNC_0 (int *,int,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int const,int ,int ) ;
 int FUNC_2 (int const,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_2__* VAR_2 ;

void FUNC_4( const vec3_t VAR_3, int VAR_4, int VAR_5, int VAR_6, vec3_t VAR_7 ) {
 centity_t *VAR_8;
 vec3_t VAR_9, VAR_10, VAR_11;
 vec3_t VAR_12, VAR_13, VAR_14;

 if ( VAR_4 <= 0 || VAR_4 >= VAR_0 ) {
  FUNC_2( VAR_3, VAR_7 );
  return;
 }

 VAR_8 = &VAR_2[ VAR_4 ];
 if ( VAR_8->currentState.eType != VAR_1 ) {
  FUNC_2( VAR_3, VAR_7 );
  return;
 }

 FUNC_0( &VAR_8->currentState.pos, VAR_5, VAR_9 );
 FUNC_0( &VAR_8->currentState.apos, VAR_5, VAR_12 );

 FUNC_0( &VAR_8->currentState.pos, VAR_6, VAR_10 );
 FUNC_0( &VAR_8->currentState.apos, VAR_6, VAR_13 );

 FUNC_3( VAR_10, VAR_9, VAR_11 );
 FUNC_3( VAR_13, VAR_12, VAR_14 );

 FUNC_1( VAR_3, VAR_11, VAR_7 );


}
