
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int sc_data_direction; TYPE_2__* device; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {struct device* dma_dev; } ;


 int FUNC_0 (struct device*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*) ;

void FUNC_3(struct scsi_cmnd *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  struct device *VAR_1 = VAR_0->device->host->dma_dev;

  FUNC_0(VAR_1, FUNC_2(VAR_0), FUNC_1(VAR_0),
        VAR_0->sc_data_direction);
 }
}
