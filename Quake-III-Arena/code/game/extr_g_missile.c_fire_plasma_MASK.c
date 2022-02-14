
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_11__ {int currentOrigin; int ownerNum; int svFlags; } ;
struct TYPE_9__ {int trDelta; int trBase; scalar_t__ trTime; int trType; } ;
struct TYPE_10__ {TYPE_1__ pos; int number; int weapon; int eType; } ;
struct TYPE_12__ {char* classname; int damage; int splashDamage; int splashRadius; TYPE_3__ r; TYPE_2__ s; int * target_ent; int clipmask; int splashMethodOfDeath; int methodOfDeath; struct TYPE_12__* parent; int think; scalar_t__ nextthink; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_13__ {scalar_t__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int VAR_8 ;
 TYPE_5__ VAR_9 ;

gentity_t *FUNC_5 (gentity_t *VAR_10, vec3_t VAR_11, vec3_t VAR_12) {
 gentity_t *VAR_13;

 FUNC_3 (VAR_12);

 VAR_13 = FUNC_0();
 VAR_13->classname = "plasma";
 VAR_13->nextthink = VAR_9.time + 10000;
 VAR_13->think = VAR_1;
 VAR_13->s.eType = VAR_0;
 VAR_13->r.svFlags = VAR_6;
 VAR_13->s.weapon = VAR_8;
 VAR_13->r.ownerNum = VAR_10->s.number;
 VAR_13->parent = VAR_10;
 VAR_13->damage = 20;
 VAR_13->splashDamage = 15;
 VAR_13->splashRadius = 20;
 VAR_13->methodOfDeath = VAR_4;
 VAR_13->splashMethodOfDeath = VAR_5;
 VAR_13->clipmask = VAR_2;
 VAR_13->target_ent = ((void*)0);

 VAR_13->s.pos.trType = VAR_7;
 VAR_13->s.pos.trTime = VAR_9.time - VAR_3;
 FUNC_2( VAR_11, VAR_13->s.pos.trBase );
 FUNC_4( VAR_12, 2000, VAR_13->s.pos.trDelta );
 FUNC_1( VAR_13->s.pos.trDelta );

 FUNC_2 (VAR_11, VAR_13->r.currentOrigin);

 return VAR_13;
}
