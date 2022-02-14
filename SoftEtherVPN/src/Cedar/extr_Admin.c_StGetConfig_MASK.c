
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_18__ {TYPE_2__* Server; } ;
struct TYPE_17__ {scalar_t__ Size; int Buf; } ;
struct TYPE_16__ {int FileData; int FileName; } ;
struct TYPE_15__ {TYPE_1__* CfgRw; } ;
struct TYPE_14__ {char* FileName; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_CONFIG ;
typedef int FOLDER ;
typedef TYPE_4__ BUF ;
typedef TYPE_5__ ADMIN ;


 int FUNC_0 (TYPE_5__*,int *,char*) ;
 int FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_2 ;
 int * FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int,char*) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (scalar_t__) ;

UINT FUNC_10(ADMIN *VAR_3, RPC_CONFIG *VAR_4)
{
 SERVER *VAR_5;

 VAR_2;

 FUNC_5(VAR_4);
 FUNC_8(VAR_4, sizeof(RPC_CONFIG));

 VAR_5 = VAR_3->Server;

 FUNC_0(VAR_3, ((void*)0), "LA_GET_CONFIG");

 if (VAR_5->CfgRw != ((void*)0))
 {
  FOLDER *VAR_6 = FUNC_6(VAR_5);
  BUF *VAR_7 = FUNC_2(VAR_6, 1);

  FUNC_7(VAR_4->FileName, sizeof(VAR_4->FileName), VAR_5->CfgRw->FileName + (VAR_5->CfgRw->FileName[0] == '@' ? 1 : 0));

  VAR_4->FileData = FUNC_9(VAR_7->Size + 1);
  FUNC_3(VAR_4->FileData, VAR_7->Buf, VAR_7->Size);

  FUNC_1(VAR_6);
  FUNC_4(VAR_7);

  return VAR_1;
 }
 else
 {
  return VAR_0;
 }
}
