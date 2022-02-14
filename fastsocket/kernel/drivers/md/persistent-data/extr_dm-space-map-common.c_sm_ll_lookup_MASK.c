
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ll_disk {int dummy; } ;
typedef int dm_block_t ;


 int FUNC_0 (struct ll_disk*,int ,int*) ;
 int FUNC_1 (struct ll_disk*,int ,int*) ;

int FUNC_2(struct ll_disk *VAR_0, dm_block_t VAR_1, uint32_t *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);

 if (VAR_3)
  return VAR_3;

 if (*VAR_2 != 3)
  return VAR_3;

 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
