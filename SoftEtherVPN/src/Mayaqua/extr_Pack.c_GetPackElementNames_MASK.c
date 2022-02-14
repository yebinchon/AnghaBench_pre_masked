
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_9__ {int name; } ;
struct TYPE_8__ {int elements; } ;
struct TYPE_7__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ PACK ;
typedef TYPE_3__ ELEMENT ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;

TOKEN_LIST *FUNC_4(PACK *VAR_0)
{
 TOKEN_LIST *VAR_1;
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_3(sizeof(TOKEN_LIST));

 VAR_1->NumTokens = FUNC_2(VAR_0->elements);
 VAR_1->Token = FUNC_3(sizeof(char *) * VAR_1->NumTokens);

 for (VAR_2 = 0;VAR_2 < VAR_1->NumTokens;VAR_2++)
 {
  ELEMENT *VAR_3 = FUNC_1(VAR_0->elements, VAR_2);

  VAR_1->Token[VAR_2] = FUNC_0(VAR_3->name);
 }

 return VAR_1;
}
