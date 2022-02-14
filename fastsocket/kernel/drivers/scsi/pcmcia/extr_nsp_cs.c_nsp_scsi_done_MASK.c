
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; } ;
struct TYPE_6__ {int * CurrentSC; } ;
typedef TYPE_3__ nsp_hw_data ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 int FUNC_0 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_1(struct scsi_cmnd *VAR_0)
{
 nsp_hw_data *VAR_1 = (nsp_hw_data *)VAR_0->device->host->hostdata;

 VAR_1->CurrentSC = ((void*)0);

 VAR_0->scsi_done(VAR_0);
}
