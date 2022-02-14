
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct descriptor_table {scalar_t__ base; } ;
struct desc_struct {int type; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct descriptor_table*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{



 struct descriptor_table VAR_1;
 struct desc_struct *VAR_2;

 FUNC_0(&VAR_1);
 VAR_2 = (void *)VAR_1.base;
 VAR_2[VAR_0].type = 9;
 FUNC_1();
}
