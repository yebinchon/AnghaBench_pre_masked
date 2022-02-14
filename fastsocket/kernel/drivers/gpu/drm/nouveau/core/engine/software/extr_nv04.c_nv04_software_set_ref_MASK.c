
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_object {scalar_t__ parent; } ;
struct nouveau_fifo_chan {int refcnt; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_0, u32 VAR_1,
        void *VAR_2, u32 VAR_3)
{
 struct nouveau_object *VAR_4 = (void *)FUNC_1(VAR_0->parent);
 struct nouveau_fifo_chan *VAR_5 = (void *)VAR_4->parent;
 FUNC_0(&VAR_5->refcnt, *(u32*)VAR_2);
 return 0;
}
