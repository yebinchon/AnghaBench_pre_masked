
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btpad_queue_command {int dummy; } ;


 int FUNC_0 (size_t*) ;
 int FUNC_1 (struct btpad_queue_command*) ;
 scalar_t__ VAR_0 ;
 struct btpad_queue_command* VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
   for (; VAR_0 && (VAR_2 != VAR_3); VAR_0--)
   {
      struct btpad_queue_command* VAR_4 = &VAR_1[VAR_3];
      FUNC_1(VAR_4);
      FUNC_0(&VAR_3);
   }
}
