
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int t_gen; int t_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty*) ;
 int FUNC_1 (void*,int *,int,char const*,int,int (*) (int)) ;

int
FUNC_2(struct tty *VAR_1, void *VAR_2, int VAR_3, const char *VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;

 FUNC_0(VAR_1);

 VAR_7 = VAR_1->t_gen;

 VAR_6 = FUNC_1(VAR_2, &VAR_1->t_lock, VAR_3, VAR_4, VAR_5, (int (*)(int))0);
 if (VAR_6)
  return (VAR_6);
 return (VAR_1->t_gen == VAR_7 ? 0 : VAR_0);
}
