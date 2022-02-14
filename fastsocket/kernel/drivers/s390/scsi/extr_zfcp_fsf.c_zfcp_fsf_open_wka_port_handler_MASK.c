
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_wka_port {int completion_wq; void* status; int handle; int d_id; } ;
struct zfcp_fsf_req {int status; TYPE_3__* adapter; TYPE_1__* qtcb; struct zfcp_wka_port* data; } ;
struct fsf_qtcb_header {int fsf_status; int port_handle; } ;
struct TYPE_6__ {TYPE_2__* ccw_device; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {struct fsf_qtcb_header header; } ;







 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct zfcp_fsf_req *VAR_3)
{
 struct zfcp_wka_port *VAR_4 = VAR_3->data;
 struct fsf_qtcb_header *VAR_5 = &VAR_3->qtcb->header;

 if (VAR_3->status & VAR_0) {
  VAR_4->status = VAR_1;
  goto out;
 }

 switch (VAR_5->fsf_status) {
 case 129:
  FUNC_0(&VAR_3->adapter->ccw_device->dev,
    "Opening WKA port 0x%x failed\n", VAR_4->d_id);

 case 131:
  VAR_3->status |= VAR_0;

 case 132:
  VAR_4->status = VAR_1;
  break;
 case 130:
  VAR_4->handle = VAR_5->port_handle;

 case 128:
  VAR_4->status = VAR_2;
 }
out:
 FUNC_1(&VAR_4->completion_wq);
}
