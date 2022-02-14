
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int FileData; int FileName; } ;
typedef TYPE_1__ RPC_CONFIG ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(PACK *VAR_0, RPC_CONFIG *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, "FileName", VAR_1->FileName);
 FUNC_0(VAR_0, "FileData", VAR_1->FileData, FUNC_2(VAR_1->FileData));
}
