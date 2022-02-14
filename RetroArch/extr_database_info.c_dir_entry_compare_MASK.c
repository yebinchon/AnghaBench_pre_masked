
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_elem {int data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
   const struct string_list_elem *VAR_2 = (const struct string_list_elem*)VAR_0;
   const struct string_list_elem *VAR_3 = (const struct string_list_elem*)VAR_1;
   bool VAR_4 = FUNC_0(VAR_2->data);
   bool VAR_5 = FUNC_0(VAR_3->data);

   return (int) VAR_5 - (int) VAR_4;
}
