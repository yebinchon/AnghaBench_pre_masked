
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct go7007_buffer* vm_private_data; } ;
struct go7007_buffer {scalar_t__ mapped; TYPE_1__* go; } ;
struct TYPE_2__ {int spinlock; } ;


 int FUNC_0 (struct go7007_buffer*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct vm_area_struct *VAR_0)
{
 struct go7007_buffer *VAR_1 = VAR_0->vm_private_data;
 unsigned long VAR_2;

 if (--VAR_1->mapped == 0) {
  FUNC_1(&VAR_1->go->spinlock, VAR_2);
  FUNC_0(VAR_1);
  FUNC_2(&VAR_1->go->spinlock, VAR_2);
 }
}
