
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_2__* device; } ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int io_port; int host_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct scsi_cmnd *VAR_1)
{
 int VAR_2 = VAR_1->device->host->io_port;

 FUNC_0(FUNC_2("SYM53C500_host_reset called\n"));
 FUNC_3(VAR_1->device->host->host_lock);
 FUNC_1(VAR_2);
 FUNC_4(VAR_1->device->host->host_lock);

 return VAR_0;
}
