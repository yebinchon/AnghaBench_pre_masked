
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int version; int length; int opcode; } ;
struct ibmvfc_npiv_logout_mad {TYPE_2__ common; } ;
struct ibmvfc_host {int dummy; } ;
struct TYPE_3__ {struct ibmvfc_npiv_logout_mad npiv_logout; } ;
struct ibmvfc_event {TYPE_1__ iu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ibmvfc_host*,char*) ;
 struct ibmvfc_event* FUNC_1 (struct ibmvfc_host*) ;
 int FUNC_2 (struct ibmvfc_event*,int ,int ) ;
 int FUNC_3 (struct ibmvfc_host*,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct ibmvfc_event*,struct ibmvfc_host*,int ) ;
 int FUNC_5 (struct ibmvfc_host*,int ) ;
 int FUNC_6 (struct ibmvfc_npiv_logout_mad*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ibmvfc_host *VAR_6)
{
 struct ibmvfc_npiv_logout_mad *VAR_7;
 struct ibmvfc_event *VAR_8;

 VAR_8 = FUNC_1(VAR_6);
 FUNC_2(VAR_8, VAR_5, VAR_2);

 VAR_7 = &VAR_8->iu.npiv_logout;
 FUNC_6(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->common.version = 1;
 VAR_7->common.opcode = VAR_3;
 VAR_7->common.length = sizeof(struct ibmvfc_npiv_logout_mad);

 FUNC_5(VAR_6, VAR_0);

 if (!FUNC_4(VAR_8, VAR_6, VAR_4))
  FUNC_0(VAR_6, "Sent NPIV logout\n");
 else
  FUNC_3(VAR_6, VAR_1);
}
