
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ipg_timer; } ;
struct amd8111e_priv {int options; int lock; TYPE_1__ ipg_data; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct amd8111e_priv*) ;
 int FUNC_1 (struct amd8111e_priv*) ;
 int FUNC_2 (struct amd8111e_priv*) ;
 int FUNC_3 (struct amd8111e_priv*) ;
 int FUNC_4 (int *) ;
 struct amd8111e_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct pci_dev*,int ,int) ;
 struct net_device* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_6, pm_message_t VAR_7)
{
 struct net_device *VAR_8 = FUNC_9(VAR_6);
 struct amd8111e_priv *VAR_9 = FUNC_5(VAR_8);

 if (!FUNC_7(VAR_8))
  return 0;


 FUNC_12(&VAR_9->lock);
 FUNC_0(VAR_9);
 FUNC_13(&VAR_9->lock);

 FUNC_6(VAR_8);


 FUNC_12(&VAR_9->lock);
 if(VAR_9->options & VAR_0)
  FUNC_4(&VAR_9->ipg_data.ipg_timer);
 FUNC_3(VAR_9);
 FUNC_13(&VAR_9->lock);

 if(VAR_9->options & VAR_3){

  if(VAR_9->options & VAR_1)
   FUNC_2(VAR_9);
  if(VAR_9->options & VAR_2)
   FUNC_1(VAR_9);

  FUNC_8(VAR_6, VAR_5, 1);
  FUNC_8(VAR_6, VAR_4, 1);

 }
 else{
  FUNC_8(VAR_6, VAR_5, 0);
  FUNC_8(VAR_6, VAR_4, 0);
 }

 FUNC_10(VAR_6);
 FUNC_11(VAR_6, VAR_5);

 return 0;
}
