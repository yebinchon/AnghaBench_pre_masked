
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u64 ;
struct nouveau_object {int dummy; } ;
struct nouveau_bios {int * data; } ;



__attribute__((used)) static void
FUNC_0(struct nouveau_object *VAR_0, u64 VAR_1, u8 VAR_2)
{
 struct nouveau_bios *VAR_3 = (void *)VAR_0;
 VAR_3->data[VAR_1] = VAR_2;
}
