
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct zfcp_unit {TYPE_2__* port; scalar_t__ fcp_lun; } ;
struct zfcp_fsf_req {int status; TYPE_5__* adapter; TYPE_4__* qtcb; } ;
struct TYPE_8__ {int * halfword; } ;
struct fsf_qtcb_header {TYPE_3__ fsf_status_qual; } ;
struct TYPE_10__ {TYPE_1__* ccw_device; } ;
struct TYPE_9__ {struct fsf_qtcb_header header; } ;
struct TYPE_7__ {scalar_t__ wwpn; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned long long,unsigned long long) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (struct zfcp_unit*,char*,struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_3(struct zfcp_fsf_req *VAR_1,
     struct zfcp_unit *VAR_2)
{
 struct fsf_qtcb_header *VAR_3 = &VAR_1->qtcb->header;
 FUNC_0(&VAR_1->adapter->ccw_device->dev,
   "Access denied to unit 0x%016Lx on port 0x%016Lx\n",
   (unsigned long long)VAR_2->fcp_lun,
   (unsigned long long)VAR_2->port->wwpn);
 FUNC_1(VAR_1->adapter, VAR_3->fsf_status_qual.halfword[0]);
 FUNC_1(VAR_1->adapter, VAR_3->fsf_status_qual.halfword[1]);
 FUNC_2(VAR_2, "fsuad_1", VAR_1);
 VAR_1->status |= VAR_0;
}
