
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int vfs_context_t ;
struct timeval {int tv_sec; } ;
typedef scalar_t__ kauth_cred_t ;
typedef scalar_t__ kauth_action_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {scalar_t__ v_type; scalar_t__ v_cred; scalar_t__ v_authorized_actions; int v_cred_timestamp; TYPE_1__* v_mount; } ;
struct TYPE_4__ {int mnt_kern_flag; scalar_t__ mnt_authcache_ttl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (struct timeval*) ;
 scalar_t__ FUNC_6 (int ) ;

void FUNC_7(vnode_t VAR_7, vfs_context_t VAR_8, kauth_action_t VAR_9)
{
 kauth_cred_t VAR_10 = VAR_4;
 kauth_cred_t VAR_11;
 struct timeval VAR_12;
 boolean_t VAR_13 = VAR_0;

 VAR_11 = FUNC_6(VAR_8);

 if (!FUNC_0(VAR_11) || VAR_9 == 0)
         return;

 if ( (VAR_7->v_mount->mnt_kern_flag & (VAR_3 | VAR_2)) ) {




         if (VAR_7->v_mount->mnt_authcache_ttl == 0)
          return;

  if ( !(VAR_7->v_mount->mnt_kern_flag & VAR_2) ) {





          if ( (VAR_9 & ~VAR_1) || VAR_7->v_type != VAR_6 )
           return;
  }
  VAR_13 = VAR_5;

  FUNC_5(&VAR_12);
 }
 FUNC_1();

 if (VAR_7->v_cred != VAR_11) {
         FUNC_3(VAR_11);



  VAR_10 = VAR_7->v_cred;
  VAR_7->v_cred = VAR_11;
  VAR_7->v_authorized_actions = 0;
 }
 if (VAR_13 == VAR_5 && VAR_7->v_authorized_actions == 0) {
         VAR_7->v_cred_timestamp = VAR_12.tv_sec;
 }
 VAR_7->v_authorized_actions |= VAR_9;

 FUNC_2();

 if (FUNC_0(VAR_10))
  FUNC_4(&VAR_10);
}
