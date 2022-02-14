
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ibmvfc_host {int disc_buf_sz; int disc_buf_dma; } ;
struct TYPE_6__ {int len; int va; } ;
struct TYPE_5__ {int version; int length; int opcode; } ;
struct ibmvfc_discover_targets {TYPE_3__ buffer; int bufflen; TYPE_2__ common; } ;
struct TYPE_4__ {struct ibmvfc_discover_targets discover_targets; } ;
struct ibmvfc_event {TYPE_1__ iu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ibmvfc_host*,char*) ;
 int VAR_5 ;
 struct ibmvfc_event* FUNC_1 (struct ibmvfc_host*) ;
 int FUNC_2 (struct ibmvfc_event*,int ,int ) ;
 int FUNC_3 (struct ibmvfc_host*,int ) ;
 int FUNC_4 (struct ibmvfc_event*,struct ibmvfc_host*,int ) ;
 int FUNC_5 (struct ibmvfc_host*,int ) ;
 int FUNC_6 (struct ibmvfc_discover_targets*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ibmvfc_host *VAR_6)
{
 struct ibmvfc_discover_targets *VAR_7;
 struct ibmvfc_event *VAR_8 = FUNC_1(VAR_6);

 FUNC_2(VAR_8, VAR_5, VAR_3);
 VAR_7 = &VAR_8->iu.discover_targets;
 FUNC_6(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->common.version = 1;
 VAR_7->common.opcode = VAR_0;
 VAR_7->common.length = sizeof(*VAR_7);
 VAR_7->bufflen = VAR_6->disc_buf_sz;
 VAR_7->buffer.va = VAR_6->disc_buf_dma;
 VAR_7->buffer.len = VAR_6->disc_buf_sz;
 FUNC_5(VAR_6, VAR_1);

 if (!FUNC_4(VAR_8, VAR_6, VAR_4))
  FUNC_0(VAR_6, "Sent discover targets\n");
 else
  FUNC_3(VAR_6, VAR_2);
}
