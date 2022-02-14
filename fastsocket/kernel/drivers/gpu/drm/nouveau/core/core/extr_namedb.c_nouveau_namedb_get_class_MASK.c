
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nouveau_namedb {int lock; } ;
struct nouveau_handle {int dummy; } ;


 struct nouveau_handle* FUNC_0 (struct nouveau_namedb*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct nouveau_handle *
FUNC_3(struct nouveau_namedb *VAR_0, u16 VAR_1)
{
 struct nouveau_handle *VAR_2;
 FUNC_1(&VAR_0->lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  FUNC_2(&VAR_0->lock);
 return VAR_2;
}
