
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_7__ {int internal_done; } ;
struct TYPE_6__ {TYPE_1__* host; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;
typedef TYPE_3__ FAS216_Info ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(struct scsi_cmnd *VAR_0)
{
 FAS216_Info *VAR_1 = (FAS216_Info *)VAR_0->device->host->hostdata;

 FUNC_0(VAR_1);

 VAR_1->internal_done = 1;
}
