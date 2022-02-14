
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpic {int dummy; } ;
struct TYPE_2__ {int msi_check_device; int teardown_msi_irqs; int setup_msi_irqs; } ;


 int FUNC_0 (struct mpic*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mpic*) ;
 struct mpic* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4(struct mpic *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6) {
  FUNC_3("u3msi: Error allocating bitmap!\n");
  return VAR_6;
 }

 FUNC_3("u3msi: Registering MPIC U3 MSI callbacks.\n");

 FUNC_0(VAR_0);
 VAR_0 = VAR_5;

 FUNC_1(VAR_1.setup_msi_irqs);
 VAR_1.setup_msi_irqs = VAR_3;
 VAR_1.teardown_msi_irqs = VAR_4;
 VAR_1.msi_check_device = VAR_2;

 return 0;
}
