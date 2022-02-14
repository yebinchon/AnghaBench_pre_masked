
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_end; int vm_start; struct videobuf_mapping* vm_private_data; } ;
struct videobuf_mapping {int count; TYPE_1__* q; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,struct videobuf_mapping*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct vm_area_struct *VAR_0)
{
 struct videobuf_mapping *VAR_1 = VAR_0->vm_private_data;

 FUNC_0(VAR_1->q->dev, "vm_open %p [count=%u,vma=%08lx-%08lx]\n",
  VAR_1, VAR_1->count, VAR_0->vm_start, VAR_0->vm_end);

 VAR_1->count++;
}
