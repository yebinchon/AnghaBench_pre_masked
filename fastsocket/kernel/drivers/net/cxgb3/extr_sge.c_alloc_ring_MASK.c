
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 void* FUNC_0 (int *,size_t,int *,int ) ;
 int FUNC_1 (int *,size_t,void*,int ) ;
 void* FUNC_2 (size_t,size_t,int ) ;
 int FUNC_3 (void*,int ,size_t) ;

__attribute__((used)) static void *FUNC_4(struct pci_dev *VAR_1, size_t VAR_2, size_t VAR_3,
   size_t VAR_4, dma_addr_t * VAR_5, void *VAR_6)
{
 size_t VAR_7 = VAR_2 * VAR_3;
 void *VAR_8 = ((void*)0);
 void *VAR_9 = FUNC_0(&VAR_1->dev, VAR_7, VAR_5, VAR_0);

 if (!VAR_9)
  return ((void*)0);
 if (VAR_4 && VAR_6) {
  VAR_8 = FUNC_2(VAR_2, VAR_4, VAR_0);

  if (!VAR_8) {
   FUNC_1(&VAR_1->dev, VAR_7, VAR_9, *VAR_5);
   return ((void*)0);
  }
  *(void **)VAR_6 = VAR_8;
 }
 FUNC_3(VAR_9, 0, VAR_7);
 return VAR_9;
}
