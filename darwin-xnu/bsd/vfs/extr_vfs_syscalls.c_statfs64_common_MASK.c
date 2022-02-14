
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int user_addr_t ;
struct vfsstatfs {int * f_mntfromname; int * f_mntonname; int * f_fstypename; int f_fssubtype; int f_owner; int f_fsid; int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; scalar_t__ f_iosize; int f_bsize; } ;
struct statfs64 {int f_flags; int * f_mntfromname; int * f_mntonname; int * f_fstypename; int f_fssubtype; int f_type; int f_owner; int f_fsid; int f_ffree; int f_files; int f_bavail; int f_bfree; int f_blocks; scalar_t__ f_iosize; int f_bsize; } ;
struct mount {int mnt_flag; int mnt_kern_flag; int * fstypename_override; TYPE_1__* mnt_vtable; } ;
typedef int sfs ;
typedef scalar_t__ int32_t ;
typedef int caddr_t ;
struct TYPE_2__ {int vfc_typenum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct statfs64*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct mount *VAR_4, struct vfsstatfs *VAR_5, user_addr_t VAR_6)
{
 int VAR_7;
 struct statfs64 VAR_8;

 FUNC_0(&VAR_8, sizeof(VAR_8));

 VAR_8.f_bsize = VAR_5->f_bsize;
 VAR_8.f_iosize = (int32_t)VAR_5->f_iosize;
 VAR_8.f_blocks = VAR_5->f_blocks;
 VAR_8.f_bfree = VAR_5->f_bfree;
 VAR_8.f_bavail = VAR_5->f_bavail;
 VAR_8.f_files = VAR_5->f_files;
 VAR_8.f_ffree = VAR_5->f_ffree;
 VAR_8.f_fsid = VAR_5->f_fsid;
 VAR_8.f_owner = VAR_5->f_owner;
 VAR_8.f_type = VAR_4->mnt_vtable->vfc_typenum;
 VAR_8.f_flags = VAR_4->mnt_flag & VAR_3;
 VAR_8.f_fssubtype = VAR_5->f_fssubtype;
 if (VAR_4->mnt_kern_flag & VAR_2) {
  FUNC_2(&VAR_8.f_fstypename[0], &VAR_4->fstypename_override[0], VAR_1);
 } else {
  FUNC_2(&VAR_8.f_fstypename[0], &VAR_5->f_fstypename[0], VAR_1);
 }
 FUNC_2(&VAR_8.f_mntonname[0], &VAR_5->f_mntonname[0], VAR_0);
 FUNC_2(&VAR_8.f_mntfromname[0], &VAR_5->f_mntfromname[0], VAR_0);

 VAR_7 = FUNC_1((caddr_t)&VAR_8, VAR_6, sizeof(VAR_8));

 return(VAR_7);
}
