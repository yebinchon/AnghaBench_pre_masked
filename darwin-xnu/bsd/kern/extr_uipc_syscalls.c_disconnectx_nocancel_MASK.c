
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct proc {int dummy; } ;
struct disconnectx_args {int s; int cid; int aid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct socket**) ;
 int FUNC_2 (struct socket*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct proc *VAR_1, struct disconnectx_args *VAR_2, int *VAR_3)
{
#pragma unused(p, retval)
 struct socket *VAR_4;
 int VAR_5 = VAR_2->s;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, &VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);
 if (VAR_4 == ((void*)0)) {
  VAR_6 = VAR_0;
  goto out;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_2->aid, VAR_2->cid);
out:
 FUNC_0(VAR_5);
 return (VAR_6);
}
