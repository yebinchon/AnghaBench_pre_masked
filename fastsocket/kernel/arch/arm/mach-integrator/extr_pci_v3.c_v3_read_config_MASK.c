
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 () ;
 int VAR_1 ;
 unsigned long FUNC_6 (struct pci_bus*,unsigned int,int) ;

__attribute__((used)) static int FUNC_7(struct pci_bus *VAR_2, unsigned int VAR_3, int VAR_4,
     int VAR_5, u32 *VAR_6)
{
 unsigned long VAR_7;
 unsigned long VAR_8;
 u32 VAR_9;

 FUNC_3(&VAR_1, VAR_8);
 VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_4);

 switch (VAR_5) {
 case 1:
  VAR_9 = FUNC_0(VAR_7);
  break;

 case 2:
  VAR_9 = FUNC_2(VAR_7);
  break;

 default:
  VAR_9 = FUNC_1(VAR_7);
  break;
 }

 FUNC_5();
 FUNC_4(&VAR_1, VAR_8);

 *VAR_6 = VAR_9;
 return VAR_0;
}
