
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {int devfn; struct pci_bus* bus; } ;
struct pci_bus {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write ) (struct pci_bus*,int ,int,int,int) ;int (* read ) (struct pci_bus*,int ,int,int,int*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct pci_bus*,int ,int,int,int*) ;
 int FUNC_4 (struct pci_bus*,int ,int,int,int) ;

__attribute__((used)) static bool FUNC_5(struct pci_dev *VAR_5, bool VAR_6)
{
 struct pci_bus *VAR_7 = VAR_5->bus;
 bool VAR_8 = 1;
 u32 VAR_9;
 u16 VAR_10, VAR_11;
 unsigned long VAR_12;
 bool VAR_13;





 FUNC_0(VAR_0 % 4);
 FUNC_0(VAR_0 + 2 != VAR_2);

 FUNC_1(&VAR_4, VAR_12);

 VAR_7->ops->read(VAR_7, VAR_5->devfn, VAR_0, 4, &VAR_9);

 VAR_13 = (VAR_9 >> 16) & VAR_3;






 if (VAR_6 != VAR_13) {
  VAR_8 = 0;
  goto done;
 }

 VAR_10 = VAR_9;
 VAR_11 = VAR_10 & ~VAR_1;
 if (VAR_6)
  VAR_11 |= VAR_1;
 if (VAR_11 != VAR_10)
  VAR_7->ops->write(VAR_7, VAR_5->devfn, VAR_0, 2, VAR_11);

done:
 FUNC_2(&VAR_4, VAR_12);

 return VAR_8;
}
