
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpages {unsigned long context_u; void* context_ptr; int next_page; int get_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct dpages *VAR_3, void *VAR_4)
{
 VAR_3->get_page = VAR_1;
 VAR_3->next_page = VAR_2;
 VAR_3->context_u = ((unsigned long) VAR_4) & (VAR_0 - 1);
 VAR_3->context_ptr = VAR_4;
}
