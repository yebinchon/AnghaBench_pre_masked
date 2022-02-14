
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_10__ {int maxs; int mins; } ;
struct TYPE_13__ {TYPE_3__* client; TYPE_1__ r; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_11__ {int origin; } ;
struct TYPE_12__ {TYPE_2__ ps; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_4__*,TYPE_4__*,int *,int *,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_4__* VAR_3 ;
 int FUNC_2 (int ,int ,int*,int) ;

void FUNC_3 (gentity_t *VAR_4) {
 int VAR_5, VAR_6;
 int VAR_7[VAR_1];
 gentity_t *VAR_8;
 vec3_t VAR_9, VAR_10;

 FUNC_1( VAR_4->client->ps.origin, VAR_4->r.mins, VAR_9 );
 FUNC_1( VAR_4->client->ps.origin, VAR_4->r.maxs, VAR_10 );
 VAR_6 = FUNC_2( VAR_9, VAR_10, VAR_7, VAR_1 );

 for (VAR_5=0 ; VAR_5<VAR_6 ; VAR_5++) {
  VAR_8 = &VAR_3[VAR_7[VAR_5]];
  if ( !VAR_8->client ) {
   continue;
  }


  FUNC_0 ( VAR_8, VAR_4, VAR_4, ((void*)0), ((void*)0),
   100000, VAR_0, VAR_2);
 }

}
