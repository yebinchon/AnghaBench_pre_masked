
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct zfcp_port {scalar_t__ wwpn; } ;
struct zfcp_fsf_req {int status; TYPE_4__* adapter; TYPE_2__* qtcb; } ;
struct TYPE_5__ {int * halfword; } ;
struct fsf_qtcb_header {TYPE_1__ fsf_status_qual; } ;
struct TYPE_8__ {TYPE_3__* ccw_device; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {struct fsf_qtcb_header header; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned long long) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (struct zfcp_port*,char*,struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_3(struct zfcp_fsf_req *VAR_1,
     struct zfcp_port *VAR_2)
{
 struct fsf_qtcb_header *VAR_3 = &VAR_1->qtcb->header;
 FUNC_0(&VAR_1->adapter->ccw_device->dev,
   "Access denied to port 0x%016Lx\n",
   (unsigned long long)VAR_2->wwpn);
 FUNC_1(VAR_1->adapter, VAR_3->fsf_status_qual.halfword[0]);
 FUNC_1(VAR_1->adapter, VAR_3->fsf_status_qual.halfword[1]);
 FUNC_2(VAR_2, "fspad_1", VAR_1);
 VAR_1->status |= VAR_0;
}
