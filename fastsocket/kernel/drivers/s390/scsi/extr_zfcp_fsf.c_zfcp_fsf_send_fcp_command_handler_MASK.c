
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct zfcp_unit {TYPE_7__* port; scalar_t__ fcp_lun; } ;
struct zfcp_fsf_req {int status; struct zfcp_unit* unit; TYPE_5__* qtcb; TYPE_2__* adapter; struct zfcp_unit* data; } ;
struct TYPE_15__ {int * word; } ;
struct fsf_qtcb_header {int fsf_status; TYPE_6__ fsf_status_qual; } ;
struct TYPE_16__ {int adapter; scalar_t__ wwpn; } ;
struct TYPE_12__ {int fcp_cmnd_length; int data_direction; } ;
struct TYPE_13__ {TYPE_3__ io; } ;
struct TYPE_14__ {TYPE_4__ bottom; struct fsf_qtcb_header header; } ;
struct TYPE_11__ {TYPE_1__* ccw_device; } ;
struct TYPE_10__ {int dev; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*,struct zfcp_fsf_req*) ;
 int FUNC_3 (int ,int ,char*,struct zfcp_fsf_req*) ;
 int FUNC_4 (TYPE_7__*,char*,struct zfcp_fsf_req*) ;
 int FUNC_5 (TYPE_7__*,int ,char*,struct zfcp_fsf_req*) ;
 int FUNC_6 (struct zfcp_unit*,char*,struct zfcp_fsf_req*) ;
 int FUNC_7 (TYPE_7__*) ;
 int FUNC_8 (struct zfcp_fsf_req*,struct zfcp_unit*) ;
 int FUNC_9 (struct zfcp_fsf_req*) ;
 int FUNC_10 (struct zfcp_fsf_req*) ;
 int FUNC_11 (struct zfcp_fsf_req*) ;
 int FUNC_12 (struct zfcp_unit*) ;

__attribute__((used)) static void FUNC_13(struct zfcp_fsf_req *VAR_3)
{
 struct zfcp_unit *VAR_4;
 struct fsf_qtcb_header *VAR_5 = &VAR_3->qtcb->header;

 if (FUNC_1(VAR_3->status & VAR_2))
  VAR_4 = VAR_3->data;
 else
  VAR_4 = VAR_3->unit;

 if (FUNC_1(VAR_3->status & VAR_1))
  goto skip_fsfstatus;

 switch (VAR_5->fsf_status) {
 case 133:
 case 129:
  FUNC_2(VAR_4->port->adapter, 0, "fssfch1", VAR_3);
  VAR_3->status |= VAR_1;
  break;
 case 134:
 case 131:
  FUNC_5(VAR_4->port, 0, "fssfch2", VAR_3);
  VAR_3->status |= VAR_1;
  break;
 case 128:
  FUNC_9(VAR_3);
  break;
 case 138:
  FUNC_8(VAR_3, VAR_4);
  break;
 case 135:
  FUNC_0(&VAR_3->adapter->ccw_device->dev,
   "Incorrect direction %d, unit 0x%016Lx on port "
   "0x%016Lx closed\n",
   VAR_3->qtcb->bottom.io.data_direction,
   (unsigned long long)VAR_4->fcp_lun,
   (unsigned long long)VAR_4->port->wwpn);
  FUNC_3(VAR_4->port->adapter, 0, "fssfch3",
       VAR_3);
  VAR_3->status |= VAR_1;
  break;
 case 136:
  FUNC_0(&VAR_3->adapter->ccw_device->dev,
   "Incorrect CDB length %d, unit 0x%016Lx on "
   "port 0x%016Lx closed\n",
   VAR_3->qtcb->bottom.io.fcp_cmnd_length,
   (unsigned long long)VAR_4->fcp_lun,
   (unsigned long long)VAR_4->port->wwpn);
  FUNC_3(VAR_4->port->adapter, 0, "fssfch4",
       VAR_3);
  VAR_3->status |= VAR_1;
  break;
 case 130:
  FUNC_4(VAR_4->port, "fssfch5", VAR_3);
  VAR_3->status |= VAR_1;
  break;
 case 132:
  FUNC_6(VAR_4, "fssfch6", VAR_3);
  VAR_3->status |= VAR_1;
  break;
 case 137:
  if (VAR_5->fsf_status_qual.word[0] ==
      VAR_0)
   FUNC_7(VAR_4->port);
  VAR_3->status |= VAR_1;
  break;
 }
skip_fsfstatus:
 if (VAR_3->status & VAR_2)
  FUNC_11(VAR_3);
 else {
  FUNC_10(VAR_3);
  VAR_3->unit = ((void*)0);
  FUNC_12(VAR_4);
 }
}
