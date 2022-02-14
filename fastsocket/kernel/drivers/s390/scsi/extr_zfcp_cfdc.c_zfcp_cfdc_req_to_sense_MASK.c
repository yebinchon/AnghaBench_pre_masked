
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union fsf_status_qual {int dummy; } fsf_status_qual ;
struct zfcp_fsf_req {TYPE_4__* qtcb; } ;
struct zfcp_cfdc_data {int payloads; int fsf_status_qual; int fsf_status; } ;
struct TYPE_5__ {int els; } ;
struct TYPE_6__ {TYPE_1__ support; } ;
struct TYPE_7__ {int fsf_status_qual; int fsf_status; } ;
struct TYPE_8__ {TYPE_2__ bottom; TYPE_3__ header; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(struct zfcp_cfdc_data *VAR_0,
       struct zfcp_fsf_req *VAR_1)
{
 VAR_0->fsf_status = VAR_1->qtcb->header.fsf_status;
 FUNC_0(&VAR_0->fsf_status_qual, &VAR_1->qtcb->header.fsf_status_qual,
        sizeof(union fsf_status_qual));
 FUNC_0(&VAR_0->payloads, &VAR_1->qtcb->bottom.support.els,
        sizeof(VAR_1->qtcb->bottom.support.els));
}
