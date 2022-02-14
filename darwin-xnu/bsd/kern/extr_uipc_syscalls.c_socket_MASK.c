
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_args {int protocol; int type; int domain; } ;
struct proc {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 () ;
 int FUNC_1 (struct proc*,int ,int ,int ,int ,int *,int ) ;

int
FUNC_2(struct proc *VAR_0,
 struct socket_args *VAR_1,
 int32_t *VAR_2)
{
 return (FUNC_1(VAR_0, VAR_1->domain, VAR_1->type, VAR_1->protocol,
     FUNC_0(), VAR_2, 0));
}
