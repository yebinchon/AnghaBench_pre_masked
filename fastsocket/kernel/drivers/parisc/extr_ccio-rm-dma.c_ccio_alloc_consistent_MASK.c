
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (void*,int ,size_t) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void *FUNC_4(struct pci_dev *VAR_1, size_t VAR_2,
     dma_addr_t *VAR_3)
{
 void *VAR_4;

 VAR_4 = (void *)FUNC_0(VAR_0, FUNC_1(VAR_2));

 if (VAR_4 != ((void*)0)) {
  FUNC_2(VAR_4, 0, VAR_2);
  *VAR_3 = FUNC_3(VAR_4);
 }
 return VAR_4;
}
