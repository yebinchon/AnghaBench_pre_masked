
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int (* t_oproc ) (struct tty*) ;} ;


 int FUNC_0 (struct tty*) ;
 int FUNC_1 (struct tty*) ;

int
FUNC_2(struct tty *VAR_0)
{
 FUNC_0(VAR_0);

 if (VAR_0->t_oproc != ((void*)0))
  (*VAR_0->t_oproc)(VAR_0);

 return (0);
}
