
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileglob {int fg_lflags; int fg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static inline void
FUNC_3(struct fileglob *VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(&VAR_2->fg_lock);
 if (VAR_2->fg_lflags & VAR_1) {
  VAR_3 = 1;
 }
 VAR_2->fg_lflags &= ~(VAR_0 | VAR_1);
 FUNC_1(&VAR_2->fg_lock);
 if (VAR_3) {
  FUNC_2(&VAR_2->fg_lflags);
 }
}
