
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_9__ {int Items; } ;
struct TYPE_8__ {TYPE_2__* Parent; scalar_t__ size; scalar_t__ Type; void* Name; int Buf; } ;
typedef TYPE_1__ ITEM ;
typedef TYPE_2__ FOLDER ;


 int FUNC_0 (int ,void*,scalar_t__) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (void*,int ,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 void* FUNC_7 (scalar_t__) ;

ITEM *FUNC_8(FOLDER *VAR_0, char *VAR_1, UINT VAR_2, void *VAR_3, UINT VAR_4)
{
 UINT VAR_5;
 ITEM *VAR_6;




 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0 || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_6(VAR_1) + 1;
 VAR_6 = FUNC_7(sizeof(ITEM));
 VAR_6->Buf = FUNC_3(VAR_4);
 FUNC_0(VAR_6->Buf, VAR_3, VAR_4);
 VAR_6->Name = FUNC_7(VAR_5);
 FUNC_5(VAR_6->Name, 0, VAR_1);
 VAR_6->Type = VAR_2;
 VAR_6->size = VAR_4;
 VAR_6->Parent = VAR_0;


 FUNC_2(VAR_0->Items, VAR_6);

 return VAR_6;
}
