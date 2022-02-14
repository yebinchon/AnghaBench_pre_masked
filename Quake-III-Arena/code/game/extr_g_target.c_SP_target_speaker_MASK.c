
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int trBase; } ;
struct TYPE_9__ {int frame; int clientNum; TYPE_2__ pos; int origin; int loopSound; int eventParm; int eType; } ;
struct TYPE_7__ {int svFlags; } ;
struct TYPE_10__ {int wait; int random; int spawnflags; TYPE_3__ s; TYPE_1__ r; int use; int noise_index; } ;
typedef TYPE_4__ gentity_t ;
typedef int buffer ;


 int FUNC_0 (char*,int,char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int*) ;
 int FUNC_4 (char*,char*,char**) ;
 int VAR_1 ;
 int FUNC_5 (char*,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ) ;

void FUNC_10( gentity_t *VAR_4 ) {
 char VAR_5[VAR_1];
 char *VAR_6;

 FUNC_3( "wait", "0", &VAR_4->wait );
 FUNC_3( "random", "0", &VAR_4->random );

 if ( !FUNC_4( "noise", "NOSOUND", &VAR_6 ) ) {
  FUNC_1( "target_speaker without a noise key at %s", FUNC_9( VAR_4->s.origin ) );
 }



 if ( VAR_6[0] == '*' ) {
  VAR_4->spawnflags |= 8;
 }

 if (!FUNC_7( VAR_6, ".wav" )) {
  FUNC_0 (VAR_5, sizeof(VAR_5), "%s.wav", VAR_6 );
 } else {
  FUNC_5( VAR_5, VAR_6, sizeof(VAR_5) );
 }
 VAR_4->noise_index = FUNC_2(VAR_5);


 VAR_4->s.eType = VAR_0;
 VAR_4->s.eventParm = VAR_4->noise_index;
 VAR_4->s.frame = VAR_4->wait * 10;
 VAR_4->s.clientNum = VAR_4->random * 10;



 if ( VAR_4->spawnflags & 1 ) {
  VAR_4->s.loopSound = VAR_4->noise_index;
 }

 VAR_4->use = VAR_3;

 if (VAR_4->spawnflags & 4) {
  VAR_4->r.svFlags |= VAR_2;
 }

 FUNC_6( VAR_4->s.origin, VAR_4->s.pos.trBase );



 FUNC_8( VAR_4 );
}
