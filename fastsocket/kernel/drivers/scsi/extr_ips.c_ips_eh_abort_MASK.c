
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct Scsi_Host {int host_lock; scalar_t__ hostdata; } ;
struct TYPE_9__ {TYPE_3__* head; } ;
struct TYPE_7__ {int scb_waitlist; TYPE_4__ copp_waitlist; int active; } ;
typedef TYPE_2__ ips_ha_t ;
struct TYPE_8__ {struct TYPE_8__* next; struct scsi_cmnd* scsi_cmd; } ;
typedef TYPE_3__ ips_copp_wait_item_t ;
struct TYPE_6__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *,struct scsi_cmnd*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct scsi_cmnd *VAR_2)
{
 ips_ha_t *VAR_3;
 ips_copp_wait_item_t *VAR_4;
 int VAR_5;
 struct Scsi_Host *VAR_6;

 FUNC_0("ips_eh_abort", 1);

 if (!VAR_2)
  return (VAR_0);

 VAR_6 = VAR_2->device->host;
 VAR_3 = (ips_ha_t *) VAR_2->device->host->hostdata;

 if (!VAR_3)
  return (VAR_0);

 if (!VAR_3->active)
  return (VAR_0);

 FUNC_3(VAR_6->host_lock);


 VAR_4 = VAR_3->copp_waitlist.head;
 while ((VAR_4) && (VAR_4->scsi_cmd != VAR_2))
  VAR_4 = VAR_4->next;

 if (VAR_4) {

  FUNC_1(&VAR_3->copp_waitlist, VAR_4);
  VAR_5 = (VAR_1);


 } else if (FUNC_2(&VAR_3->scb_waitlist, VAR_2)) {

  VAR_5 = (VAR_1);
 } else {

  VAR_5 = (VAR_0);
 }

 FUNC_4(VAR_6->host_lock);
 return VAR_5;
}
