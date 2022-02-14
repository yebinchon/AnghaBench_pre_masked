
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int mnt_expire; } ;
struct path {int dummy; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct vfsmount*,struct path*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (struct vfsmount*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

int FUNC_5(struct vfsmount *VAR_1, struct path *VAR_2,
   int VAR_3, struct list_head *VAR_4)
{
 int VAR_5;

 FUNC_1(&VAR_0);
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (!VAR_5) {
  if (VAR_4)
   FUNC_2(&VAR_1->mnt_expire, VAR_4);
 }
 FUNC_4(&VAR_0);
 if (VAR_5)
  FUNC_3(VAR_1);
 return VAR_5;
}
