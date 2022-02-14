
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucc_geth_private {TYPE_1__* ug_regs; struct net_device* ndev; } ;
struct net_device {int name; int * dev_addr; } ;
struct TYPE_2__ {int macstnaddr2; int macstnaddr1; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucc_geth_private*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_2 (struct ucc_geth_private*) ;
 int FUNC_3 (struct ucc_geth_private*) ;
 int FUNC_4 (struct ucc_geth_private*) ;
 int FUNC_5 (struct ucc_geth_private*) ;
 int FUNC_6 (struct ucc_geth_private*,int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(struct ucc_geth_private *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->ndev;
 int VAR_3;

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3) {
  if (FUNC_2(VAR_1))
   FUNC_7("%s: Cannot configure internal struct, "
      "aborting.", VAR_2->name);
  goto err;
 }

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3) {
  if (FUNC_2(VAR_1))
   FUNC_7("%s: Cannot configure net device, aborting.",
      VAR_2->name);
  goto err;
 }

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3) {
  if (FUNC_2(VAR_1))
   FUNC_7("%s: Cannot configure net device, aborting.",
      VAR_2->name);
  goto err;
 }



 FUNC_1(VAR_2->dev_addr[0],
       VAR_2->dev_addr[1],
       VAR_2->dev_addr[2],
       VAR_2->dev_addr[3],
       VAR_2->dev_addr[4],
       VAR_2->dev_addr[5],
       &VAR_1->ug_regs->macstnaddr1,
       &VAR_1->ug_regs->macstnaddr2);

 VAR_3 = FUNC_6(VAR_1, VAR_0);
 if (VAR_3) {
  if (FUNC_2(VAR_1))
   FUNC_7("%s: Cannot enable net device, aborting.", VAR_2->name);
  goto err;
 }

 return 0;
err:
 FUNC_4(VAR_1);
 return VAR_3;
}
