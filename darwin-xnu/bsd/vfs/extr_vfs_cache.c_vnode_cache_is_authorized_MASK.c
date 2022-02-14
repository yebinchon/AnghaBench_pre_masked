
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int vfs_context_t ;
typedef scalar_t__ kauth_cred_t ;
typedef int kauth_action_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {scalar_t__ v_type; int v_authorized_actions; scalar_t__ v_cred; TYPE_1__* v_mount; } ;
struct TYPE_7__ {int mnt_kern_flag; scalar_t__ mnt_authcache_ttl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;

boolean_t
FUNC_5(vnode_t VAR_8, vfs_context_t VAR_9, kauth_action_t VAR_10)
{
 kauth_cred_t VAR_11;
 boolean_t VAR_12 = VAR_0;


 if (VAR_7)
  return VAR_0;

 if ( (VAR_8->v_mount->mnt_kern_flag & (VAR_3 | VAR_2)) ) {




         if (VAR_8->v_mount->mnt_authcache_ttl) {
          if ( !(VAR_8->v_mount->mnt_kern_flag & VAR_2) ) {





           if (VAR_10 != VAR_1 || VAR_8->v_type != VAR_6)
            VAR_8 = VAR_4;
   }
   if (VAR_8 != VAR_4 && FUNC_3(VAR_8) == VAR_5) {
           FUNC_4(VAR_8, VAR_8->v_authorized_actions);
    VAR_8 = VAR_4;
   }
  } else
          VAR_8 = VAR_4;
 }
 if (VAR_8 != VAR_4) {
         VAR_11 = FUNC_2(VAR_9);

  FUNC_0();

  if (VAR_8->v_cred == VAR_11 && (VAR_8->v_authorized_actions & VAR_10) == VAR_10)
          VAR_12 = VAR_5;

  FUNC_1();
 }
 return VAR_12;
}
