
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ tagged_supported; struct Scsi_Host* host; } ;
struct Scsi_Host {int can_queue; scalar_t__* hostdata; } ;
typedef int adpt_hba ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device * VAR_1)
{
 struct Scsi_Host *VAR_2 = VAR_1->host;
 adpt_hba* VAR_3;

 VAR_3 = (adpt_hba *) VAR_2->hostdata[0];

 if (VAR_2->can_queue && VAR_1->tagged_supported) {
  FUNC_0(VAR_1, VAR_0,
    VAR_2->can_queue - 1);
 } else {
  FUNC_0(VAR_1, 0, 1);
 }
 return 0;
}
