
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IDAT_list {int length; int * next; } ;


 int FUNC_0 (struct IDAT_list) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct IDAT_list *VAR_1)
{
   FUNC_0(*VAR_1);

   VAR_1->next = ((void*)0);
   VAR_1->length = VAR_0;
}
