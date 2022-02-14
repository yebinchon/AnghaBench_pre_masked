
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void** vec3_t ;
struct TYPE_9__ {int trBase; } ;
struct TYPE_10__ {void** angles; TYPE_1__ pos; } ;
struct TYPE_13__ {TYPE_4__* client; TYPE_2__ s; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_11__ {void** stats; } ;
struct TYPE_12__ {TYPE_3__ ps; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,void**) ;
 size_t VAR_3 ;
 void* FUNC_1 (void**) ;

void FUNC_2( gentity_t *VAR_4, gentity_t *VAR_5, gentity_t *VAR_6 ) {
 vec3_t VAR_7;
 vec3_t VAR_8;

 if ( VAR_6 && VAR_6 != VAR_4 ) {
  FUNC_0 (VAR_6->s.pos.trBase, VAR_4->s.pos.trBase, VAR_7);
 } else if ( VAR_5 && VAR_5 != VAR_4 ) {
  FUNC_0 (VAR_5->s.pos.trBase, VAR_4->s.pos.trBase, VAR_7);
 } else {
  VAR_4->client->ps.stats[VAR_2] = VAR_4->s.angles[VAR_3];
  return;
 }

 VAR_4->client->ps.stats[VAR_2] = FUNC_1 ( VAR_7 );

 VAR_8[VAR_3] = FUNC_1 ( VAR_7 );
 VAR_8[VAR_0] = 0;
 VAR_8[VAR_1] = 0;
}
