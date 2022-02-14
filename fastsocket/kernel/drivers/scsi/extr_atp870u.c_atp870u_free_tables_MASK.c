
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atp_unit {TYPE_1__** id; int pdev; } ;
struct Scsi_Host {int hostdata; } ;
struct TYPE_2__ {int * prd_table; int prd_bus; } ;


 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct Scsi_Host *VAR_0)
{
 struct atp_unit *VAR_1 = (struct atp_unit *)&VAR_0->hostdata;
 int VAR_2, VAR_3;
 for (VAR_2=0; VAR_2 < 2; VAR_2++) {
  for (VAR_3 = 0; VAR_3 < 16; VAR_3++) {
   if (!VAR_1->id[VAR_2][VAR_3].prd_table)
    continue;
   FUNC_0(VAR_1->pdev, 1024, VAR_1->id[VAR_2][VAR_3].prd_table, VAR_1->id[VAR_2][VAR_3].prd_bus);
   VAR_1->id[VAR_2][VAR_3].prd_table = ((void*)0);
  }
 }
}
