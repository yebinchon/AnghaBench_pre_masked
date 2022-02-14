
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_6__ {int msgout_len; int * msgoutbuf; } ;
typedef TYPE_3__ nsp32_hw_data ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct scsi_cmnd *VAR_1)
{
 nsp32_hw_data *VAR_2 = (nsp32_hw_data *)VAR_1->device->host->hostdata;
 int VAR_3 = VAR_2->msgout_len;

 VAR_2->msgoutbuf[VAR_3] = VAR_0; VAR_3++;
 VAR_2->msgout_len = VAR_3;
}
