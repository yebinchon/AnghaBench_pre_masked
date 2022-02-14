
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int user_addr_t ;
typedef int kd_threadmap ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,unsigned int) ;
 int * FUNC_1 (unsigned int,unsigned int*,unsigned int*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,unsigned int) ;

int
FUNC_3(user_addr_t VAR_3, size_t *VAR_4)
{
 kd_threadmap *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8 = 0;
 int VAR_9 = 0;

 VAR_8 = *VAR_4/sizeof(kd_threadmap);
 *VAR_4 = 0;

 if ( (VAR_5 = FUNC_1(VAR_8, &VAR_6, &VAR_7)) ) {
  if (FUNC_0(VAR_5, VAR_3, VAR_7 * sizeof(kd_threadmap)))
   VAR_9 = VAR_0;
  else
   *VAR_4 = (VAR_7 * sizeof(kd_threadmap));

  FUNC_2(VAR_2, (vm_offset_t)VAR_5, VAR_6);
 } else
  VAR_9 = VAR_1;

 return (VAR_9);
}
