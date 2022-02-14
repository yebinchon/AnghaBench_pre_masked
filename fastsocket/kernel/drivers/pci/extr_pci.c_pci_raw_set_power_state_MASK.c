
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int current_state; TYPE_1__* bus; int dev; scalar_t__ pm_cap; int d2_support; int d1_support; } ;
typedef int pci_power_t ;
struct TYPE_2__ {scalar_t__ self; } ;


 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_7, pci_power_t VAR_8)
{
 u16 VAR_9;
 bool VAR_10 = 0;


 if (VAR_7->current_state == VAR_8)
  return 0;

 if (!VAR_7->pm_cap)
  return -VAR_1;

 if (VAR_8 < 133 || VAR_8 > 129)
  return -VAR_0;





 if (VAR_8 != 133 && VAR_7->current_state <= 130
     && VAR_7->current_state > VAR_8) {
  FUNC_0(&VAR_7->dev, "invalid power transition "
   "(from state %d to %d)\n", VAR_7->current_state, VAR_8);
  return -VAR_0;
 }


 if ((VAR_8 == 132 && !VAR_7->d1_support)
    || (VAR_8 == 131 && !VAR_7->d2_support))
  return -VAR_1;

 FUNC_3(VAR_7, VAR_7->pm_cap + VAR_2, &VAR_9);





 switch (VAR_7->current_state) {
 case 133:
 case 132:
 case 131:
  VAR_9 &= ~VAR_4;
  VAR_9 |= VAR_8;
  break;
 case 129:
 case 130:
 case 128:
  if ((VAR_9 & VAR_4) == 129
   && !(VAR_9 & VAR_3))
   VAR_10 = 1;

 default:
  VAR_9 = 0;
  break;
 }


 FUNC_5(VAR_7, VAR_7->pm_cap + VAR_2, VAR_9);



 if (VAR_8 == 129 || VAR_7->current_state == 129)
  FUNC_2(VAR_6);
 else if (VAR_8 == 131 || VAR_7->current_state == 131)
  FUNC_8(VAR_5);

 FUNC_3(VAR_7, VAR_7->pm_cap + VAR_2, &VAR_9);
 VAR_7->current_state = (VAR_9 & VAR_4);
 if (VAR_7->current_state != VAR_8 && FUNC_7())
  FUNC_1(&VAR_7->dev, "Refused to change power state, "
   "currently in D%d\n", VAR_7->current_state);
 if (VAR_10)
  FUNC_4(VAR_7);

 if (VAR_7->bus->self)
  FUNC_6(VAR_7->bus->self);

 return 0;
}
