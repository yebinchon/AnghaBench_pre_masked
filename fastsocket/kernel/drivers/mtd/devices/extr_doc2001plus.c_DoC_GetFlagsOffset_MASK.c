
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
typedef int loff_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct mtd_info *VAR_1, loff_t *VAR_2)
{
 unsigned int VAR_3, VAR_4;

 VAR_4 = VAR_0;
 VAR_3 = (*VAR_2 & 0x200) ? 8 : 6;
 *VAR_2 = (*VAR_2 & ~0x3ff) | VAR_3;
 return VAR_4;
}
