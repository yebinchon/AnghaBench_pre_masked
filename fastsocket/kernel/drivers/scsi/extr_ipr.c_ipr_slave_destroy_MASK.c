
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scsi_device {int * hostdata; TYPE_1__* host; } ;
struct ipr_resource_entry {TYPE_5__* sata_port; int * sdev; } ;
struct ipr_ioa_cfg {TYPE_6__* host; } ;
struct TYPE_12__ {int host_lock; } ;
struct TYPE_11__ {TYPE_4__* ap; } ;
struct TYPE_9__ {TYPE_2__* device; } ;
struct TYPE_10__ {TYPE_3__ link; } ;
struct TYPE_8__ {int class; } ;
struct TYPE_7__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct scsi_device *VAR_1)
{
 struct ipr_resource_entry *VAR_2;
 struct ipr_ioa_cfg *VAR_3;
 unsigned long VAR_4 = 0;

 VAR_3 = (struct ipr_ioa_cfg *) VAR_1->host->hostdata;

 FUNC_0(VAR_3->host->host_lock, VAR_4);
 VAR_2 = (struct ipr_resource_entry *) VAR_1->hostdata;
 if (VAR_2) {
  if (VAR_2->sata_port)
   VAR_2->sata_port->ap->link.device[0].class = VAR_0;
  VAR_1->hostdata = ((void*)0);
  VAR_2->sdev = ((void*)0);
  VAR_2->sata_port = ((void*)0);
 }
 FUNC_1(VAR_3->host->host_lock, VAR_4);
}
