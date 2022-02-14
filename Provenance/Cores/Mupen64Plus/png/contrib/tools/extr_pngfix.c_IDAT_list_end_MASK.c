
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IDAT_list {struct IDAT_list* next; } ;


 int FUNC_0 (struct IDAT_list) ;
 int FUNC_1 (struct IDAT_list*,int ) ;
 int FUNC_2 (struct IDAT_list*,int ) ;
 int FUNC_3 (struct IDAT_list*) ;

__attribute__((used)) static void
FUNC_4(struct IDAT_list *VAR_0)
{
   struct IDAT_list *VAR_1 = VAR_0->next;

   FUNC_0(*VAR_0);

   while (VAR_1 != ((void*)0))
   {
      struct IDAT_list *VAR_2 = VAR_1->next;

      FUNC_2(VAR_1, FUNC_1(VAR_1, 0));
      FUNC_3(VAR_1);
      VAR_1 = VAR_2;
   }
}
