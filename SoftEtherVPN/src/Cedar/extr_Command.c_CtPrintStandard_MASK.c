
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_10__ {int Rows; int Columns; } ;
struct TYPE_9__ {char* String; } ;
struct TYPE_8__ {char** Strings; } ;
typedef TYPE_1__ CTR ;
typedef TYPE_2__ CTC ;
typedef TYPE_3__ CT ;
typedef int CONSOLE ;


 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,char*,char*) ;
 TYPE_3__* FUNC_2 () ;
 void* FUNC_3 (int ,size_t) ;
 int FUNC_4 (int ) ;

void FUNC_5(CT *VAR_0, CONSOLE *VAR_1)
{
 CT *VAR_2;
 UINT VAR_3, VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_2();
 for (VAR_3 = 0;VAR_3 < FUNC_4(VAR_0->Rows);VAR_3++)
 {
  CTR *VAR_5 = FUNC_3(VAR_0->Rows, VAR_3);

  for (VAR_4 = 0;VAR_4 < FUNC_4(VAR_0->Columns);VAR_4++)
  {
   CTC *VAR_6 = FUNC_3(VAR_0->Columns, VAR_4);

   FUNC_1(VAR_2, VAR_6->String, VAR_5->Strings[VAR_4]);
  }

  if (VAR_3 != (FUNC_4(VAR_0->Rows) - 1))
  {
   FUNC_1(VAR_2, L"---", L"---");
  }
 }

 FUNC_0(VAR_2, VAR_1);
}
