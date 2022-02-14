
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_device {int dummy; } ;
struct aer_rpc {int wait_release; int rpc_mutex; int dpc_handler; struct pcie_device* rpd; int e_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct aer_rpc* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pcie_device*,struct aer_rpc*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct aer_rpc *FUNC_6(struct pcie_device *VAR_2)
{
 struct aer_rpc *VAR_3;

 VAR_3 = FUNC_2(sizeof(struct aer_rpc), VAR_0);
 if (!VAR_3)
  return ((void*)0);


 FUNC_5(&VAR_3->e_lock);

 VAR_3->rpd = VAR_2;
 FUNC_0(&VAR_3->dpc_handler, VAR_1);
 FUNC_3(&VAR_3->rpc_mutex);
 FUNC_1(&VAR_3->wait_release);


 FUNC_4(VAR_2, VAR_3);

 return VAR_3;
}
