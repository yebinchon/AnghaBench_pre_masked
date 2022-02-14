
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scsi_cmnd {int result; TYPE_1__* device; } ;
struct TYPE_9__ {TYPE_2__* vtarget; } ;
typedef TYPE_3__ VirtDevice ;
struct TYPE_11__ {int debug_level; scalar_t__ sas_discovery_quiesce_io; } ;
struct TYPE_10__ {TYPE_5__* ioc; } ;
struct TYPE_8__ {scalar_t__ deleted; } ;
struct TYPE_7__ {int host; TYPE_3__* hostdata; } ;
typedef TYPE_4__ MPT_SCSI_HOST ;
typedef TYPE_5__ MPT_ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct scsi_cmnd*,void (*) (struct scsi_cmnd*)) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 TYPE_4__* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct scsi_cmnd *VAR_3, void (*VAR_4)(struct scsi_cmnd *))
{
 MPT_SCSI_HOST *VAR_5;
 MPT_ADAPTER *VAR_6;
 VirtDevice *VAR_7 = VAR_3->device->hostdata;

 if (!VAR_7 || !VAR_7->vtarget || VAR_7->vtarget->deleted) {
  VAR_3->result = VAR_0 << 16;
  VAR_4(VAR_3);
  return 0;
 }

 VAR_5 = FUNC_2(VAR_3->device->host);
 VAR_6 = VAR_5->ioc;

 if (VAR_6->sas_discovery_quiesce_io)
  return VAR_2;

 if (VAR_6->debug_level & VAR_1)
  FUNC_1(VAR_3);

 return FUNC_0(VAR_3,VAR_4);
}
