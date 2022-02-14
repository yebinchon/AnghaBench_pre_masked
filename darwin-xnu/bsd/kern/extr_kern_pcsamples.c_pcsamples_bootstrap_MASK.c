
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,scalar_t__*,int ) ;
 int VAR_4 ;
 unsigned int* VAR_5 ;
 unsigned int* VAR_6 ;
 unsigned int* VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

int
FUNC_2(void)
{
        if (!FUNC_0())
            return(VAR_1);

 VAR_8 = VAR_4 * sizeof(* VAR_5);
 if (FUNC_1(VAR_3, &VAR_9,
         (vm_size_t)VAR_8) == VAR_2)
   VAR_5 = (unsigned int *) VAR_9;
 else
   VAR_5 = ((void*)0);

 if (VAR_5) {
  VAR_7 = VAR_5;
  VAR_6 = &VAR_7[VAR_4];
  VAR_10 = 0;
  return(0);
 } else {
  VAR_8=0;
  return(VAR_0);
 }

}
