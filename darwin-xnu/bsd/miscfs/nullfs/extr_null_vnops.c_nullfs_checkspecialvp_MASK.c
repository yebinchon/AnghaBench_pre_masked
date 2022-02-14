
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct null_mount {int nullm_lock; } ;


 struct null_mount* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;

__attribute__((used)) static int
FUNC_5(struct vnode* VAR_0)
{
 int VAR_1 = 0;
 struct null_mount * VAR_2;

 VAR_2 = FUNC_0(FUNC_4(VAR_0));

 FUNC_1(&VAR_2->nullm_lock);
 VAR_1 = (FUNC_3(VAR_0));
 FUNC_2(&VAR_2->nullm_lock);

 return VAR_1;
}
