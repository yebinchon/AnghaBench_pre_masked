
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_pci_extension_data {int dummy; } ;
struct saa7146_dev {struct budget* ext_priv; } ;
struct TYPE_2__ {struct budget* priv; } ;
struct budget {TYPE_1__ dvb_adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,struct saa7146_dev*,struct saa7146_pci_extension_data*,struct budget*) ;
 int FUNC_1 (struct budget*) ;
 int FUNC_2 (struct budget*) ;
 struct budget* FUNC_3 (int,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct budget*,struct saa7146_dev*,struct saa7146_pci_extension_data*,int ,int ) ;
 int FUNC_6 (struct budget*) ;

__attribute__((used)) static int FUNC_7 (struct saa7146_dev* VAR_4, struct saa7146_pci_extension_data *VAR_5)
{
 struct budget *VAR_6 = ((void*)0);
 int VAR_7;

 VAR_6 = FUNC_3(sizeof(struct budget), VAR_1);
 if( ((void*)0) == VAR_6 ) {
  return -VAR_0;
 }

 FUNC_0(2, "dev:%p, info:%p, budget:%p\n", VAR_4, VAR_5, VAR_6);

 VAR_4->ext_priv = VAR_6;

 VAR_7 = FUNC_5(VAR_6, VAR_4, VAR_5, VAR_2, VAR_3);
 if (VAR_7) {
  FUNC_4("==> failed\n");
  FUNC_2 (VAR_6);
  return VAR_7;
 }

 VAR_6->dvb_adapter.priv = VAR_6;
 FUNC_1(VAR_6);

 FUNC_6(VAR_6);

 return 0;
}
