
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int * vec3_t ;
typedef int qboolean ;
struct TYPE_19__ {int * trBase; } ;
struct TYPE_16__ {int * trBase; } ;
struct TYPE_20__ {int eFlags; int groundEntityNum; int number; TYPE_5__ apos; TYPE_2__ pos; } ;
struct TYPE_15__ {int * currentOrigin; } ;
struct TYPE_21__ {TYPE_6__ s; TYPE_4__* client; TYPE_1__ r; } ;
typedef TYPE_7__ gentity_t ;
struct TYPE_22__ {int * angles; int * origin; int deltayaw; TYPE_7__* ent; } ;
struct TYPE_17__ {int * origin; int * delta_angles; } ;
struct TYPE_18__ {TYPE_3__ ps; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int **) ;
 TYPE_7__* FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (int **,int **) ;
 size_t VAR_1 ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int *) ;
 size_t VAR_2 ;
 TYPE_9__* VAR_3 ;
 TYPE_9__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_7__*) ;

qboolean FUNC_10( gentity_t *VAR_7, gentity_t *VAR_8, vec3_t VAR_9, vec3_t VAR_10 ) {
 vec3_t VAR_11[3], VAR_12[3];
 vec3_t VAR_13, VAR_14, VAR_15;
 gentity_t *VAR_16;



 if ( ( VAR_8->s.eFlags & VAR_0 ) &&
  VAR_7->s.groundEntityNum != VAR_8->s.number ) {
  return VAR_5;
 }


 if (VAR_4 > &VAR_3[VAR_1]) {
  FUNC_2( "pushed_p > &pushed[MAX_GENTITIES]" );
 }
 VAR_4->ent = VAR_7;
 FUNC_7 (VAR_7->s.pos.trBase, VAR_4->origin);
 FUNC_7 (VAR_7->s.apos.trBase, VAR_4->angles);
 if ( VAR_7->client ) {
  VAR_4->deltayaw = VAR_7->client->ps.delta_angles[VAR_2];
  FUNC_7 (VAR_7->client->ps.origin, VAR_4->origin);
 }
 VAR_4++;



 FUNC_1( VAR_10, VAR_12 );
 FUNC_5( VAR_12, VAR_11 );
 if ( VAR_7->client ) {
  FUNC_8 (VAR_7->client->ps.origin, VAR_8->r.currentOrigin, VAR_13);
 }
 else {
  FUNC_8 (VAR_7->s.pos.trBase, VAR_8->r.currentOrigin, VAR_13);
 }
 FUNC_7( VAR_13, VAR_14 );
 FUNC_3( VAR_14, VAR_11 );
 FUNC_8 (VAR_14, VAR_13, VAR_15);

 FUNC_6 (VAR_7->s.pos.trBase, VAR_9, VAR_7->s.pos.trBase);
 FUNC_6 (VAR_7->s.pos.trBase, VAR_15, VAR_7->s.pos.trBase);
 if ( VAR_7->client ) {
  FUNC_6 (VAR_7->client->ps.origin, VAR_9, VAR_7->client->ps.origin);
  FUNC_6 (VAR_7->client->ps.origin, VAR_15, VAR_7->client->ps.origin);

  VAR_7->client->ps.delta_angles[VAR_2] += FUNC_0(VAR_10[VAR_2]);
 }


 if ( VAR_7->s.groundEntityNum != VAR_8->s.number ) {
  VAR_7->s.groundEntityNum = -1;
 }

 VAR_16 = FUNC_4( VAR_7 );
 if (!VAR_16) {

  if ( VAR_7->client ) {
   FUNC_7( VAR_7->client->ps.origin, VAR_7->r.currentOrigin );
  } else {
   FUNC_7( VAR_7->s.pos.trBase, VAR_7->r.currentOrigin );
  }
  FUNC_9 (VAR_7);
  return VAR_6;
 }




 FUNC_7( (VAR_4-1)->origin, VAR_7->s.pos.trBase);
 if ( VAR_7->client ) {
  FUNC_7( (VAR_4-1)->origin, VAR_7->client->ps.origin);
 }
 FUNC_7( (VAR_4-1)->angles, VAR_7->s.apos.trBase );
 VAR_16 = FUNC_4 (VAR_7);
 if ( !VAR_16 ) {
  VAR_7->s.groundEntityNum = -1;
  VAR_4--;
  return VAR_6;
 }


 return VAR_5;
}
