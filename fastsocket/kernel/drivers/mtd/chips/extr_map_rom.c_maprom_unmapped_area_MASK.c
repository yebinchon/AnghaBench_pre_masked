
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct map_info* priv; } ;
struct map_info {scalar_t__ virt; } ;



__attribute__((used)) static unsigned long FUNC_0(struct mtd_info *VAR_0,
       unsigned long VAR_1,
       unsigned long VAR_2,
       unsigned long VAR_3)
{
 struct map_info *VAR_4 = VAR_0->priv;
 return (unsigned long) VAR_4->virt + VAR_2;
}
