
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct srp_event_struct {TYPE_4__* xfer_iu; struct ibmvscsi_host_data* hostdata; } ;
struct ibmvscsi_host_data {int host; int request_limit; scalar_t__ client_migrated; int dev; } ;
struct TYPE_6__ {int opcode; int req_lim_delta; } ;
struct TYPE_5__ {int reason; } ;
struct TYPE_7__ {TYPE_2__ login_rsp; TYPE_1__ login_rej; } ;
struct TYPE_8__ {TYPE_3__ srp; } ;




 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct srp_event_struct *VAR_0)
{
 struct ibmvscsi_host_data *VAR_1 = VAR_0->hostdata;
 switch (VAR_0->xfer_iu->srp.login_rsp.opcode) {
 case 128:
  break;
 case 129:
  FUNC_2(VAR_1->dev, "SRP_LOGIN_REJ reason %u\n",
    VAR_0->xfer_iu->srp.login_rej.reason);

  FUNC_0(&VAR_1->request_limit, -1);
  return;
 default:
  FUNC_1(VAR_1->dev, "Invalid login response typecode 0x%02x!\n",
   VAR_0->xfer_iu->srp.login_rsp.opcode);

  FUNC_0(&VAR_1->request_limit, -1);
  return;
 }

 FUNC_2(VAR_1->dev, "SRP_LOGIN succeeded\n");
 VAR_1->client_migrated = 0;





 FUNC_0(&VAR_1->request_limit,
     VAR_0->xfer_iu->srp.login_rsp.req_lim_delta);


 FUNC_3(VAR_1->host);
}
