
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_parms {int used_wait_atomic; int number; int done; int wait_atomic; } ;
typedef int HvLpIndex ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int,int,int *,struct alloc_parms*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(HvLpIndex VAR_4, int VAR_5)
{
 struct alloc_parms VAR_6;

 if (VAR_2 != VAR_1) {
  VAR_6.used_wait_atomic = 1;
  FUNC_1(&VAR_6.wait_atomic, 1);
 } else {
  VAR_6.used_wait_atomic = 0;
  FUNC_2(&VAR_6.done);
 }
 FUNC_4(VAR_4, VAR_0, 250,
       VAR_5, &VAR_3, &VAR_6);
 if (VAR_2 != VAR_1) {
  while (FUNC_0(&VAR_6.wait_atomic))
   FUNC_3();
 } else
  FUNC_5(&VAR_6.done);
 return VAR_6.number;
}
