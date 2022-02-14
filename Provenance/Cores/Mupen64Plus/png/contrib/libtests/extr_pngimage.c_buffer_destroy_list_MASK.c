
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_list {struct buffer_list* next; } ;


 int FUNC_0 (struct buffer_list*) ;

__attribute__((used)) static void
FUNC_1(struct buffer_list *VAR_0)
{
   if (VAR_0 != ((void*)0))
   {
      struct buffer_list *VAR_1 = VAR_0->next;
      FUNC_0(VAR_0);
      FUNC_1(VAR_1);
   }
}
