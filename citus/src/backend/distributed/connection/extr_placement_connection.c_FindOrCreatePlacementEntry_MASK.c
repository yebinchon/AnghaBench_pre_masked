
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {int hasSecondaryConnections; TYPE_2__* primaryConnection; } ;
struct TYPE_15__ {int failed; int hasSecondaryConnections; TYPE_2__* primaryConnection; TYPE_6__* colocatedEntry; } ;
struct TYPE_14__ {int representativeValue; int colocationGroupId; int nodeId; int placementId; } ;
struct TYPE_13__ {int representativeValue; int colocationGroupId; } ;
struct TYPE_12__ {scalar_t__ partitionMethod; int representativeValue; int colocationGroupId; int nodeId; int placementId; } ;
typedef TYPE_1__ ShardPlacement ;
typedef TYPE_2__ ConnectionReference ;
typedef TYPE_3__ ConnectionPlacementHashKey ;
typedef TYPE_4__ ConnectionPlacementHashEntry ;
typedef TYPE_3__ ColocatedPlacementsHashKey ;
typedef TYPE_6__ ColocatedPlacementsHashEntry ;


 int FUNC_0 (TYPE_4__*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int) ;
 int VAR_5 ;
 void* FUNC_2 (int ,TYPE_3__*,int ,int*) ;

__attribute__((used)) static ConnectionPlacementHashEntry *
FUNC_3(ShardPlacement *VAR_6)
{
 ConnectionPlacementHashKey VAR_7;
 ConnectionPlacementHashEntry *VAR_8 = ((void*)0);
 bool VAR_9 = 0;

 VAR_7.placementId = VAR_6->placementId;

 VAR_8 = FUNC_2(VAR_1, &VAR_7, VAR_4, &VAR_9);
 if (!VAR_9)
 {

  VAR_8->failed = 0;
  VAR_8->primaryConnection = ((void*)0);
  VAR_8->hasSecondaryConnections = 0;
  VAR_8->colocatedEntry = ((void*)0);

  if (VAR_6->partitionMethod == VAR_2 ||
   VAR_6->partitionMethod == VAR_3)
  {
   ColocatedPlacementsHashKey VAR_10;
   ColocatedPlacementsHashEntry *VAR_11 = ((void*)0);

   VAR_10.nodeId = VAR_6->nodeId;
   VAR_10.colocationGroupId = VAR_6->colocationGroupId;
   VAR_10.representativeValue = VAR_6->representativeValue;


   VAR_11 = FUNC_2(VAR_0, &VAR_10, VAR_4,
           &VAR_9);
   if (!VAR_9)
   {
    void *VAR_12 = FUNC_1(VAR_5,
               sizeof(ConnectionReference));

    ConnectionReference *VAR_13 = (ConnectionReference *) VAR_12;






    VAR_13->colocationGroupId = VAR_6->colocationGroupId;
    VAR_13->representativeValue = VAR_6->representativeValue;





    VAR_11->primaryConnection = VAR_13;

    VAR_11->hasSecondaryConnections = 0;
   }





   VAR_8->primaryConnection = VAR_11->primaryConnection;
   VAR_8->colocatedEntry = VAR_11;
  }
  else
  {
   void *VAR_14 = FUNC_1(VAR_5,
              sizeof(ConnectionReference));

   VAR_8->primaryConnection = (ConnectionReference *) VAR_14;
  }
 }


 FUNC_0(VAR_8, VAR_6);

 return VAR_8;
}
