
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct vfsstatfs {int dummy; } ;
struct statfs64 {int dummy; } ;
struct getfsstat_struct {scalar_t__ count; scalar_t__ maxcount; int error; int flags; scalar_t__ sfsp; } ;
typedef TYPE_1__* mount_t ;
struct TYPE_6__ {struct vfsstatfs mnt_vfsstat; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct vfsstatfs*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(mount_t VAR_6, void * VAR_7)
{
 struct getfsstat_struct *VAR_8 = (struct getfsstat_struct *)VAR_7;
 struct vfsstatfs *VAR_9;
 int VAR_10;

 if (VAR_8->sfsp && VAR_8->count < VAR_8->maxcount) {







  VAR_9 = &VAR_6->mnt_vfsstat;
  if (((VAR_8->flags & VAR_1) == 0 ||
       (VAR_8->flags & (VAR_2 | VAR_0))) &&
      (VAR_10 = FUNC_4(VAR_6, FUNC_3(), VAR_5))) {
   FUNC_0("vfs_update_vfsstat returned %d", VAR_10);
   return(VAR_3);
  }

  VAR_10 = FUNC_2(VAR_6, VAR_9, VAR_8->sfsp);
  if (VAR_10) {
   VAR_8->error = VAR_10;
   return(VAR_4);
  }
  VAR_8->sfsp += sizeof(struct statfs64);
 }
 VAR_8->count++;
 return(VAR_3);
}
