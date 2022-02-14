
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mydest; int rDestroy; int rShutdown; int rStartup; int receiveSlot; } ;
struct TYPE_5__ {int partitionColumnIndex; int stopOnFailure; char* intermediateResultIdPrefix; int memoryContext; int * executorState; int * columnNameList; int distributedRelationId; TYPE_1__ pub; } ;
typedef int Oid ;
typedef int List ;
typedef int EState ;
typedef TYPE_2__ CitusCopyDestReceiver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;

CitusCopyDestReceiver *
FUNC_1(Oid VAR_6, List *VAR_7, int VAR_8,
       EState *VAR_9, bool VAR_10,
       char *VAR_11)
{
 CitusCopyDestReceiver *VAR_12 = ((void*)0);

 VAR_12 = (CitusCopyDestReceiver *) FUNC_0(sizeof(CitusCopyDestReceiver));


 VAR_12->pub.receiveSlot = VAR_1;
 VAR_12->pub.rStartup = VAR_3;
 VAR_12->pub.rShutdown = VAR_2;
 VAR_12->pub.rDestroy = VAR_0;
 VAR_12->pub.mydest = VAR_5;


 VAR_12->distributedRelationId = VAR_6;
 VAR_12->columnNameList = VAR_7;
 VAR_12->partitionColumnIndex = VAR_8;
 VAR_12->executorState = VAR_9;
 VAR_12->stopOnFailure = VAR_10;
 VAR_12->intermediateResultIdPrefix = VAR_11;
 VAR_12->memoryContext = VAR_4;

 return VAR_12;
}
