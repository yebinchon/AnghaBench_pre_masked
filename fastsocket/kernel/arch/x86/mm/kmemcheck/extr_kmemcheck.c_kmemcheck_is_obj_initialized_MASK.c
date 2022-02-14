
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum kmemcheck_shadow { ____Placeholder_kmemcheck_shadow } kmemcheck_shadow ;


 int VAR_0 ;
 void* FUNC_0 (unsigned long) ;
 int FUNC_1 (void*,size_t) ;

bool FUNC_2(unsigned long VAR_1, size_t VAR_2)
{
 enum kmemcheck_shadow VAR_3;
 void *VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4)
  return 1;

 VAR_3 = FUNC_1(VAR_4, VAR_2);

 return VAR_3 == VAR_0;
}
