
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct zfcp_port {int wwnn; scalar_t__ wwpn; TYPE_8__* adapter; int d_id; int status; int handle; } ;
struct zfcp_fsf_req {int status; TYPE_6__* qtcb; TYPE_2__* adapter; struct zfcp_port* data; } ;
struct TYPE_12__ {int * word; } ;
struct fsf_qtcb_header {int fsf_status; int port_handle; TYPE_3__ fsf_status_qual; } ;
struct TYPE_18__ {int wwnn; scalar_t__ wwpn; } ;
struct fsf_plogi {TYPE_9__ serv_param; } ;
struct TYPE_17__ {TYPE_7__* ccw_device; } ;
struct TYPE_16__ {int dev; } ;
struct TYPE_13__ {int els1_length; scalar_t__ els; } ;
struct TYPE_14__ {TYPE_4__ support; } ;
struct TYPE_15__ {TYPE_5__ bottom; struct fsf_qtcb_header header; } ;
struct TYPE_11__ {TYPE_1__* ccw_device; } ;
struct TYPE_10__ {int dev; } ;






 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,char*,unsigned long long,...) ;
 int FUNC_3 (struct zfcp_port*,char*,struct zfcp_fsf_req*) ;
 int FUNC_4 (struct zfcp_port*,struct fsf_plogi*) ;
 int FUNC_5 (struct zfcp_fsf_req*,struct zfcp_port*) ;
 int FUNC_6 (struct zfcp_port*) ;

__attribute__((used)) static void FUNC_7(struct zfcp_fsf_req *VAR_6)
{
 struct zfcp_port *VAR_7 = VAR_6->data;
 struct fsf_qtcb_header *VAR_8 = &VAR_6->qtcb->header;
 struct fsf_plogi *VAR_9;

 if (VAR_6->status & VAR_4)
  goto out;

 switch (VAR_8->fsf_status) {
 case 132:
  break;
 case 136:
  FUNC_5(VAR_6, VAR_7);
  break;
 case 133:
  FUNC_2(&VAR_6->adapter->ccw_device->dev,
    "Not enough FCP adapter resources to open "
    "remote port 0x%016Lx\n",
    (unsigned long long)VAR_7->wwpn);
  FUNC_3(VAR_7, "fsoph_1", VAR_6);
  VAR_6->status |= VAR_4;
  break;
 case 135:
  switch (VAR_8->fsf_status_qual.word[0]) {
  case 131:
  case 129:
  case 130:
   VAR_6->status |= VAR_4;
   break;
  }
  break;
 case 134:
  VAR_7->handle = VAR_8->port_handle;
  FUNC_1(VAR_3 |
    VAR_5, &VAR_7->status);
  FUNC_0(VAR_2 |
                    VAR_1,
                    &VAR_7->status);
  VAR_9 = (struct fsf_plogi *) VAR_6->qtcb->bottom.support.els;
  if (VAR_6->qtcb->bottom.support.els1_length >=
      VAR_0) {
   if (VAR_9->serv_param.wwpn != VAR_7->wwpn) {
    VAR_7->d_id = 0;
    FUNC_2(&VAR_7->adapter->ccw_device->dev,
      "A port opened with WWPN 0x%016Lx "
      "returned data that identifies it as "
      "WWPN 0x%016Lx\n",
      (unsigned long long) VAR_7->wwpn,
      (unsigned long long)
       VAR_9->serv_param.wwpn);
   } else {
    VAR_7->wwnn = VAR_9->serv_param.wwnn;
    FUNC_4(VAR_7, VAR_9);
   }
  }
  break;
 case 128:
  VAR_6->status |= VAR_4;
  break;
 }

out:
 FUNC_6(VAR_7);
}
