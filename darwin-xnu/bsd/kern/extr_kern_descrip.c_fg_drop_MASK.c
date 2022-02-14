
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileproc {struct fileglob* f_fglob; } ;
struct fileglob {int fg_lock; int fg_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct fileproc * VAR_0)
{
 struct fileglob *VAR_1;

 VAR_1 = VAR_0->f_fglob;
 FUNC_0(&VAR_1->fg_lock);
 VAR_1->fg_count--;
 FUNC_1(&VAR_1->fg_lock);
}
