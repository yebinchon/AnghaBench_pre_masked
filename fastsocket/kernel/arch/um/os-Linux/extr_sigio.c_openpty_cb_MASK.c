
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct openpty_arg {int err; int slave; int master; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_1)
{
 struct openpty_arg *VAR_2 = VAR_1;

 VAR_2->err = 0;
 if (FUNC_0(&VAR_2->master, &VAR_2->slave, ((void*)0), ((void*)0), ((void*)0)))
  VAR_2->err = -VAR_0;
}
