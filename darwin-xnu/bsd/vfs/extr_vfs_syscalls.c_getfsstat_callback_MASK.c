
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vfs_context_t ;
struct vfsstatfs {int dummy; } ;
struct getfsstat_struct {scalar_t__ count; scalar_t__ maxcount; int error; int flags; int * mp; scalar_t__ sfsp; } ;
typedef TYPE_1__* mount_t ;
struct TYPE_7__ {struct vfsstatfs mnt_vfsstat; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,struct vfsstatfs*,scalar_t__,int*,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_8(mount_t VAR_7, void * VAR_8)
{

 struct getfsstat_struct *VAR_9 = (struct getfsstat_struct *)VAR_8;
 struct vfsstatfs *VAR_10;
 int VAR_11, VAR_12;
 vfs_context_t VAR_13 = FUNC_5();

 if (VAR_9->sfsp && VAR_9->count < VAR_9->maxcount) {







  VAR_10 = &VAR_7->mnt_vfsstat;




  if (((VAR_9->flags & VAR_2) == 0 || (VAR_9->flags & (VAR_3 | VAR_1))) &&
   (VAR_11 = FUNC_7(VAR_7, VAR_13,
       VAR_6))) {
   FUNC_1("vfs_update_vfsstat returned %d", VAR_11);
   return(VAR_4);
  }




  VAR_11 = FUNC_4(VAR_7, VAR_10, VAR_9->sfsp, &VAR_12, FUNC_0(FUNC_6(VAR_13)), VAR_0);
  if (VAR_11) {
   VAR_9->error = VAR_11;
   return(VAR_5);
  }
  VAR_9->sfsp += VAR_12;

  if (VAR_9->mp) {







   VAR_9->mp++;
  }
 }
 VAR_9->count++;
 return(VAR_4);
}
