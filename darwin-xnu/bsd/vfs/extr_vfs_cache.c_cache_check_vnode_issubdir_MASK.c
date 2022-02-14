
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef TYPE_2__* mount_t ;
typedef int boolean_t ;
struct TYPE_9__ {TYPE_1__* mnt_vnodecovered; } ;
struct TYPE_8__ {int v_flag; struct TYPE_8__* v_parent; TYPE_2__* v_mount; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static boolean_t
FUNC_0(vnode_t VAR_6, vnode_t VAR_7, boolean_t *VAR_8,
    vnode_t *VAR_9)
{
 vnode_t VAR_10 = VAR_6;
 int VAR_11 = VAR_0;

 *VAR_8 = VAR_0;
 *VAR_9 = VAR_1;
 while (1) {
  mount_t VAR_12;

  if (VAR_10 == VAR_7) {
   *VAR_8 = VAR_2;
   break;
  } else if (VAR_10 == VAR_5) {

   break;
  }

  VAR_12 = VAR_10->v_mount;
  while ((VAR_10->v_flag & VAR_4) && VAR_12 && VAR_12->mnt_vnodecovered &&
      VAR_10 != VAR_7 && VAR_10 != VAR_5) {
   VAR_10 = VAR_12->mnt_vnodecovered;
   VAR_12 = VAR_10->v_mount;
  }





  if (VAR_10 == VAR_7 || VAR_10 == VAR_5) {

   break;
  }

  if (!VAR_12) {
   VAR_11 = VAR_2;
   *VAR_9 = VAR_1;
   break;
  }

  if ((VAR_10->v_flag & VAR_3) || !(VAR_10->v_parent)) {
   VAR_11 = VAR_2;
   *VAR_9 = VAR_10;
   break;
  }

  VAR_10 = VAR_10->v_parent;
 }

 return (VAR_11);
}
