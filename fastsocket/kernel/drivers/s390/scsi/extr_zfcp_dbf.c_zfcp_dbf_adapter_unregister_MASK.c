
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zfcp_dbf {TYPE_1__* adapter; int rec; int hba; int san; int scsi; } ;
struct TYPE_2__ {int * dbf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct zfcp_dbf*) ;

void FUNC_2(struct zfcp_dbf *VAR_0)
{
 FUNC_0(VAR_0->scsi);
 FUNC_0(VAR_0->san);
 FUNC_0(VAR_0->hba);
 FUNC_0(VAR_0->rec);
 VAR_0->adapter->dbf = ((void*)0);
 FUNC_1(VAR_0);
}
