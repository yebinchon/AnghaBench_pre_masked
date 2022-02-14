
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mydest; int rDestroy; int rShutdown; int rStartup; int receiveSlot; } ;
struct TYPE_4__ {int binaryCopyFormat; int filePath; int memoryContext; int * executorState; TYPE_1__ pub; } ;
typedef TYPE_2__ TaskFileDestReceiver ;
typedef int EState ;
typedef int DestReceiver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static DestReceiver *
FUNC_2(char *VAR_6, EState *VAR_7, bool VAR_8)
{
 TaskFileDestReceiver *VAR_9 = ((void*)0);

 VAR_9 = (TaskFileDestReceiver *) FUNC_0(sizeof(TaskFileDestReceiver));


 VAR_9->pub.receiveSlot = VAR_3;
 VAR_9->pub.rStartup = VAR_5;
 VAR_9->pub.rShutdown = VAR_4;
 VAR_9->pub.rDestroy = VAR_2;
 VAR_9->pub.mydest = VAR_1;


 VAR_9->executorState = VAR_7;
 VAR_9->memoryContext = VAR_0;
 VAR_9->filePath = FUNC_1(VAR_6);
 VAR_9->binaryCopyFormat = VAR_8;

 return (DestReceiver *) VAR_9;
}
