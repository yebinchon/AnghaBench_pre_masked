
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uthread {int uu_workq_flags; int uu_thread; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct uthread*) ;

__attribute__((used)) static inline void
FUNC_2(struct uthread *VAR_1)
{
 if ((VAR_1->uu_workq_flags & VAR_0) == 0) {
  FUNC_0(FUNC_1(VAR_1), VAR_1->uu_thread);
 }
}
