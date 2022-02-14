
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; } ;
struct fw_iso_buffer {int page_count; int * pages; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,int ) ;

int FUNC_1(struct fw_iso_buffer *VAR_1, struct vm_area_struct *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = VAR_2->vm_start;
 for (VAR_4 = 0; VAR_4 < VAR_1->page_count; VAR_4++) {
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_1->pages[VAR_4]);
  if (VAR_5)
   return VAR_5;

  VAR_3 += VAR_0;
 }

 return 0;
}
