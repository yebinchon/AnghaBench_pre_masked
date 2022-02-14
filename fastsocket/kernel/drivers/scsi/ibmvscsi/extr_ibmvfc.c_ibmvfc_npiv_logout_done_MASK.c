
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ibmvfc_host {int action; int sent; } ;
struct ibmvfc_event {TYPE_3__* xfer_iu; struct ibmvfc_host* vhost; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ common; } ;
struct TYPE_6__ {TYPE_2__ npiv_logout; } ;


 int VAR_0 ;





 int FUNC_0 (struct ibmvfc_host*,char*,int) ;
 int FUNC_1 (struct ibmvfc_event*) ;
 int FUNC_2 (struct ibmvfc_host*) ;
 int FUNC_3 (struct ibmvfc_host*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ibmvfc_event *VAR_1)
{
 struct ibmvfc_host *VAR_2 = VAR_1->vhost;
 u32 VAR_3 = VAR_1->xfer_iu->npiv_logout.common.status;

 FUNC_1(VAR_1);

 switch (VAR_3) {
 case 128:
  if (FUNC_4(&VAR_2->sent) &&
      VAR_2->action == VAR_0) {
   FUNC_3(VAR_2);
   return;
  }
  break;
 case 130:
 case 129:
 case 132:
 case 131:
 default:
  FUNC_0(VAR_2, "NPIV Logout failed. 0x%X\n", VAR_3);
  break;
 }

 FUNC_2(VAR_2);
}
