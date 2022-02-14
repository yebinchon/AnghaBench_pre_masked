
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int msg_t ;
struct TYPE_9__ {size_t outgoingSequence; } ;
struct TYPE_10__ {scalar_t__ deltaMessage; scalar_t__ state; scalar_t__ rateDelayed; int name; TYPE_1__ netchan; TYPE_3__* frames; } ;
typedef TYPE_2__ client_t ;
struct TYPE_11__ {scalar_t__ first_entity; int areabytes; int ps; int areabits; } ;
typedef TYPE_3__ clientSnapshot_t ;
struct TYPE_13__ {int integer; } ;
struct TYPE_12__ {scalar_t__ nextSnapshotEntities; scalar_t__ numSnapshotEntities; int snapFlagServerBit; int time; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,int *) ;
 TYPE_5__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;

__attribute__((used)) static void FUNC_6( client_t *VAR_9, msg_t *VAR_10 ) {
 clientSnapshot_t *VAR_11, *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;


 VAR_11 = &VAR_9->frames[ VAR_9->netchan.outgoingSequence & VAR_2 ];


 if ( VAR_9->deltaMessage <= 0 || VAR_9->state != VAR_0 ) {

  VAR_12 = ((void*)0);
  VAR_13 = 0;
 } else if ( VAR_9->netchan.outgoingSequence - VAR_9->deltaMessage
  >= (VAR_1 - 3) ) {

  FUNC_0 ("%s: Delta request from out of date packet.\n", VAR_9->name);
  VAR_12 = ((void*)0);
  VAR_13 = 0;
 } else {

  VAR_12 = &VAR_9->frames[ VAR_9->deltaMessage & VAR_2 ];
  VAR_13 = VAR_9->netchan.outgoingSequence - VAR_9->deltaMessage;


  if ( VAR_12->first_entity <= VAR_8.nextSnapshotEntities - VAR_8.numSnapshotEntities ) {
   FUNC_0 ("%s: Delta request from out of date entities.\n", VAR_9->name);
   VAR_12 = ((void*)0);
   VAR_13 = 0;
  }
 }

 FUNC_1 (VAR_10, VAR_7);







 FUNC_4 (VAR_10, VAR_8.time);


 FUNC_1 (VAR_10, VAR_13);

 VAR_15 = VAR_8.snapFlagServerBit;
 if ( VAR_9->rateDelayed ) {
  VAR_15 |= VAR_4;
 }
 if ( VAR_9->state != VAR_0 ) {
  VAR_15 |= VAR_3;
 }

 FUNC_1 (VAR_10, VAR_15);


 FUNC_1 (VAR_10, VAR_11->areabytes);
 FUNC_2 (VAR_10, VAR_11->areabits, VAR_11->areabytes);


 if ( VAR_12 ) {
  FUNC_3( VAR_10, &VAR_12->ps, &VAR_11->ps );
 } else {
  FUNC_3( VAR_10, ((void*)0), &VAR_11->ps );
 }


 FUNC_5 (VAR_12, VAR_11, VAR_10);


 if ( VAR_5->integer ) {
  for ( VAR_14 = 0 ; VAR_14 < VAR_5->integer ; VAR_14++ ) {
   FUNC_1 (VAR_10, VAR_6);
  }
 }
}
