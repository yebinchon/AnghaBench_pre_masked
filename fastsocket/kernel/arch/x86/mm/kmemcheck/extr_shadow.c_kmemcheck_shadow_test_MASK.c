
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef enum kmemcheck_shadow { ____Placeholder_kmemcheck_shadow } kmemcheck_shadow ;


 scalar_t__ VAR_0 ;

enum kmemcheck_shadow FUNC_0(void *VAR_1, unsigned int VAR_2)
{
 uint8_t *VAR_3;
 unsigned int VAR_4;

 VAR_3 = VAR_1;
 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  if (VAR_3[VAR_4] != VAR_0)
   return VAR_3[VAR_4];
 }


 return VAR_3[0];
}
