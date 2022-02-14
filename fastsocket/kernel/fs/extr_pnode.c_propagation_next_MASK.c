
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * next; } ;
struct vfsmount {int mnt_slave_list; TYPE_1__ mnt_slave; struct vfsmount* mnt_master; } ;


 int FUNC_0 (struct vfsmount*) ;
 struct vfsmount* FUNC_1 (struct vfsmount*) ;
 int FUNC_2 (int *) ;
 struct vfsmount* FUNC_3 (struct vfsmount*) ;
 struct vfsmount* FUNC_4 (struct vfsmount*) ;

__attribute__((used)) static struct vfsmount *FUNC_5(struct vfsmount *VAR_0,
      struct vfsmount *VAR_1)
{

 if (!FUNC_0(VAR_0) && !FUNC_2(&VAR_0->mnt_slave_list))
  return FUNC_1(VAR_0);

 while (1) {
  struct vfsmount *VAR_2;
  struct vfsmount *VAR_3 = VAR_0->mnt_master;

  if (VAR_3 == VAR_1->mnt_master) {
   VAR_2 = FUNC_3(VAR_0);
   return ((VAR_2 == VAR_1) ? ((void*)0) : VAR_2);
  } else if (VAR_0->mnt_slave.next != &VAR_3->mnt_slave_list)
   return FUNC_4(VAR_0);


  VAR_0 = VAR_3;
 }
}
