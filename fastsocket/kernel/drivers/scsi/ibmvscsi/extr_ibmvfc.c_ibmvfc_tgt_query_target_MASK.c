
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int port_name; } ;
struct ibmvfc_target {int kref; TYPE_3__ ids; struct ibmvfc_host* vhost; } ;
struct TYPE_5__ {int version; int length; int opcode; } ;
struct ibmvfc_query_tgt {int wwpn; TYPE_2__ common; } ;
struct ibmvfc_host {scalar_t__ discovery_threads; } ;
struct TYPE_4__ {struct ibmvfc_query_tgt query_tgt; } ;
struct ibmvfc_event {TYPE_1__ iu; struct ibmvfc_target* tgt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ibmvfc_event* FUNC_0 (struct ibmvfc_host*) ;
 int FUNC_1 (struct ibmvfc_event*,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct ibmvfc_event*,struct ibmvfc_host*,int ) ;
 int FUNC_3 (struct ibmvfc_target*,int ) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct ibmvfc_query_tgt*,int ,int) ;
 int FUNC_7 (struct ibmvfc_target*,char*) ;

__attribute__((used)) static void FUNC_8(struct ibmvfc_target *VAR_8)
{
 struct ibmvfc_query_tgt *VAR_9;
 struct ibmvfc_host *VAR_10 = VAR_8->vhost;
 struct ibmvfc_event *VAR_11;

 if (VAR_10->discovery_threads >= VAR_5)
  return;

 FUNC_4(&VAR_8->kref);
 VAR_11 = FUNC_0(VAR_10);
 VAR_10->discovery_threads++;
 VAR_11->tgt = VAR_8;
 FUNC_1(VAR_11, VAR_7, VAR_0);
 VAR_9 = &VAR_11->iu.query_tgt;
 FUNC_6(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->common.version = 1;
 VAR_9->common.opcode = VAR_1;
 VAR_9->common.length = sizeof(*VAR_9);
 VAR_9->wwpn = VAR_8->ids.port_name;

 FUNC_3(VAR_8, VAR_2);
 if (FUNC_2(VAR_11, VAR_10, VAR_4)) {
  VAR_10->discovery_threads--;
  FUNC_3(VAR_8, VAR_3);
  FUNC_5(&VAR_8->kref, VAR_6);
 } else
  FUNC_7(VAR_8, "Sent Query Target\n");
}
