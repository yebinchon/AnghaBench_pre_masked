
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_8__ {scalar_t__* powerups; } ;
struct TYPE_7__ {TYPE_2__ ps; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*,int ,int) ;

void FUNC_2( gentity_t *VAR_6, gentity_t *VAR_7, gentity_t *VAR_8 ) {
 if( !VAR_8->client ) {
  return;
 }

 if( VAR_8->client->ps.powerups[VAR_2] ) {
  FUNC_0( VAR_5 );
 } else if( VAR_8->client->ps.powerups[VAR_0] ) {
  FUNC_0( VAR_3 );
 } else if( VAR_8->client->ps.powerups[VAR_1] ) {
  FUNC_0( VAR_4 );
 }

 FUNC_1( VAR_8->client->ps.powerups, 0, sizeof( VAR_8->client->ps.powerups ) );
}
