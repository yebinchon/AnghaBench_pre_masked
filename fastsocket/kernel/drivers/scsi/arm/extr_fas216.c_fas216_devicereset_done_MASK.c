
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int dummy; } ;
struct TYPE_4__ {int rst_dev_status; int eh_wait; int * rstSCpnt; } ;
typedef TYPE_1__ FAS216_Info ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(FAS216_Info *VAR_1, struct scsi_cmnd *VAR_2,
        unsigned int VAR_3)
{
 FUNC_0(VAR_1, VAR_0, "fas216 device reset complete");

 VAR_1->rstSCpnt = ((void*)0);
 VAR_1->rst_dev_status = 1;
 FUNC_1(&VAR_1->eh_wait);
}
