
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_elem {int dummy; } ;
struct string_list {int size; int elems; } ;


 int FUNC_0 (int ,int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct string_list *VAR_2, bool VAR_3)
{
   if (VAR_2)
      FUNC_0(VAR_2->elems, VAR_2->size, sizeof(struct string_list_elem),
            VAR_3 ? VAR_0 : VAR_1);
}
