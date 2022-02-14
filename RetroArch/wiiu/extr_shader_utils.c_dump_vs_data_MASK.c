
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int size; int uniformBlockCount; int uniformVarCount; int initialValueCount; int loopVarCount; int samplerVarCount; int attribVarCount; TYPE_6__* attribVars; TYPE_5__* samplerVars; TYPE_4__* loopVars; TYPE_3__* initialValues; TYPE_2__* uniformVars; TYPE_1__* uniformBlocks; int mode; } ;
struct TYPE_14__ {int location; int count; int type; int name; } ;
struct TYPE_13__ {int type; int location; int name; } ;
struct TYPE_12__ {int offset; int value; } ;
struct TYPE_11__ {int offset; int * value; } ;
struct TYPE_10__ {int offset; int type; int count; int block; int name; } ;
struct TYPE_9__ {int offset; int size; int name; } ;
typedef TYPE_7__ GX2VertexShader ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(GX2VertexShader* VAR_0)
{

   FUNC_1(VAR_0->size);
   FUNC_3(VAR_0->mode);
   FUNC_1(VAR_0->uniformBlockCount);
   for(int VAR_1 = 0; VAR_1 < VAR_0->uniformBlockCount; VAR_1++)
   {
      FUNC_2(VAR_0->uniformBlocks[VAR_1].name);
      FUNC_1(VAR_0->uniformBlocks[VAR_1].offset);
      FUNC_1(VAR_0->uniformBlocks[VAR_1].size);
   }
   FUNC_1(VAR_0->uniformVarCount);
   for(int VAR_2 = 0; VAR_2 < VAR_0->uniformVarCount; VAR_2++)
   {
      FUNC_2(VAR_0->uniformVars[VAR_2].name);
      FUNC_1(VAR_0->uniformVars[VAR_2].offset);
      FUNC_1(VAR_0->uniformVars[VAR_2].type);
      FUNC_1(VAR_0->uniformVars[VAR_2].count);
      FUNC_1(VAR_0->uniformVars[VAR_2].block);
   }
   FUNC_1(VAR_0->initialValueCount);
   for(int VAR_3 = 0; VAR_3 < VAR_0->initialValueCount; VAR_3++)
   {
      FUNC_1(VAR_0->initialValues[VAR_3].offset);
      FUNC_0(VAR_0->initialValues[VAR_3].value[0]);
      FUNC_0(VAR_0->initialValues[VAR_3].value[1]);
      FUNC_0(VAR_0->initialValues[VAR_3].value[2]);
      FUNC_0(VAR_0->initialValues[VAR_3].value[3]);
   }
   FUNC_1(VAR_0->loopVarCount);
   for(int VAR_4 = 0; VAR_4 < VAR_0->loopVarCount; VAR_4++)
   {
      FUNC_1(VAR_0->loopVars[VAR_4].offset);
      FUNC_3(VAR_0->loopVars[VAR_4].value);
   }
   FUNC_1(VAR_0->samplerVarCount);
   for(int VAR_5 = 0; VAR_5 < VAR_0->samplerVarCount; VAR_5++)
   {
      FUNC_2(VAR_0->samplerVars[VAR_5].name);
      FUNC_1(VAR_0->samplerVars[VAR_5].type);
      FUNC_1(VAR_0->samplerVars[VAR_5].location);
   }

   for(int VAR_6 = 0; VAR_6 < VAR_0->attribVarCount; VAR_6++)
   {
      FUNC_2(VAR_0->attribVars[VAR_6].name);
      FUNC_3(VAR_0->attribVars[VAR_6].type);
      FUNC_1(VAR_0->attribVars[VAR_6].location);
      FUNC_1(VAR_0->attribVars[VAR_6].count);
   }
}
