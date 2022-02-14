
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ExpireDate; } ;
typedef TYPE_1__ WU_CONTEXT ;
struct TYPE_10__ {int * Contexts; } ;
typedef TYPE_2__ WEBUI ;
typedef scalar_t__ UINT ;
struct TYPE_11__ {scalar_t__ Value; struct TYPE_11__* Name; } ;
typedef TYPE_3__ STRMAP_ENTRY ;
typedef int LIST ;


 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static void FUNC_11(WEBUI *VAR_0)
{
 LIST *VAR_1 = FUNC_6(((void*)0));
 UINT VAR_2;

 FUNC_5(VAR_0->Contexts);

 for(VAR_2=0; VAR_2<FUNC_4(VAR_0->Contexts); VAR_2++)
 {
  STRMAP_ENTRY *VAR_3 = (STRMAP_ENTRY*)FUNC_3(VAR_0->Contexts, VAR_2);
  WU_CONTEXT *VAR_4 = (WU_CONTEXT*)VAR_3->Value;
  if(VAR_4->ExpireDate < FUNC_8())
  {
   FUNC_0(VAR_1, VAR_3);
  }
 }

 for(VAR_2=0; VAR_2<FUNC_4(VAR_1); VAR_2++)
 {
  STRMAP_ENTRY *VAR_5 = FUNC_3(VAR_1, VAR_2);
  FUNC_1(VAR_0->Contexts, VAR_5);
  FUNC_2(VAR_5->Name);
  FUNC_10(VAR_5->Value);
  FUNC_2(VAR_5);
 }
 FUNC_7(VAR_1);

 FUNC_9(VAR_0->Contexts);
}
