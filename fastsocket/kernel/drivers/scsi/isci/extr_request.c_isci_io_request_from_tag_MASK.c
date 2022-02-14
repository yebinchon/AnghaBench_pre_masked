
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sas_task {struct isci_request* lldd_task; } ;
struct TYPE_2__ {struct sas_task* io_task_ptr; } ;
struct isci_request {int flags; TYPE_1__ ttype_ptr; } ;
struct isci_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct isci_request* FUNC_1 (struct isci_host*,int ) ;

__attribute__((used)) static struct isci_request *FUNC_2(struct isci_host *VAR_1,
           struct sas_task *VAR_2,
           u16 VAR_3)
{
 struct isci_request *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3);
 VAR_4->ttype_ptr.io_task_ptr = VAR_2;
 FUNC_0(VAR_0, &VAR_4->flags);
 VAR_2->lldd_task = VAR_4;

 return VAR_4;
}
