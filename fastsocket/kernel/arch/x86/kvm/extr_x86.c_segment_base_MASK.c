
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ldttss_desc64 {scalar_t__ base3; } ;
struct descriptor_table {unsigned long base; } ;
struct desc_struct {scalar_t__ s; int type; } ;


 unsigned long FUNC_0 (struct desc_struct*) ;
 int FUNC_1 (struct descriptor_table*) ;
 int FUNC_2 () ;

unsigned long FUNC_3(u16 VAR_0)
{
 struct descriptor_table VAR_1;
 struct desc_struct *VAR_2;
 unsigned long VAR_3;
 unsigned long VAR_4;

 if (VAR_0 == 0)
  return 0;

 FUNC_1(&VAR_1);
 VAR_3 = VAR_1.base;

 if (VAR_0 & 4) {
  u16 VAR_5 = FUNC_2();

  VAR_3 = FUNC_3(VAR_5);
 }
 VAR_2 = (struct desc_struct *)(VAR_3 + (VAR_0 & ~7));
 VAR_4 = FUNC_0(VAR_2);




 return VAR_4;
}
