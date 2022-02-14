
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_wka_port {int completion_wq; int status; int adapter; } ;
struct zfcp_fsf_req {int status; TYPE_2__* qtcb; struct zfcp_wka_port* data; } ;
struct TYPE_3__ {scalar_t__ fsf_status; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,char*,struct zfcp_fsf_req*) ;

__attribute__((used)) static void FUNC_2(struct zfcp_fsf_req *VAR_3)
{
 struct zfcp_wka_port *VAR_4 = VAR_3->data;

 if (VAR_3->qtcb->header.fsf_status == VAR_0) {
  VAR_3->status |= VAR_1;
  FUNC_1(VAR_4->adapter, 0, "fscwph1", VAR_3);
 }

 VAR_4->status = VAR_2;
 FUNC_0(&VAR_4->completion_wq);
}
