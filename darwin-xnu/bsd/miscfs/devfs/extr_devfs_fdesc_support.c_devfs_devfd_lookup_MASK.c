
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnop_lookup_args {int a_context; struct componentname* a_cnp; struct vnode* a_dvp; struct vnode** a_vpp; } ;
struct vnode {int v_mount; } ;
struct proc {TYPE_1__* p_fd; } ;
struct componentname {char* cn_nameptr; int cn_namelen; } ;
struct TYPE_2__ {int fd_nfiles; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,scalar_t__,int ,struct vnode**,int ,int) ;
 int ** FUNC_1 (struct proc*,int) ;
 int* FUNC_2 (struct proc*,int) ;
 struct proc* FUNC_3 (int ) ;
 int FUNC_4 (struct vnode*) ;

int
FUNC_5(struct vnop_lookup_args *VAR_6)
{
 struct vnode **VAR_7 = VAR_6->a_vpp;
 struct vnode *VAR_8 = VAR_6->a_dvp;
 struct componentname *VAR_9 = VAR_6->a_cnp;
 char *VAR_10 = VAR_9->cn_nameptr;
 struct proc *VAR_11 = FUNC_3(VAR_6->a_context);
 int VAR_12 = VAR_11->p_fd->fd_nfiles;
 int VAR_13;
 int VAR_14;
 struct vnode *VAR_15;

 if (VAR_9->cn_namelen == 1 && *VAR_10 == '.') {
  *VAR_7 = VAR_8;

  if ( (VAR_14 = FUNC_4(VAR_8)) ) {
   return(VAR_14);
  }
  return (0);
 }

 VAR_13 = 0;
 while (*VAR_10 >= '0' && *VAR_10 <= '9') {
  VAR_13 = 10 * VAR_13 + *VAR_10++ - '0';
  if (VAR_13 >= VAR_12)
   break;
 }

 if (*VAR_10 != '\0') {
  VAR_14 = VAR_1;
  goto bad;
 }

 if (VAR_13 < 0 || VAR_13 >= VAR_12 ||
   *FUNC_1(VAR_11, VAR_13) == ((void*)0) ||
   (*FUNC_2(VAR_11, VAR_13) & VAR_4)) {
  VAR_14 = VAR_0;
  goto bad;
 }

 VAR_14 = FUNC_0(VAR_3, VAR_2+VAR_13, VAR_8->v_mount, &VAR_15, VAR_5, VAR_13);
 if (VAR_14)
  goto bad;
 *VAR_7 = VAR_15;
 return (0);

bad:
 *VAR_7 = ((void*)0);
 return (VAR_14);
}
