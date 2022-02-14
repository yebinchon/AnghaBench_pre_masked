
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tokenBytesLength; int state; int * arrayItemHandler; int * endArrayHandler; int * startArrayHandler; int * objectMemberHandler; int * endObjectHandler; int * startObjectHandler; int * specialNumberHandler; int * numberHandler; int * stringHandler; int * booleanHandler; int * nullHandler; int * encodingDetectedHandler; int grammarianData; int decoderData; int * pMemberNames; void* maxNumberLength; void* maxStringLength; scalar_t__ tokenBytesUsed; int defaultTokenBytes; int pTokenBytes; scalar_t__ depth; scalar_t__ tokenLocationColumn; scalar_t__ tokenLocationLine; scalar_t__ tokenLocationByte; scalar_t__ codepointLocationColumn; scalar_t__ codepointLocationLine; scalar_t__ codepointLocationByte; scalar_t__ lexerBits; int lexerState; scalar_t__ errorOffset; int error; scalar_t__ tokenAttributes; int token; void* numberEncoding; void* stringEncoding; int inputEncoding; int flags; int * userData; } ;
typedef TYPE_1__* JSON_Parser ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(JSON_Parser VAR_8, int VAR_9)
{
   VAR_8->userData = ((void*)0);
   VAR_8->flags = VAR_4;
   VAR_8->inputEncoding = VAR_2;
   VAR_8->stringEncoding = VAR_1;
   VAR_8->numberEncoding = VAR_1;
   VAR_8->token = VAR_7;
   VAR_8->tokenAttributes = 0;
   VAR_8->error = VAR_0;
   VAR_8->errorOffset = 0;
   VAR_8->lexerState = VAR_3;
   VAR_8->lexerBits = 0;
   VAR_8->codepointLocationByte = 0;
   VAR_8->codepointLocationLine = 0;
   VAR_8->codepointLocationColumn = 0;
   VAR_8->tokenLocationByte = 0;
   VAR_8->tokenLocationLine = 0;
   VAR_8->tokenLocationColumn = 0;
   VAR_8->depth = 0;

   if (!VAR_9)
   {
      VAR_8->pTokenBytes = VAR_8->defaultTokenBytes;
      VAR_8->tokenBytesLength = sizeof(VAR_8->defaultTokenBytes);
   }
   else
   {




   }
   VAR_8->tokenBytesUsed = 0;
   VAR_8->maxStringLength = VAR_6;
   VAR_8->maxNumberLength = VAR_6;
   if (!VAR_9)
      VAR_8->pMemberNames = ((void*)0);
   else
   {
      while (VAR_8->pMemberNames)
         FUNC_2(VAR_8);
   }
   FUNC_0(&VAR_8->decoderData);
   FUNC_1(&VAR_8->grammarianData, VAR_9);
   VAR_8->encodingDetectedHandler = ((void*)0);
   VAR_8->nullHandler = ((void*)0);
   VAR_8->booleanHandler = ((void*)0);
   VAR_8->stringHandler = ((void*)0);
   VAR_8->numberHandler = ((void*)0);
   VAR_8->specialNumberHandler = ((void*)0);
   VAR_8->startObjectHandler = ((void*)0);
   VAR_8->endObjectHandler = ((void*)0);
   VAR_8->objectMemberHandler = ((void*)0);
   VAR_8->startArrayHandler = ((void*)0);
   VAR_8->endArrayHandler = ((void*)0);
   VAR_8->arrayItemHandler = ((void*)0);
   VAR_8->state = VAR_5;
}
