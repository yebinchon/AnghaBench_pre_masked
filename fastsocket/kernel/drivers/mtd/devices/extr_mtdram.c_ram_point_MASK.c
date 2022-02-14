
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ size; void* priv; } ;
typedef int resource_size_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
  size_t *VAR_4, void **VAR_5, resource_size_t *VAR_6)
{
 if (VAR_2 + VAR_3 > VAR_1->size)
  return -VAR_0;


 if (VAR_6)
  return -VAR_0;

 *VAR_5 = VAR_1->priv + VAR_2;
 *VAR_4 = VAR_3;
 return 0;
}
