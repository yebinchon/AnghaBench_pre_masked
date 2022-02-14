
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct vnode* vnode_t ;
struct vnode {int v_flag; } ;
struct proc {int dummy; } ;
struct fileproc {int f_flag; scalar_t__ f_type; TYPE_1__* f_fglob; } ;
struct TYPE_2__ {scalar_t__ fg_data; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct proc*,int,struct fileproc*,int) ;
 int FUNC_2 (struct proc*,int,struct fileproc**,int) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 scalar_t__ FUNC_5 (struct vnode*) ;

int
FUNC_6(struct proc *VAR_6, struct fileproc **VAR_7, int VAR_8, int VAR_9)
{
 vnode_t VAR_10;
 int VAR_11;
 struct fileproc *VAR_12;

 FUNC_0(VAR_8, VAR_8);

 FUNC_3(VAR_6);

 VAR_11 = FUNC_2(VAR_6, VAR_8, &VAR_12, 1);

 if (VAR_11) {
         FUNC_4(VAR_6);
  return (VAR_11);
 }
 if ((VAR_12->f_flag & VAR_4) == 0) {
         VAR_11 = VAR_1;
  goto out;
 }
 if (VAR_9 && (VAR_12->f_type != VAR_0)) {
         VAR_11 = VAR_3;
  goto out;
 }
 if (VAR_12->f_type == VAR_0) {
  VAR_10 = (struct vnode *)VAR_12->f_fglob->fg_data;

  if (VAR_9 && (FUNC_5(VAR_10))) {
   VAR_11 = VAR_3;
   goto out;
  }
  if (VAR_9 && (VAR_10->v_flag & VAR_5)) {
   VAR_11 = VAR_2;
   goto out;
  }
 }

 *VAR_7 = VAR_12;

        FUNC_4(VAR_6);
 return (0);

out:
 FUNC_1(VAR_6, VAR_8, VAR_12, 1);
 FUNC_4(VAR_6);
 return (VAR_11);
}
