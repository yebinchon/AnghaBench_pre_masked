
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vec3_t ;
typedef scalar_t__ qboolean ;
struct TYPE_8__ {TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_6__ {int* persistant; } ;
struct TYPE_7__ {int accuracy_hits; TYPE_1__ ps; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_3__*) ;
 int FUNC_4 (int ,float,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_6( vec3_t VAR_5, vec3_t VAR_6, int VAR_7, gentity_t *VAR_8 ) {
 int VAR_9;
 float VAR_10, VAR_11;
 vec3_t VAR_12;
 vec3_t VAR_13, VAR_14, VAR_15;
 int VAR_16;
 qboolean VAR_17 = VAR_3;



 FUNC_5( VAR_6, VAR_13 );
 FUNC_1( VAR_14, VAR_13 );
 FUNC_0( VAR_13, VAR_14, VAR_15 );

 VAR_16 = VAR_8->client->ps.persistant[VAR_2];


 for ( VAR_9 = 0 ; VAR_9 < VAR_0 ; VAR_9++ ) {
  VAR_10 = FUNC_2( &VAR_7 ) * VAR_1 * 16;
  VAR_11 = FUNC_2( &VAR_7 ) * VAR_1 * 16;
  FUNC_4( VAR_5, 8192 * 16, VAR_13, VAR_12);
  FUNC_4 (VAR_12, VAR_10, VAR_14, VAR_12);
  FUNC_4 (VAR_12, VAR_11, VAR_15, VAR_12);
  if( FUNC_3( VAR_5, VAR_12, VAR_8 ) && !VAR_17 ) {
   VAR_17 = VAR_4;
   VAR_8->client->accuracy_hits++;
  }
 }
}
