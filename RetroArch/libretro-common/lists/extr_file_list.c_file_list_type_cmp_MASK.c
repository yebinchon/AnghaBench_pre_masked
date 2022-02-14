
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item_file {scalar_t__ type; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
   const struct item_file *VAR_2 = (const struct item_file*)VAR_0;
   const struct item_file *VAR_3 = (const struct item_file*)VAR_1;
   if (VAR_2->type < VAR_3->type)
      return -1;
   if (VAR_2->type == VAR_3->type)
      return 0;

   return 1;
}
