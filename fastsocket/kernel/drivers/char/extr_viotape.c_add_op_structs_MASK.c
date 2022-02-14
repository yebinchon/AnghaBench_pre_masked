
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct op_struct {struct op_struct* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct op_struct* FUNC_1 (int,int ) ;
 struct op_struct* VAR_2 ;

__attribute__((used)) static int FUNC_2(int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
  struct op_struct *VAR_5 =
   FUNC_1(sizeof(*VAR_5), VAR_1);
  if (!VAR_5) {
   FUNC_0();
   return -VAR_0;
  }
  VAR_5->next = VAR_2;
  VAR_2 = VAR_5;
 }
 return 0;
}
