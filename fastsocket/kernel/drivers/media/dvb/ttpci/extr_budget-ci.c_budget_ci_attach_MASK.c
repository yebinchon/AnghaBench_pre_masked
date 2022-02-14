
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct saa7146_pci_extension_data {int dummy; } ;
struct saa7146_dev {struct budget_ci* ext_priv; } ;
struct TYPE_5__ {struct budget_ci* priv; } ;
struct TYPE_6__ {TYPE_1__ dvb_adapter; } ;
struct budget_ci {TYPE_2__ budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct budget_ci*) ;
 int FUNC_1 (int,char*,struct budget_ci*) ;
 int FUNC_2 (struct budget_ci*) ;
 int FUNC_3 (struct budget_ci*) ;
 struct budget_ci* FUNC_4 (int,int ) ;
 int FUNC_5 (struct budget_ci*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,struct saa7146_dev*,struct saa7146_pci_extension_data*,int ,int ) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(struct saa7146_dev *VAR_4, struct saa7146_pci_extension_data *VAR_5)
{
 struct budget_ci *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(sizeof(struct budget_ci), VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto out1;
 }

 FUNC_1(2, "budget_ci: %p\n", VAR_6);

 VAR_4->ext_priv = VAR_6;

 VAR_7 = FUNC_7(&VAR_6->budget, VAR_4, VAR_5, VAR_2,
    VAR_3);
 if (VAR_7)
  goto out2;

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7)
  goto out3;

 FUNC_0(VAR_6);

 VAR_6->budget.dvb_adapter.priv = VAR_6;
 FUNC_2(VAR_6);

 FUNC_8(&VAR_6->budget);

 return 0;

out3:
 FUNC_6(&VAR_6->budget);
out2:
 FUNC_3(VAR_6);
out1:
 return VAR_7;
}
