
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int opcode; } ;
struct TYPE_5__ {TYPE_1__ cmd; } ;
struct TYPE_6__ {TYPE_2__ srp; } ;
struct srp_event_struct {TYPE_3__ iu; struct ibmvscsi_host_data* hostdata; } ;
struct ibmvscsi_host_data {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct ibmvscsi_host_data*) ;

__attribute__((used)) static void FUNC_2(struct srp_event_struct *VAR_0)
{
 struct ibmvscsi_host_data *VAR_1 = VAR_0->hostdata;

 FUNC_0(VAR_1->dev, "Command timed out (%x). Resetting connection\n",
  VAR_0->iu.srp.cmd.opcode);

 FUNC_1(VAR_1);
}
