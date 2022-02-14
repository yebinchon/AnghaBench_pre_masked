
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_dma_pci {int address; void* private; int type; } ;
struct vme_dma_attr {int address; void* private; int type; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vme_dma_pci*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;

struct vme_dma_attr *FUNC_3(dma_addr_t VAR_2)
{
 struct vme_dma_attr *VAR_3;
 struct vme_dma_pci *VAR_4;



 VAR_3 = (struct vme_dma_attr *)FUNC_1(
  sizeof(struct vme_dma_attr), VAR_0);
 if(VAR_3 == ((void*)0)) {
  FUNC_2("Unable to allocate memory for attributes structure\n");
  goto err_attr;
 }

 VAR_4 = (struct vme_dma_pci *)FUNC_1(sizeof(struct vme_dma_pci),
  VAR_0);
 if(VAR_4 == ((void*)0)) {
  FUNC_2("Unable to allocate memory for pci attributes\n");
  goto err_pci;
 }



 VAR_3->type = VAR_1;
 VAR_3->private = (void *)VAR_4;

 VAR_4->address = VAR_2;

 return VAR_3;

 FUNC_0(VAR_4);
err_pci:
 FUNC_0(VAR_3);
err_attr:
 return ((void*)0);
}
