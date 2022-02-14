
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct zfcp_unit {TYPE_5__* port; scalar_t__ fcp_lun; int status; int handle; } ;
struct zfcp_fsf_req {int status; TYPE_2__* qtcb; struct zfcp_unit* data; struct zfcp_adapter* adapter; } ;
struct zfcp_adapter {int connection_features; int adapter_features; TYPE_4__* ccw_device; } ;
struct fsf_queue_designator {int hla; int cssid; } ;
struct TYPE_9__ {int * word; struct fsf_queue_designator fsf_queue_designator; } ;
struct fsf_qtcb_header {int fsf_status; int lun_handle; TYPE_3__ fsf_status_qual; } ;
struct fsf_qtcb_bottom_support {int lun_access_info; } ;
struct TYPE_11__ {scalar_t__ wwpn; int adapter; } ;
struct TYPE_10__ {int dev; } ;
struct TYPE_7__ {struct fsf_qtcb_bottom_support support; } ;
struct TYPE_8__ {TYPE_1__ bottom; struct fsf_qtcb_header header; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,char*,unsigned long long,unsigned long long) ;
 int FUNC_3 (int *,char*,unsigned long long,unsigned long long) ;
 int FUNC_4 (int *,char*,unsigned long long,unsigned long long,...) ;
 int FUNC_5 (struct zfcp_adapter*,int ) ;
 int FUNC_6 (struct zfcp_adapter*) ;
 int FUNC_7 (int ,int ,char*,struct zfcp_fsf_req*) ;
 int FUNC_8 (TYPE_5__*,char*,struct zfcp_fsf_req*) ;
 int FUNC_9 (struct zfcp_unit*,char*,struct zfcp_fsf_req*) ;
 int FUNC_10 (struct zfcp_unit*,char*,struct zfcp_fsf_req*) ;
 int FUNC_11 (struct zfcp_unit*,int ,char*,struct zfcp_fsf_req*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (struct zfcp_fsf_req*,struct zfcp_unit*) ;

__attribute__((used)) static void FUNC_14(struct zfcp_fsf_req *VAR_10)
{
 struct zfcp_adapter *VAR_11 = VAR_10->adapter;
 struct zfcp_unit *VAR_12 = VAR_10->data;
 struct fsf_qtcb_header *VAR_13 = &VAR_10->qtcb->header;
 struct fsf_qtcb_bottom_support *VAR_14 = &VAR_10->qtcb->bottom.support;
 struct fsf_queue_designator *VAR_15 =
    &VAR_13->fsf_status_qual.fsf_queue_designator;
 int VAR_16, VAR_17;

 if (VAR_10->status & VAR_7)
  return;

 FUNC_0(VAR_5 |
     VAR_4 |
     VAR_9 |
     VAR_8,
     &VAR_12->status);

 switch (VAR_13->fsf_status) {

 case 130:
  FUNC_7(VAR_12->port->adapter, 0, "fsouh_1", VAR_10);

 case 134:
  break;
 case 138:
  FUNC_13(VAR_10, VAR_12);
  FUNC_0(VAR_9, &VAR_12->status);
  FUNC_0(VAR_8, &VAR_12->status);
  break;
 case 131:
  FUNC_8(VAR_12->port, "fsouh_2", VAR_10);
  VAR_10->status |= VAR_7;
  break;
 case 133:
  if (VAR_13->fsf_status_qual.word[0])
   FUNC_4(&VAR_11->ccw_device->dev,
     "LUN 0x%Lx on port 0x%Lx is already in "
     "use by CSS%d, MIF Image ID %x\n",
     (unsigned long long)VAR_12->fcp_lun,
     (unsigned long long)VAR_12->port->wwpn,
     VAR_15->cssid,
     VAR_15->hla);
  else
   FUNC_5(VAR_11,
       VAR_13->fsf_status_qual.word[2]);
  FUNC_9(VAR_12, "fsouh_3", VAR_10);
  FUNC_0(VAR_9, &VAR_12->status);
  FUNC_0(VAR_8, &VAR_12->status);
  VAR_10->status |= VAR_7;
  break;
 case 132:
  FUNC_4(&VAR_11->ccw_device->dev,
    "No handle is available for LUN "
    "0x%016Lx on port 0x%016Lx\n",
    (unsigned long long)VAR_12->fcp_lun,
    (unsigned long long)VAR_12->port->wwpn);
  FUNC_10(VAR_12, "fsouh_4", VAR_10);

 case 135:
  VAR_10->status |= VAR_7;
  break;
 case 137:
  switch (VAR_13->fsf_status_qual.word[0]) {
  case 129:
   FUNC_12(VAR_12->port);

  case 128:
   VAR_10->status |= VAR_7;
   break;
  }
  break;

 case 136:
  VAR_12->handle = VAR_13->lun_handle;
  FUNC_1(VAR_6, &VAR_12->status);

  if (!(VAR_11->connection_features & VAR_1) &&
      (VAR_11->adapter_features & VAR_0) &&
      !FUNC_6(VAR_11)) {
   VAR_16 = (VAR_14->lun_access_info &
     VAR_2);
   VAR_17 = (VAR_14->lun_access_info &
     VAR_3);

   if (!VAR_16)
                  FUNC_1(VAR_9,
      &VAR_12->status);

   if (!VAR_17) {
                  FUNC_1(VAR_8,
      &VAR_12->status);
    FUNC_3(&VAR_11->ccw_device->dev,
      "SCSI device at LUN 0x%016Lx on port "
      "0x%016Lx opened read-only\n",
      (unsigned long long)VAR_12->fcp_lun,
      (unsigned long long)VAR_12->port->wwpn);
          }

          if (VAR_16 && !VAR_17) {
    FUNC_2(&VAR_11->ccw_device->dev,
     "Exclusive read-only access not "
     "supported (unit 0x%016Lx, "
     "port 0x%016Lx)\n",
     (unsigned long long)VAR_12->fcp_lun,
     (unsigned long long)VAR_12->port->wwpn);
    FUNC_10(VAR_12, "fsouh_5", VAR_10);
    VAR_10->status |= VAR_7;
    FUNC_11(VAR_12, 0, "fsouh_6", VAR_10);
          } else if (!VAR_16 && VAR_17) {
    FUNC_2(&VAR_11->ccw_device->dev,
     "Shared read-write access not "
     "supported (unit 0x%016Lx, port "
     "0x%016Lx)\n",
     (unsigned long long)VAR_12->fcp_lun,
     (unsigned long long)VAR_12->port->wwpn);
    FUNC_10(VAR_12, "fsouh_7", VAR_10);
    VAR_10->status |= VAR_7;
    FUNC_11(VAR_12, 0, "fsouh_8", VAR_10);
          }
  }
  break;
 }
}
