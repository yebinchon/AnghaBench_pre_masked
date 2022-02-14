
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmcraid_ioarcb {int * cdb; int request_type; int resource_handle; int ioarcb_bus_addr; } ;
struct pmcraid_cmd {TYPE_1__* ioa_cb; } ;
typedef int ioarcb_addr ;
typedef int __be64 ;
struct TYPE_2__ {struct pmcraid_ioarcb ioarcb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(
 struct pmcraid_cmd *VAR_3,
 struct pmcraid_cmd *VAR_4
)
{
 struct pmcraid_ioarcb *VAR_5 = &VAR_3->ioa_cb->ioarcb;
 __be64 VAR_6 = VAR_4->ioa_cb->ioarcb.ioarcb_bus_addr;




 VAR_5->resource_handle = VAR_4->ioa_cb->ioarcb.resource_handle;
 VAR_5->request_type = VAR_2;
 FUNC_2(VAR_5->cdb, 0, VAR_1);
 VAR_5->cdb[0] = VAR_0;





 VAR_6 = FUNC_0(VAR_6);
 FUNC_1(&(VAR_5->cdb[2]), &VAR_6, sizeof(VAR_6));
}
