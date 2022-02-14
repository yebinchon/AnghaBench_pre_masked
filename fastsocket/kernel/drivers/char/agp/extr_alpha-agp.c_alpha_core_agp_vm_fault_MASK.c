
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vm_fault {struct page* page; scalar_t__ virtual_address; } ;
struct vm_area_struct {unsigned long vm_start; } ;
struct page {int dummy; } ;
typedef unsigned long dma_addr_t ;
struct TYPE_7__ {unsigned long bus_base; } ;
struct TYPE_8__ {TYPE_1__* ops; TYPE_2__ aperture; } ;
typedef TYPE_3__ alpha_agp_info ;
struct TYPE_9__ {TYPE_3__* dev_private_data; } ;
struct TYPE_6__ {unsigned long (* translate ) (TYPE_3__*,unsigned long) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 TYPE_5__* VAR_2 ;
 int FUNC_1 (struct page*) ;
 unsigned long FUNC_2 (TYPE_3__*,unsigned long) ;
 struct page* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct vm_area_struct *VAR_3,
     struct vm_fault *VAR_4)
{
 alpha_agp_info *VAR_5 = VAR_2->dev_private_data;
 dma_addr_t VAR_6;
 unsigned long VAR_7;
 struct page *VAR_8;

 VAR_6 = (unsigned long)VAR_4->virtual_address - VAR_3->vm_start
      + VAR_5->aperture.bus_base;
 VAR_7 = VAR_5->ops->translate(VAR_5, VAR_6);

 if (VAR_7 == (unsigned long)-VAR_0)
  return VAR_1;




 VAR_8 = FUNC_3(FUNC_0(VAR_7));
 FUNC_1(VAR_8);
 VAR_4->page = VAR_8;
 return 0;
}
