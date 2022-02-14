
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_struct {struct op_struct* next; } ;


 int FUNC_0 (struct op_struct*) ;
 struct op_struct* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 while (VAR_0) {
  struct op_struct *VAR_1 = VAR_0;
  VAR_0 = VAR_0->next;
  FUNC_0(VAR_1);
 }
}
