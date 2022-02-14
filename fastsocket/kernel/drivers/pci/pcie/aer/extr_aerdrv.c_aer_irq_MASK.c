
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcie_device {int port; } ;
struct aer_rpc {int prod_idx; int cons_idx; int dpc_handler; int e_lock; TYPE_1__* e_sources; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {unsigned int status; unsigned int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 struct aer_rpc* FUNC_0 (struct pcie_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,scalar_t__,unsigned int*) ;
 int FUNC_3 (int ,scalar_t__,unsigned int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 unsigned int VAR_10, VAR_11;
 struct pcie_device *VAR_12 = (struct pcie_device *)VAR_9;
 struct aer_rpc *VAR_13 = FUNC_0(VAR_12);
 int VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 VAR_16 = FUNC_1(VAR_12->port, VAR_7);




 FUNC_5(&VAR_13->e_lock, VAR_15);


 FUNC_2(VAR_12->port, VAR_16 + VAR_5, &VAR_10);
 if (!(VAR_10 & (VAR_6|VAR_3))) {
  FUNC_6(&VAR_13->e_lock, VAR_15);
  return VAR_2;
 }


 FUNC_2(VAR_12->port, VAR_16 + VAR_4, &VAR_11);
 FUNC_3(VAR_12->port, VAR_16 + VAR_5, VAR_10);


 VAR_14 = VAR_13->prod_idx + 1;
 if (VAR_14 == VAR_0)
  VAR_14 = 0;
 if (VAR_14 == VAR_13->cons_idx) {




  FUNC_6(&VAR_13->e_lock, VAR_15);
  return VAR_1;
 }
 VAR_13->e_sources[VAR_13->prod_idx].status = VAR_10;
 VAR_13->e_sources[VAR_13->prod_idx].id = VAR_11;
 VAR_13->prod_idx = VAR_14;
 FUNC_6(&VAR_13->e_lock, VAR_15);


 FUNC_4(&VAR_13->dpc_handler);

 return VAR_1;
}
