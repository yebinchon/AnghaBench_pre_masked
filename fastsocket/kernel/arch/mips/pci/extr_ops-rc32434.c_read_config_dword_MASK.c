
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_bus {scalar_t__ number; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct pci_bus*,unsigned int,int,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct pci_bus *VAR_2, unsigned int VAR_3,
        int VAR_4, u32 *VAR_5)
{
 int VAR_6;
 int VAR_7 = 1;





 if (VAR_2->number == 0 && FUNC_0(VAR_3) > 21)
  return 0;

retry:
 VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5);





 if (VAR_4 == VAR_1) {
  if (VAR_6 == 0xffffffff || VAR_6 == 0x00000000 ||
      VAR_6 == 0x0000ffff || VAR_6 == 0xffff0000) {
   if (VAR_7 > 4)
    return 0;
   VAR_7 *= 2;
   FUNC_2(VAR_7);
   goto retry;
  }
 }

 return VAR_6;
}
