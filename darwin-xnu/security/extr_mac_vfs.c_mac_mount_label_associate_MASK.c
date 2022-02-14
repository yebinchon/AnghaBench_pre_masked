
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfs_context_t ;
struct TYPE_4__ {char* f_fstypename; char* f_mntfromname; char* f_mntonname; } ;
struct mount {int mnt_flag; TYPE_2__ mnt_vfsstat; int mnt_mntlabel; TYPE_1__* mnt_vtable; } ;
typedef int kauth_cred_t ;
struct TYPE_3__ {int vfc_vfsflags; } ;


 int FUNC_0 (int ,int ,struct mount*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;

void
FUNC_4(vfs_context_t VAR_5, struct mount *VAR_6)
{
 kauth_cred_t VAR_7 = FUNC_3(VAR_5);




 if ((VAR_6->mnt_flag & VAR_1) &&
     (FUNC_2(VAR_6->mnt_vfsstat.f_fstypename, "hfs") == 0))
  VAR_6->mnt_flag |= VAR_0;


 if (FUNC_2(VAR_6->mnt_vfsstat.f_fstypename, "devfs") == 0)
  VAR_6->mnt_flag |= VAR_0;


 if (FUNC_2(VAR_6->mnt_vfsstat.f_fstypename, "fdesc") == 0)
  VAR_6->mnt_flag |= VAR_0;


 if (FUNC_2(VAR_6->mnt_vfsstat.f_fstypename, "nfs") == 0)
  VAR_6->mnt_flag |= VAR_0;


 if (FUNC_2(VAR_6->mnt_vfsstat.f_fstypename, "afpfs") == 0)
  VAR_6->mnt_flag |= VAR_0;

 if (VAR_6->mnt_vtable != ((void*)0)) {

  if ((VAR_6->mnt_vtable->vfc_vfsflags & VAR_2))
   VAR_6->mnt_flag |= VAR_0;


  if ((VAR_6->mnt_vtable->vfc_vfsflags & VAR_3) &&
      (VAR_6->mnt_flag & VAR_0))
   VAR_6->mnt_flag &= ~VAR_0;
 }

 FUNC_0(VAR_4, VAR_7, VAR_6, VAR_6->mnt_mntlabel);







}
