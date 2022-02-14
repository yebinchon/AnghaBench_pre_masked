
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int SaveCfgLock; int ConfigRevision; scalar_t__ BackupConfigOnlyWhenModified; int * CfgRw; scalar_t__ NoMoreSave; } ;
typedef TYPE_1__ SERVER ;
typedef int FOLDER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

UINT FUNC_6(SERVER *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (VAR_1->CfgRw == ((void*)0))
 {
  return 0;
 }

 if (VAR_1->NoMoreSave)
 {
  return 0;
 }

 FUNC_2(VAR_1->SaveCfgLock);
 {
  FOLDER *VAR_3;

  FUNC_1("save: SiWriteConfigurationToCfg() start.\n");
  VAR_3 = FUNC_4(VAR_1);
  FUNC_1("save: SiWriteConfigurationToCfg() finished.\n");

  FUNC_1("save: SaveCfgRw() start.\n");
  VAR_2 = FUNC_3(VAR_1->CfgRw, VAR_3, VAR_1->BackupConfigOnlyWhenModified ? VAR_1->ConfigRevision : VAR_0);
  FUNC_1("save: SaveCfgRw() finished.\n");

  FUNC_1("save: CfgDeleteFolder() start.\n");
  FUNC_0(VAR_3);
  FUNC_1("save: CfgDeleteFolder() finished.\n");
 }
 FUNC_5(VAR_1->SaveCfgLock);

 return VAR_2;
}
