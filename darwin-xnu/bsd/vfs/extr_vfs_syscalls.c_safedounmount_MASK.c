
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vfs_context_t ;
struct TYPE_4__ {scalar_t__ f_owner; } ;
struct mount {int mnt_kern_flag; int mnt_flag; TYPE_1__ mnt_vfsstat; } ;
typedef TYPE_2__* proc_t ;
struct TYPE_5__ {int p_acflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mount*,int,int,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mount*,int ) ;
 int FUNC_4 (int ,int *) ;
 TYPE_2__* FUNC_5 (int ) ;

int
FUNC_6(struct mount *VAR_7, int VAR_8, vfs_context_t VAR_9)
{
 int VAR_10;
 proc_t VAR_11 = FUNC_5(VAR_9);





 if ((VAR_7->mnt_kern_flag & VAR_4) &&
  (VAR_8 & VAR_5) && ((VAR_8 & VAR_3) == 0)) {
  VAR_10 = VAR_0;
  goto out;
 }





 if (!(((VAR_7->mnt_kern_flag & VAR_2) != 0) && ((VAR_8 & VAR_3) == 0))) {




  if ((VAR_7->mnt_vfsstat.f_owner != FUNC_2(FUNC_1())) &&
    (VAR_10 = FUNC_4(FUNC_1(), &VAR_11->p_acflag)))
   goto out;
 }



 if (VAR_7->mnt_flag & VAR_6) {
  VAR_10 = VAR_0;
  goto out;
 }
 return (FUNC_0(VAR_7, VAR_8, 1, VAR_9));

out:
 FUNC_3(VAR_7, 0);
 return(VAR_10);
}
