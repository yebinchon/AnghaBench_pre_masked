
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pci_ops {int (* write ) (struct pci_bus*,unsigned int,int,int,int ) ;} ;
struct pci_bus {int number; } ;
struct aer_error {int dummy; } ;


 struct aer_error* FUNC_0 (int ,int ,unsigned int) ;
 struct pci_ops* FUNC_1 (struct pci_bus*) ;
 int * FUNC_2 (struct aer_error*,int,int*) ;
 int VAR_0 ;
 int FUNC_3 (struct pci_bus*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct pci_bus*,unsigned int,int,int,int ) ;

int FUNC_7(struct pci_bus *VAR_1, unsigned int VAR_2, int VAR_3, int VAR_4,
    u32 VAR_5)
{
 u32 *VAR_6;
 struct aer_error *VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 struct pci_ops *VAR_10;
 int VAR_11;

 FUNC_4(&VAR_0, VAR_8);
 if (VAR_4 != sizeof(u32))
  goto out;
 VAR_11 = FUNC_3(VAR_1);
 if (VAR_11 < 0)
  goto out;
 VAR_7 = FUNC_0((u16)VAR_11, VAR_1->number, VAR_2);
 if (!VAR_7)
  goto out;

 VAR_6 = FUNC_2(VAR_7, VAR_3, &VAR_9);
 if (VAR_6) {
  if (VAR_9)
   *VAR_6 ^= VAR_5;
  else
   *VAR_6 = VAR_5;
  FUNC_5(&VAR_0, VAR_8);
  return 0;
 }
out:
 VAR_10 = FUNC_1(VAR_1);
 FUNC_5(&VAR_0, VAR_8);
 return VAR_10->write(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
