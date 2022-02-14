
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct asyncppp* disc_data; } ;
struct asyncppp {int refcnt; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct asyncppp *FUNC_3(struct tty_struct *VAR_1)
{
 struct asyncppp *VAR_2;

 FUNC_1(&VAR_0);
 VAR_2 = VAR_1->disc_data;
 if (VAR_2 != ((void*)0))
  FUNC_0(&VAR_2->refcnt);
 FUNC_2(&VAR_0);
 return VAR_2;
}
