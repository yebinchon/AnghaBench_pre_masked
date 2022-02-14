
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoran_mapping {int count; } ;
struct vm_area_struct {struct zoran_mapping* vm_private_data; } ;



__attribute__((used)) static void
FUNC_0 (struct vm_area_struct *VAR_0)
{
 struct zoran_mapping *VAR_1 = VAR_0->vm_private_data;

 VAR_1->count++;
}
