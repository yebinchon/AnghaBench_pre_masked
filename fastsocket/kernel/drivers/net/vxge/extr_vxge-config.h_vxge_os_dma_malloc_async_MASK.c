
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (unsigned long,int) ;
 int FUNC_2 (void*,void*,unsigned long,struct pci_dev*,struct pci_dev*) ;

__attribute__((used)) static inline void FUNC_3(struct pci_dev *VAR_3, void *VAR_4,
     unsigned long VAR_5)
{
 gfp_t VAR_6;
 void *VAR_7;

 if (FUNC_0())
  VAR_6 = VAR_0 | VAR_1;
 else
  VAR_6 = VAR_2 | VAR_1;

 VAR_7 = FUNC_1((VAR_5), VAR_6);

 FUNC_2(VAR_4, VAR_7, VAR_5, VAR_3, VAR_3);
}
