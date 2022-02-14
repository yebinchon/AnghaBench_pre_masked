
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int boolean_t ;
struct TYPE_5__ {TYPE_1__* v_mount; } ;
struct TYPE_4__ {int mnt_kern_flag; int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

boolean_t
FUNC_0(vnode_t VAR_4)
{
 if ( !(VAR_4->v_mount->mnt_kern_flag & VAR_1) && (VAR_4->v_mount->mnt_flag & VAR_2) )
  return (VAR_3);
 return (VAR_0);
}
