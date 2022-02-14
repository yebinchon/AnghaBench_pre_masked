
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef int u16 ;
struct nouveau_object {int dummy; } ;
struct nouveau_bios {int * data; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static u16
FUNC_1(struct nouveau_object *VAR_0, u64 VAR_1)
{
 struct nouveau_bios *VAR_2 = (void *)VAR_0;
 return FUNC_0(&VAR_2->data[VAR_1]);
}
