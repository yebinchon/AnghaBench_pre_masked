
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int dummy; } ;
struct flock {int l_type; int l_len; int l_start; int l_whence; } ;
struct fileglob {int fg_flag; int fg_lflags; struct vnode* fg_data; } ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct fileglob*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct vnode*,int ,int ,struct flock*,int ,int ,int *) ;
 int FUNC_2 (struct vnode*,int,int ) ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct vnode*) ;

__attribute__((used)) static int
FUNC_5(struct fileglob *VAR_7, vfs_context_t VAR_8)
{
 struct vnode *VAR_9 = VAR_7->fg_data;
 int VAR_10;

 if ( (VAR_10 = FUNC_3(VAR_9)) == 0 ) {
  if (FUNC_0(VAR_7) == VAR_0 &&
      ((VAR_7->fg_flag & VAR_2) != 0 ||
      (VAR_7->fg_lflags & VAR_1) != 0)) {
   struct flock VAR_11 = {
    .l_whence = VAR_6,
    .l_start = 0,
    .l_len = 0,
    .l_type = VAR_5
   };

   if ((VAR_7->fg_flag & VAR_2) != 0)
    (void) FUNC_1(VAR_9, (caddr_t)VAR_7,
        VAR_5, &VAR_11, VAR_3, VAR_8, ((void*)0));

   if ((VAR_7->fg_lflags & VAR_1) != 0)
    (void) FUNC_1(VAR_9, (caddr_t)VAR_7,
        VAR_5, &VAR_11, VAR_4, VAR_8, ((void*)0));
  }
         VAR_10 = FUNC_2(VAR_9, VAR_7->fg_flag, VAR_8);
  (void) FUNC_4(VAR_9);
 }
 return (VAR_10);
}
