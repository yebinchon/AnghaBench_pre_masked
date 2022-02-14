
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int absmax; int absmin; } ;
struct TYPE_6__ {int origin; int origin2; int angles; } ;
struct TYPE_8__ {int speed; int spawnflags; int use; scalar_t__ nextthink; int think; TYPE_2__ r; TYPE_1__ s; scalar_t__ target; void* noise_index; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_9__ {scalar_t__ time; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 void* FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int,int ) ;
 TYPE_4__ VAR_3 ;

void FUNC_4( gentity_t *VAR_4 ) {
 if (!VAR_4->speed) {
  VAR_4->speed = 1000;
 }
 FUNC_0 (VAR_4->s.angles, VAR_4->s.origin2);
 FUNC_3 (VAR_4->s.origin2, VAR_4->speed, VAR_4->s.origin2);

 if ( VAR_4->spawnflags & 1 ) {
  VAR_4->noise_index = FUNC_1("sound/world/jumppad.wav");
 } else {
  VAR_4->noise_index = FUNC_1("sound/misc/windfly.wav");
 }
 if ( VAR_4->target ) {
  FUNC_2( VAR_4->s.origin, VAR_4->r.absmin );
  FUNC_2( VAR_4->s.origin, VAR_4->r.absmax );
  VAR_4->think = VAR_0;
  VAR_4->nextthink = VAR_3.time + VAR_1;
 }
 VAR_4->use = VAR_2;
}
