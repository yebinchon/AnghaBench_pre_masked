
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct kcdata_item {int dummy; } ;


 int VAR_0 ;

uint32_t FUNC_0(uint32_t VAR_1, uint32_t VAR_2)
{



 uint32_t VAR_3 = VAR_1 * (VAR_0 - 1);
 uint32_t VAR_4 = VAR_1 * sizeof(struct kcdata_item);
 uint32_t VAR_5 = 2 * sizeof(struct kcdata_item);

 return VAR_3 + VAR_4 + VAR_5 + VAR_2;
}
