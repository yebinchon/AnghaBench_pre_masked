
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ snapshotCounter; } ;
typedef TYPE_2__ svEntity_t ;
struct TYPE_11__ {size_t numSnapshotEntities; int * snapshotEntities; } ;
typedef TYPE_3__ snapshotEntityNumbers_t ;
struct TYPE_9__ {int number; } ;
struct TYPE_12__ {TYPE_1__ s; } ;
typedef TYPE_4__ sharedEntity_t ;
struct TYPE_13__ {scalar_t__ snapshotCounter; } ;


 size_t VAR_0 ;
 TYPE_5__ VAR_1 ;

__attribute__((used)) static void FUNC_0( svEntity_t *VAR_2, sharedEntity_t *VAR_3, snapshotEntityNumbers_t *VAR_4 ) {

 if ( VAR_2->snapshotCounter == VAR_1.snapshotCounter ) {
  return;
 }
 VAR_2->snapshotCounter = VAR_1.snapshotCounter;


 if ( VAR_4->numSnapshotEntities == VAR_0 ) {
  return;
 }

 VAR_4->snapshotEntities[ VAR_4->numSnapshotEntities ] = VAR_3->s.number;
 VAR_4->numSnapshotEntities++;
}
