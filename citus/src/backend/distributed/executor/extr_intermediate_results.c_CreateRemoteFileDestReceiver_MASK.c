
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mydest; int rDestroy; int rShutdown; int rStartup; int receiveSlot; } ;
struct TYPE_4__ {char* resultId; int writeLocalFile; int memoryContext; int * initialNodeList; int * executorState; TYPE_1__ pub; } ;
typedef TYPE_2__ RemoteFileDestReceiver ;
typedef int List ;
typedef int EState ;
typedef int DestReceiver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;

DestReceiver *
FUNC_1(char *VAR_6, EState *VAR_7,
        List *VAR_8, bool VAR_9)
{
 RemoteFileDestReceiver *VAR_10 = ((void*)0);

 VAR_10 = (RemoteFileDestReceiver *) FUNC_0(sizeof(RemoteFileDestReceiver));


 VAR_10->pub.receiveSlot = VAR_3;
 VAR_10->pub.rStartup = VAR_5;
 VAR_10->pub.rShutdown = VAR_4;
 VAR_10->pub.rDestroy = VAR_2;
 VAR_10->pub.mydest = VAR_1;


 VAR_10->resultId = VAR_6;
 VAR_10->executorState = VAR_7;
 VAR_10->initialNodeList = VAR_8;
 VAR_10->memoryContext = VAR_0;
 VAR_10->writeLocalFile = VAR_9;

 return (DestReceiver *) VAR_10;
}
