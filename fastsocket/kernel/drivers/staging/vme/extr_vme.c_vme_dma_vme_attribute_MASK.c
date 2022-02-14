
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vme_width_t ;
typedef int vme_cycle_t ;
typedef int vme_address_t ;
struct vme_dma_vme {unsigned long long address; int dwidth; int cycle; int aspace; void* private; int type; } ;
struct vme_dma_attr {unsigned long long address; int dwidth; int cycle; int aspace; void* private; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vme_dma_vme*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;

struct vme_dma_attr *FUNC_3(unsigned long long VAR_2,
 vme_address_t VAR_3, vme_cycle_t VAR_4, vme_width_t VAR_5)
{
 struct vme_dma_attr *VAR_6;
 struct vme_dma_vme *VAR_7;



 VAR_6 = (struct vme_dma_attr *)FUNC_1(
  sizeof(struct vme_dma_attr), VAR_0);
 if(VAR_6 == ((void*)0)) {
  FUNC_2("Unable to allocate memory for attributes structure\n");
  goto err_attr;
 }

 VAR_7 = (struct vme_dma_vme *)FUNC_1(sizeof(struct vme_dma_vme),
  VAR_0);
 if(VAR_7 == ((void*)0)) {
  FUNC_2("Unable to allocate memory for vme attributes\n");
  goto err_vme;
 }

 VAR_6->type = VAR_1;
 VAR_6->private = (void *)VAR_7;

 VAR_7->address = VAR_2;
 VAR_7->aspace = VAR_3;
 VAR_7->cycle = VAR_4;
 VAR_7->dwidth = VAR_5;

 return VAR_6;

 FUNC_0(VAR_7);
err_vme:
 FUNC_0(VAR_6);
err_attr:
 return ((void*)0);
}
