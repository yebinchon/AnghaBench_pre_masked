
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WU_CONTEXT ;
struct TYPE_6__ {int PageList; int Contexts; scalar_t__ Value; struct TYPE_6__* Name; } ;
typedef TYPE_1__ WEBUI ;
typedef scalar_t__ UINT ;
typedef TYPE_1__ STRMAP_ENTRY ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

bool FUNC_5(WEBUI *VAR_0)
{
 UINT VAR_1;

 if(VAR_0 == ((void*)0))
 {
  return 0;
 }

 for(VAR_1=0; VAR_1<FUNC_2(VAR_0->Contexts); VAR_1++)
 {
  STRMAP_ENTRY *VAR_2 = FUNC_1(VAR_0->Contexts, VAR_1);
  FUNC_0(VAR_2->Name);
  FUNC_4((WU_CONTEXT*)VAR_2->Value);
  FUNC_0(VAR_2);
 }
 FUNC_3(VAR_0->Contexts);

 FUNC_3(VAR_0->PageList);
 FUNC_0(VAR_0);
 return 1;
}
