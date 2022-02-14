
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ eType; scalar_t__ event; } ;
struct TYPE_19__ {int linked; } ;
struct TYPE_21__ {scalar_t__ eventTime; int classname; scalar_t__ inuse; TYPE_4__ s; scalar_t__ physicsObject; scalar_t__ neverFree; TYPE_3__ r; scalar_t__ freeAfterEvent; scalar_t__ unlinkAfterEvent; TYPE_2__* client; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_23__ {scalar_t__ integer; } ;
struct TYPE_22__ {int previousTime; int time; int num_entities; int maxclients; int framenum; scalar_t__ restarted; } ;
struct TYPE_17__ {scalar_t__ externalEvent; } ;
struct TYPE_18__ {TYPE_1__ ps; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_5__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__* VAR_8 ;
 TYPE_8__ VAR_9 ;
 TYPE_7__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 () ;
 int FUNC_17 (TYPE_5__*) ;

void FUNC_18( int VAR_12 ) {
 int VAR_13;
 gentity_t *VAR_14;
 int VAR_15;
int VAR_16, VAR_17;


 if ( VAR_10.restarted ) {
  return;
 }

 VAR_10.framenum++;
 VAR_10.previousTime = VAR_10.time;
 VAR_10.time = VAR_12;
 VAR_15 = VAR_10.time - VAR_10.previousTime;


 FUNC_14();




 VAR_16 = FUNC_16();
 VAR_14 = &VAR_8[0];
 for (VAR_13=0 ; VAR_13<VAR_10.num_entities ; VAR_13++, VAR_14++) {
  if ( !VAR_14->inuse ) {
   continue;
  }


  if ( VAR_10.time - VAR_14->eventTime > VAR_3 ) {
   if ( VAR_14->s.event ) {
    VAR_14->s.event = 0;
    if ( VAR_14->client ) {
     VAR_14->client->ps.externalEvent = 0;



    }
   }
   if ( VAR_14->freeAfterEvent ) {

    FUNC_7( VAR_14 );
    continue;
   } else if ( VAR_14->unlinkAfterEvent ) {

    VAR_14->unlinkAfterEvent = VAR_11;
    FUNC_17( VAR_14 );
   }
  }


  if ( VAR_14->freeAfterEvent ) {
   continue;
  }

  if ( !VAR_14->r.linked && VAR_14->neverFree ) {
   continue;
  }

  if ( VAR_14->s.eType == VAR_1 ) {
   FUNC_11( VAR_14 );
   continue;
  }

  if ( VAR_14->s.eType == VAR_0 || VAR_14->physicsObject ) {
   FUNC_10( VAR_14 );
   continue;
  }

  if ( VAR_14->s.eType == VAR_2 ) {
   FUNC_12( VAR_14 );
   continue;
  }

  if ( VAR_13 < VAR_4 ) {
   FUNC_9( VAR_14 );
   continue;
  }

  FUNC_13( VAR_14 );
 }
VAR_17 = FUNC_16();

VAR_16 = FUNC_16();

 VAR_14 = &VAR_8[0];
 for (VAR_13=0 ; VAR_13 < VAR_10.maxclients ; VAR_13++, VAR_14++ ) {
  if ( VAR_14->inuse ) {
   FUNC_6( VAR_14 );
  }
 }
VAR_17 = FUNC_16();


 FUNC_4();


 FUNC_1();


 FUNC_2();


 FUNC_5();


 FUNC_3( VAR_7 );
 FUNC_3( VAR_6 );


 FUNC_0();

 if (VAR_9.integer) {
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   FUNC_8("%4i: %s\n", VAR_13, VAR_8[VAR_13].classname);
  }
  FUNC_15("g_listEntity", "0");
 }
}
