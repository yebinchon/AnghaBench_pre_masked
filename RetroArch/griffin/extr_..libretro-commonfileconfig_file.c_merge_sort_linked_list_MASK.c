
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_entry_list {struct config_entry_list* next; } ;



__attribute__((used)) static struct config_entry_list* FUNC_0(
         struct config_entry_list *VAR_0, int (*VAR_1)(
         struct config_entry_list *VAR_2,struct config_entry_list *VAR_3))
{
   struct config_entry_list
         *VAR_4 = VAR_0,
         *VAR_5 = VAR_0,
         *VAR_6 = VAR_0,
         *VAR_7 = 0,
         *VAR_8 = 0,
         *VAR_9 = 0;


   if (!VAR_0 || !VAR_0->next)
      return VAR_0;



   while (VAR_5 && VAR_5->next)
   {
      VAR_6 = VAR_4;
      VAR_4 = VAR_4->next;
      VAR_5 = VAR_5->next->next;
   }



   VAR_6->next = 0;


   VAR_0 = FUNC_0(VAR_0, VAR_1);
   VAR_4 = FUNC_0(VAR_4, VAR_1);


   while (VAR_0 || VAR_4)
   {

      if (!VAR_4)
      {
         VAR_8 = VAR_0;
         VAR_0 = VAR_0->next;
      }
      else if (!VAR_0)
      {
         VAR_8 = VAR_4;
         VAR_4 = VAR_4->next;
      }
      else if (VAR_1(VAR_0, VAR_4) < 0)
      {
         VAR_8 = VAR_0;
         VAR_0 = VAR_0->next;
      }
      else
      {
         VAR_8 = VAR_4;
         VAR_4 = VAR_4->next;
      }

      if (!VAR_7)
         VAR_7 = VAR_8;
      else
         VAR_9->next = VAR_8;

      VAR_9 = VAR_8;
   }

   return VAR_7;
}
