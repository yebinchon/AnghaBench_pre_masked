
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_page_prot; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct device*,struct vm_area_struct*,void*,int ,size_t) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct device *VAR_0, struct vm_area_struct *VAR_1,
        void *VAR_2, dma_addr_t VAR_3, size_t VAR_4)
{
 VAR_1->vm_page_prot = FUNC_1(VAR_1->vm_page_prot);
 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
