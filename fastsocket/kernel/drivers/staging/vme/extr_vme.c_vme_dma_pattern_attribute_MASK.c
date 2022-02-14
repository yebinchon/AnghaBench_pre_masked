
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vme_pattern_t ;
typedef int u32 ;
struct vme_dma_pattern {int type; int pattern; void* private; } ;
struct vme_dma_attr {int type; int pattern; void* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vme_dma_pattern*) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;

struct vme_dma_attr *FUNC_3(u32 VAR_2,
 vme_pattern_t VAR_3)
{
 struct vme_dma_attr *VAR_4;
 struct vme_dma_pattern *VAR_5;

 VAR_4 = (struct vme_dma_attr *)FUNC_1(
  sizeof(struct vme_dma_attr), VAR_0);
 if(VAR_4 == ((void*)0)) {
  FUNC_2("Unable to allocate memory for attributes structure\n");
  goto err_attr;
 }

 VAR_5 = (struct vme_dma_pattern *)FUNC_1(
  sizeof(struct vme_dma_pattern), VAR_0);
 if(VAR_5 == ((void*)0)) {
  FUNC_2("Unable to allocate memory for pattern attributes\n");
  goto err_pat;
 }

 VAR_4->type = VAR_1;
 VAR_4->private = (void *)VAR_5;

 VAR_5->pattern = VAR_2;
 VAR_5->type = VAR_3;

 return VAR_4;

 FUNC_0(VAR_5);
err_pat:
 FUNC_0(VAR_4);
err_attr:
 return ((void*)0);
}
