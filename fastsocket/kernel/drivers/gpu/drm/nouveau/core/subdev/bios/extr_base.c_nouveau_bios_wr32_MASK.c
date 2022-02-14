
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
typedef int u32 ;
struct nouveau_object {int dummy; } ;
struct nouveau_bios {int * data; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_object *VAR_0, u64 VAR_1, u32 VAR_2)
{
 struct nouveau_bios *VAR_3 = (void *)VAR_0;
 FUNC_0(VAR_2, &VAR_3->data[VAR_1]);
}
