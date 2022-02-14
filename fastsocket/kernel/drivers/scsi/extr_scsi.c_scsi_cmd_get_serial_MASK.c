
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ serial_number; } ;
struct Scsi_Host {int cmd_serial_number; } ;



__attribute__((used)) static inline void FUNC_0(struct Scsi_Host *VAR_0, struct scsi_cmnd *VAR_1)
{
 VAR_1->serial_number = VAR_0->cmd_serial_number++;
 if (VAR_1->serial_number == 0)
  VAR_1->serial_number = VAR_0->cmd_serial_number++;
}
