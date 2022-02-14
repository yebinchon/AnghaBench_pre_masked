
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amba_id {int mask; int id; } ;
struct amba_device {int periphid; } ;



__attribute__((used)) static struct amba_id *
FUNC_0(struct amba_id *VAR_0, struct amba_device *VAR_1)
{
 int VAR_2 = 0;

 while (VAR_0->mask) {
  VAR_2 = (VAR_1->periphid & VAR_0->mask) == VAR_0->id;
  if (VAR_2)
   break;
  VAR_0++;
 }

 return VAR_2 ? VAR_0 : ((void*)0);
}
