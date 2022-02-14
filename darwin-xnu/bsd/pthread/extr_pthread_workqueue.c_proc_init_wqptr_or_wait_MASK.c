
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue {int dummy; } ;
struct proc {struct workqueue* p_wqptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct workqueue* VAR_2 ;
 int FUNC_0 (struct workqueue**,int ) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool
FUNC_4(struct proc *VAR_3)
{
 struct workqueue *VAR_4;

 FUNC_1(VAR_3);
 VAR_4 = VAR_3->p_wqptr;

 if (VAR_4 == ((void*)0)) {
  VAR_3->p_wqptr = VAR_2;
  FUNC_2(VAR_3);
  return 1;
 }

 if (VAR_4 == VAR_2) {
  FUNC_0(&VAR_3->p_wqptr, VAR_1);
  FUNC_2(VAR_3);
  FUNC_3(VAR_0);
 } else {
  FUNC_2(VAR_3);
 }
 return 0;
}
