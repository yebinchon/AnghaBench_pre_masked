
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nouveau_enum {scalar_t__ value; scalar_t__ name; } ;



const struct nouveau_enum *
FUNC_0(const struct nouveau_enum *VAR_0, u32 VAR_1)
{
 while (VAR_0->name) {
  if (VAR_0->value == VAR_1)
   return VAR_0;
  VAR_0++;
 }

 return ((void*)0);
}
