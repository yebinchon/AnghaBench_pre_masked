
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__* hostdata; } ;
struct NCR_700_Host_Parameters {int pScript; int script; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

int
FUNC_1(struct Scsi_Host *VAR_1)
{
 struct NCR_700_Host_Parameters *VAR_2 =
  (struct NCR_700_Host_Parameters *)VAR_1->hostdata[0];

 FUNC_0(VAR_2->dev, VAR_0,
          VAR_2->script, VAR_2->pScript);
 return 1;
}
