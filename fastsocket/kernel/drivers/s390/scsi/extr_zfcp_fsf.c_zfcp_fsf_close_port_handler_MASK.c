
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_port {int adapter; } ;
struct zfcp_fsf_req {int status; TYPE_2__* qtcb; struct zfcp_port* data; } ;
struct TYPE_3__ {int fsf_status; } ;
struct TYPE_4__ {TYPE_1__ header; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,struct zfcp_fsf_req*) ;
 int FUNC_1 (struct zfcp_port*,char*,struct zfcp_fsf_req*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct zfcp_fsf_req *VAR_3)
{
 struct zfcp_port *VAR_4 = VAR_3->data;

 if (VAR_3->status & VAR_2)
  return;

 switch (VAR_3->qtcb->header.fsf_status) {
 case 128:
  FUNC_0(VAR_4->adapter, 0, "fscph_1", VAR_3);
  VAR_3->status |= VAR_2;
  break;
 case 130:
  break;
 case 129:
  FUNC_1(VAR_4, "fscph_2", VAR_3,
         VAR_1,
         VAR_0);
  break;
 }
}
