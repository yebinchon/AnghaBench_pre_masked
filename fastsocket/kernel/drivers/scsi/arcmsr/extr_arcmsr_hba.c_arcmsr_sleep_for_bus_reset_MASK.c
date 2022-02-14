
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;

int FUNC_1(struct scsi_cmnd *VAR_1)
{
  struct Scsi_Host *VAR_2 = ((void*)0);
  int VAR_3, VAR_4;
  VAR_2 = VAR_1->device->host;
  VAR_4 = VAR_0 / 10;
  if (VAR_4 > 0) {
   for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
    FUNC_0(10000);
   }
  }

  VAR_4 = VAR_0 % 10;
  if (VAR_4 > 0) {
   FUNC_0(VAR_4*1000);
  }
  return 0;
}
