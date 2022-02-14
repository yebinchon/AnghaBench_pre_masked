
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u64 ;
struct nouveau_object {int dummy; } ;
struct nouveau_bios {int * data; } ;



__attribute__((used)) static u8
FUNC_0(struct nouveau_object *VAR_0, u64 VAR_1)
{
 struct nouveau_bios *VAR_2 = (void *)VAR_0;
 return VAR_2->data[VAR_1];
}
