
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int codepointLocationColumn; int tokenLocationColumn; int codepointLocationLine; int tokenLocationLine; int codepointLocationByte; int tokenLocationByte; int token; } ;
typedef int Symbol ;
typedef TYPE_1__* JSON_Parser ;



__attribute__((used)) static void FUNC_0(JSON_Parser VAR_0, Symbol VAR_1)
{
   VAR_0->token = VAR_1;
   VAR_0->tokenLocationByte = VAR_0->codepointLocationByte;
   VAR_0->tokenLocationLine = VAR_0->codepointLocationLine;
   VAR_0->tokenLocationColumn = VAR_0->codepointLocationColumn;
}
