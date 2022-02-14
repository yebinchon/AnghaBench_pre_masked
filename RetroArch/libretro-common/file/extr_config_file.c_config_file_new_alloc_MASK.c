
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_file {int guaranteed_no_duplicates; scalar_t__ include_depth; int * includes; int * last; int * tail; int * entries; int * path; } ;
typedef struct config_file config_file_t ;


 scalar_t__ FUNC_0 (int) ;

config_file_t *FUNC_1(void)
{
   struct config_file *VAR_0 = (struct config_file*)FUNC_0(sizeof(*VAR_0));
   if (!VAR_0)
      return ((void*)0);

   VAR_0->path = ((void*)0);
   VAR_0->entries = ((void*)0);
   VAR_0->tail = ((void*)0);
   VAR_0->last = ((void*)0);
   VAR_0->includes = ((void*)0);
   VAR_0->include_depth = 0;
   VAR_0->guaranteed_no_duplicates = 0 ;

   return VAR_0;
}
