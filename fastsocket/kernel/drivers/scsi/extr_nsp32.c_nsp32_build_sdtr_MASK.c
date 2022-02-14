
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct TYPE_6__ {int msgout_len; unsigned char* msgoutbuf; } ;
typedef TYPE_3__ nsp32_hw_data ;
struct TYPE_5__ {scalar_t__ hostdata; } ;
struct TYPE_4__ {TYPE_2__* host; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;

__attribute__((used)) static void FUNC_0(struct scsi_cmnd *VAR_3,
        unsigned char VAR_4,
        unsigned char VAR_5)
{
 nsp32_hw_data *VAR_6 = (nsp32_hw_data *)VAR_3->device->host->hostdata;
 int VAR_7 = VAR_6->msgout_len;

 VAR_6->msgoutbuf[VAR_7] = VAR_0; VAR_7++;
 VAR_6->msgoutbuf[VAR_7] = VAR_2; VAR_7++;
 VAR_6->msgoutbuf[VAR_7] = VAR_1; VAR_7++;
 VAR_6->msgoutbuf[VAR_7] = VAR_4; VAR_7++;
 VAR_6->msgoutbuf[VAR_7] = VAR_5; VAR_7++;

 VAR_6->msgout_len = VAR_7;
}
