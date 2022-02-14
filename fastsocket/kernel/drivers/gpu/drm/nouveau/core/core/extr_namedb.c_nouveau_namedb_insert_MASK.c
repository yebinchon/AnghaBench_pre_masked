
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_object {int dummy; } ;
struct nouveau_namedb {int lock; int list; } ;
struct nouveau_handle {int node; struct nouveau_namedb* namedb; int object; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct nouveau_namedb*,int ) ;
 int FUNC_2 (struct nouveau_object*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct nouveau_namedb *VAR_1, u32 VAR_2,
        struct nouveau_object *VAR_3,
        struct nouveau_handle *VAR_4)
{
 int VAR_5 = -VAR_0;
 FUNC_3(&VAR_1->lock);
 if (!FUNC_1(VAR_1, VAR_2)) {
  FUNC_2(VAR_3, &VAR_4->object);
  VAR_4->namedb = VAR_1;
  FUNC_0(&VAR_4->node, &VAR_1->list);
  VAR_5 = 0;
 }
 FUNC_4(&VAR_1->lock);
 return VAR_5;
}
