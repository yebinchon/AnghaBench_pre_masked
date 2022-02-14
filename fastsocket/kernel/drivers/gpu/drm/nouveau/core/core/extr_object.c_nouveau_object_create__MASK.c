
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_oclass {int handle; } ;
struct nouveau_object {int list; int _magic; int usecount; int refcount; struct nouveau_oclass* oclass; int engine; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct nouveau_object*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct nouveau_object *VAR_5,
         struct nouveau_object *VAR_6,
         struct nouveau_oclass *VAR_7, u32 VAR_8,
         int VAR_9, void **VAR_10)
{
 struct nouveau_object *VAR_11;

 VAR_11 = *VAR_10 = FUNC_1(VAR_9, VAR_1);
 if (!VAR_11)
  return -VAR_0;

 FUNC_3(VAR_5, &VAR_11->parent);
 FUNC_3(VAR_6, &VAR_11->engine);
 VAR_11->oclass = VAR_7;
 VAR_11->oclass->handle |= VAR_8;
 FUNC_0(&VAR_11->refcount, 1);
 FUNC_0(&VAR_11->usecount, 0);







 return 0;
}
