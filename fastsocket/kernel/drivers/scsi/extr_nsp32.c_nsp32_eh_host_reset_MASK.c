
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct Scsi_Host {unsigned int io_port; int host_lock; scalar_t__ hostdata; } ;
typedef int nsp32_hw_data ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,struct scsi_cmnd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (unsigned int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct scsi_cmnd *VAR_5)
{
 struct Scsi_Host *VAR_6 = VAR_5->device->host;
 unsigned int VAR_7 = VAR_5->device->host->io_port;
 nsp32_hw_data *VAR_8 = (nsp32_hw_data *)VAR_6->hostdata;

 FUNC_2(VAR_2, "Host Reset");
 FUNC_0(VAR_3, "SCpnt=0x%x", VAR_5);

 FUNC_5(VAR_5->device->host->host_lock);

 FUNC_4(VAR_8);
 FUNC_3(VAR_7, VAR_0, VAR_1);
 FUNC_1(VAR_8);
 FUNC_3(VAR_7, VAR_0, 0);

 FUNC_6(VAR_5->device->host->host_lock);
 return VAR_4;
}
