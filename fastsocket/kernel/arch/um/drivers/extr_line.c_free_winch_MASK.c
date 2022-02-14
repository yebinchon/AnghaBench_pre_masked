
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winch {int pid; int fd; scalar_t__ stack; int list; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct winch*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct winch*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct winch *VAR_1, int VAR_2)
{
 FUNC_3(&VAR_1->list);

 if (VAR_1->pid != -1)
  FUNC_5(VAR_1->pid, 1);
 if (VAR_1->fd != -1)
  FUNC_4(VAR_1->fd);
 if (VAR_1->stack != 0)
  FUNC_1(VAR_1->stack, 0);
 if (VAR_2)
  FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_1);
}
