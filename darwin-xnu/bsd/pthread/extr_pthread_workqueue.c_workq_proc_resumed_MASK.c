
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct workqueue {int wq_flags; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int,int ) ;
 struct workqueue* FUNC_3 (struct proc*) ;
 int VAR_5 ;
 int FUNC_4 (struct workqueue*,int ) ;
 int FUNC_5 (struct workqueue*) ;

void
FUNC_6(struct proc *VAR_6)
{
 struct workqueue *VAR_7 = FUNC_3(VAR_6);
 uint32_t VAR_8;

 if (!VAR_7) return;

 VAR_8 = FUNC_2(&VAR_7->wq_flags, ~(VAR_4 |
   VAR_1 | VAR_3), VAR_5);
 if ((VAR_8 & VAR_2) == 0) {
  FUNC_0();
  if (VAR_8 & VAR_3) {
   FUNC_5(VAR_7);
  } else if (VAR_8 & VAR_1) {
   FUNC_4(VAR_7,
     VAR_0);
  }
  FUNC_1();
 }
}
