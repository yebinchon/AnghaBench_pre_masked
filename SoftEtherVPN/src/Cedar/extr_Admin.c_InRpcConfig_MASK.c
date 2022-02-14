
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int FileData; int FileName; } ;
typedef TYPE_1__ RPC_CONFIG ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(RPC_CONFIG *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(RPC_CONFIG));
 FUNC_2(VAR_1, "FileName", VAR_0->FileName, sizeof(VAR_0->FileName));
 VAR_2 = FUNC_1(VAR_1, "FileData");
 VAR_0->FileData = FUNC_4(VAR_2 + 1);
 FUNC_0(VAR_1, "FileData", VAR_0->FileData);
}
