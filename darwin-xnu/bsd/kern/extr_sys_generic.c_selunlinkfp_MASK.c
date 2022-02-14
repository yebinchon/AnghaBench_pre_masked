
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct waitq_set {int dummy; } ;
struct fileproc {int f_flags; void* f_wset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct waitq_set*) ;
 int FUNC_1 (int *,struct waitq_set*) ;
 int FUNC_2 (int ,struct waitq_set*) ;

__attribute__((used)) static void FUNC_3(struct fileproc *VAR_3, uint64_t VAR_4, struct waitq_set *VAR_5)
{
 int VAR_6 = FUNC_0(VAR_5);
 int VAR_7 = !!VAR_4;
 if (VAR_7 && VAR_6)
  FUNC_2(VAR_4, VAR_5);


 if (!VAR_3 || !(VAR_3->f_flags & (VAR_0|VAR_1)))
  return;
 if (VAR_6 && (VAR_3->f_flags & VAR_1))
  FUNC_1(&VAR_2, VAR_5);







 if (VAR_6 && VAR_3->f_wset == (void *)VAR_5) {
  VAR_3->f_flags &= ~VAR_0;
  VAR_3->f_wset = ((void*)0);
 }
}
