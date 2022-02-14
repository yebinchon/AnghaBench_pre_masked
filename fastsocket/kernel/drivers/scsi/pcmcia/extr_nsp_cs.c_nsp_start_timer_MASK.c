
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_6__ {int TimerCount; } ;
typedef TYPE_3__ nsp_hw_data ;
struct TYPE_5__ {TYPE_1__* host; } ;
struct TYPE_4__ {unsigned int io_port; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct scsi_cmnd *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_1->device->host->io_port;
 nsp_hw_data *VAR_4 = (nsp_hw_data *)VAR_1->device->host->hostdata;


 VAR_4->TimerCount = VAR_2;
 FUNC_0(VAR_3, VAR_0, VAR_2);
}
