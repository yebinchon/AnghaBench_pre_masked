
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zfcp_fsf_req {int status; TYPE_3__* qtcb; } ;
struct fcp_resp_with_ext {int dummy; } ;
struct fcp_resp_rsp_info {scalar_t__ rsp_code; } ;
struct TYPE_4__ {int fcp_rsp; } ;
struct TYPE_5__ {TYPE_1__ io; } ;
struct TYPE_6__ {TYPE_2__ bottom; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct zfcp_fsf_req *VAR_3)
{
 struct fcp_resp_with_ext *VAR_4;
 struct fcp_resp_rsp_info *VAR_5;

 VAR_4 = (struct fcp_resp_with_ext *) &VAR_3->qtcb->bottom.io.fcp_rsp;
 VAR_5 = (struct fcp_resp_rsp_info *) &VAR_4[1];

 if ((VAR_5->rsp_code != VAR_0) ||
      (VAR_3->status & VAR_1))
  VAR_3->status |= VAR_2;
}
