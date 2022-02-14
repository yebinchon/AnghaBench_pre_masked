
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int task_t ;
typedef int * task_array_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static kern_return_t
FUNC_6(void)
{
 FUNC_3(VAR_3, VAR_2);

 vm_size_t VAR_8 = 0;

 for (;;) {
  FUNC_4(&VAR_7);


  VAR_8 = VAR_6 * sizeof(task_t);
  if (VAR_8 <= VAR_5) {
   break;
  }


  FUNC_5(&VAR_7);


  if (VAR_8 > VAR_5) {
   if (VAR_5 != 0) {
    FUNC_2(VAR_4, VAR_5);
   }

   FUNC_0(VAR_8 > 0);
   VAR_5 = VAR_8;

   VAR_4 = (task_array_t)FUNC_1(VAR_5);
   if (VAR_4 == ((void*)0)) {
    VAR_5 = 0;
    return VAR_0;
   }
  }
 }

 return VAR_1;
}
