
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_2__* vfs_context_t ;
typedef int user_addr_t ;
struct vfs_context {int vc_ucred; int vc_thread; } ;
struct TYPE_11__ {int cn_flags; } ;
struct nameidata {TYPE_3__* ni_dvp; TYPE_3__* ni_vp; TYPE_1__ ni_cnd; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_13__ {scalar_t__ v_parent; } ;
struct TYPE_12__ {int vc_thread; int vc_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nameidata*,int ,int ,int,int,int ,struct vfs_context*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,int,struct vfs_context*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nameidata*,int) ;
 int FUNC_6 (struct nameidata*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_12(vfs_context_t VAR_10, int VAR_11, user_addr_t VAR_12, int VAR_13,
    int VAR_14, enum uio_seg VAR_15)
{
 int VAR_16;
 struct nameidata VAR_17;
  int VAR_18;
 struct vfs_context VAR_19;
 if (!(VAR_14 & VAR_0))
  VAR_19.vc_ucred = FUNC_2(FUNC_3());
 else
  VAR_19.vc_ucred = VAR_10->vc_ucred;
 VAR_19.vc_thread = VAR_10->vc_thread;


 VAR_18 = VAR_3 | VAR_1;

  if (VAR_13 & VAR_9)
   VAR_18 |= VAR_8;
  FUNC_0(&VAR_17, VAR_5, VAR_7, VAR_18, VAR_15,
        VAR_12, &VAR_19);






  VAR_16 = FUNC_5(&VAR_17, VAR_11);
  if (VAR_16)
   goto out;
 VAR_16 = FUNC_1(VAR_17.ni_vp, VAR_17.ni_dvp, VAR_13, &VAR_19);







  FUNC_9(VAR_17.ni_vp);
 if (VAR_13 & VAR_9)
   FUNC_9(VAR_17.ni_dvp);
   FUNC_6(&VAR_17);

out:
 if (!(VAR_14 & VAR_0))
  FUNC_4(&VAR_19.vc_ucred);
 return (VAR_16);
}
