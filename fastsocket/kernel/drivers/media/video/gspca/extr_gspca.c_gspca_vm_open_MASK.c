
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct gspca_frame* vm_private_data; } ;
struct TYPE_2__ {int flags; } ;
struct gspca_frame {TYPE_1__ v4l2_buf; int vma_use_count; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vm_area_struct *VAR_1)
{
 struct gspca_frame *VAR_2 = VAR_1->vm_private_data;

 VAR_2->vma_use_count++;
 VAR_2->v4l2_buf.flags |= VAR_0;
}
