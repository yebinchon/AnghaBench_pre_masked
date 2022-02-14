
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int cursize; } ;
typedef TYPE_3__ msg_t ;
struct TYPE_19__ {scalar_t__ type; } ;
struct TYPE_14__ {size_t outgoingSequence; TYPE_7__ remoteAddress; } ;
struct TYPE_16__ {scalar_t__ nextSnapshotTime; int snapshotMsec; scalar_t__ state; int * downloadName; int rateDelayed; TYPE_2__ netchan; TYPE_1__* frames; } ;
typedef TYPE_4__ client_t ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {scalar_t__ time; } ;
struct TYPE_13__ {scalar_t__ messageSent; int messageAcked; int messageSize; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_7__) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 TYPE_5__ VAR_6 ;

void FUNC_3( msg_t *VAR_7, client_t *VAR_8 ) {
 int VAR_9;


 VAR_8->frames[VAR_8->netchan.outgoingSequence & VAR_2].messageSize = VAR_7->cursize;
 VAR_8->frames[VAR_8->netchan.outgoingSequence & VAR_2].messageSent = VAR_6.time;
 VAR_8->frames[VAR_8->netchan.outgoingSequence & VAR_2].messageAcked = -1;


 FUNC_0( VAR_8, VAR_7 );






 if ( VAR_8->netchan.remoteAddress.type == VAR_1 || (VAR_5->integer && FUNC_2 (VAR_8->netchan.remoteAddress)) ) {
  VAR_8->nextSnapshotTime = VAR_6.time - 1;
  return;
 }


 VAR_9 = FUNC_1( VAR_8, VAR_7->cursize );

 if ( VAR_9 < VAR_8->snapshotMsec ) {

  VAR_9 = VAR_8->snapshotMsec;
  VAR_8->rateDelayed = VAR_3;
 } else {
  VAR_8->rateDelayed = VAR_4;
 }

 VAR_8->nextSnapshotTime = VAR_6.time + VAR_9;


 if ( VAR_8->state != VAR_0 ) {



  if ( !*VAR_8->downloadName && VAR_8->nextSnapshotTime < VAR_6.time + 1000 ) {
   VAR_8->nextSnapshotTime = VAR_6.time + 1000;
  }
 }
}
