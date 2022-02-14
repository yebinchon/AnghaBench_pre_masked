
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int playerState_t ;
struct TYPE_5__ {TYPE_1__* client; int inuse; } ;
typedef TYPE_2__ gentity_t ;
struct TYPE_4__ {int ps; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1( int VAR_3, playerState_t *VAR_4 ) {
 gentity_t *VAR_5;

 VAR_5 = &VAR_0[VAR_3];
 if ( !VAR_5->inuse ) {
  return VAR_1;
 }
 if ( !VAR_5->client ) {
  return VAR_1;
 }

 FUNC_0( VAR_4, &VAR_5->client->ps, sizeof(playerState_t) );
 return VAR_2;
}
