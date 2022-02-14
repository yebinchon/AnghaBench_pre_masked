
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int dummy; } ;
typedef int loff_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct mtd_info *VAR_2, loff_t *VAR_3)
{
 unsigned int VAR_4, VAR_5;

 if (*VAR_3 & 0x200) {
  VAR_5 = VAR_1;
  VAR_4 = 10 + (*VAR_3 & 0xf);
 } else {
  VAR_5 = VAR_0;
  VAR_4 = (*VAR_3 & 0xf);
 }

 *VAR_3 = (*VAR_3 & ~0x3ff) | VAR_4;
 return VAR_5;
}
