
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int SERVER ;
typedef int FOLDER ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(SERVER *VAR_1, FOLDER *VAR_2)
{
 TOKEN_LIST *VAR_3;
 UINT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }
 VAR_3 = FUNC_0(VAR_2);

 for (VAR_4 = 0;VAR_4 < VAR_3->NumTokens;VAR_4++)
 {
  char *VAR_5 = VAR_3->Token[VAR_4];

  FUNC_5(VAR_1, FUNC_2(VAR_2, VAR_5));
 }

 FUNC_3(VAR_3);
}
