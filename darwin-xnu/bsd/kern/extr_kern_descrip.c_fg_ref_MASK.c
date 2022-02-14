
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileproc {unsigned int f_flags; struct fileglob* f_fglob; } ;
struct fileglob {scalar_t__ fg_count; int fg_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct fileproc*,...) ;

void
FUNC_3(struct fileproc * VAR_1)
{
 struct fileglob *VAR_2;

 VAR_2 = VAR_1->f_fglob;

 FUNC_0(&VAR_2->fg_lock);
 VAR_2->fg_count++;
 FUNC_1(&VAR_2->fg_lock);
}
