
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int pci_base0; int mbx_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ,int) ;

irqreturn_t FUNC_7(int VAR_5, void *VAR_6)
{
 struct qlcnic_adapter *VAR_7 = VAR_6;
 unsigned long VAR_8;
 u32 VAR_9, VAR_10, VAR_11;

 FUNC_4(&VAR_7->ahw->mbx_lock, VAR_8);
 VAR_10 = FUNC_1(VAR_7->ahw, VAR_2);
 if (!(VAR_10 & VAR_4))
  goto out;

 VAR_11 = FUNC_3(FUNC_0(VAR_7->ahw, 0));
 if (VAR_11 & VAR_3)
  FUNC_2(VAR_7);
out:
 VAR_9 = FUNC_1(VAR_7->ahw, VAR_1);
 FUNC_6(0, VAR_7->ahw->pci_base0 + VAR_9);
 FUNC_5(&VAR_7->ahw->mbx_lock, VAR_8);

 return VAR_0;
}
