
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nouveau_object {int dummy; } ;
struct nouveau_namedb {int dummy; } ;
struct nouveau_handle {int dummy; } ;


 int VAR_0 ;
 struct nouveau_handle* FUNC_0 (struct nouveau_namedb*,int ) ;
 scalar_t__ FUNC_1 (struct nouveau_object*,int ) ;

struct nouveau_handle *
FUNC_2(struct nouveau_object *VAR_1, u16 VAR_2)
{
 struct nouveau_namedb *VAR_3;
 if (VAR_1 && (VAR_3 = (void *)FUNC_1(VAR_1, VAR_0)))
  return FUNC_0(VAR_3, VAR_2);
 return ((void*)0);
}
