
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct fc_lport {scalar_t__ state; scalar_t__ link_up; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct Scsi_Host*) ;
 unsigned long VAR_5 ;
 struct fc_lport* FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

int FUNC_4(struct scsi_cmnd *VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;
 struct Scsi_Host *VAR_9 = VAR_6->device->host;
 struct fc_lport *VAR_10 = FUNC_1(VAR_9);






 VAR_7 = FUNC_0(VAR_9);
 if (VAR_7 == VAR_4) {
  VAR_8 = VAR_5 + VAR_1 * VAR_2;
  VAR_7 = VAR_0;
  while (FUNC_3(VAR_5, VAR_8)) {
   if ((VAR_10->state == VAR_3) &&
       (VAR_10->link_up)) {
    VAR_7 = VAR_4;
    break;
   }
   FUNC_2(1);
  }
 }

 return VAR_7;
}
