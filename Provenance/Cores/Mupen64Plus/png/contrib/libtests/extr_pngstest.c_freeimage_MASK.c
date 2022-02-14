
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* tmpfile_name; int opts; scalar_t__ input_memory_size; int * input_memory; int * input_file; int image; } ;
typedef TYPE_1__ Image ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static void
FUNC_5(Image *VAR_1)
{
   FUNC_2(VAR_1);
   FUNC_3(&VAR_1->image);

   if (VAR_1->input_file != ((void*)0))
   {
      FUNC_0(VAR_1->input_file);
      VAR_1->input_file = ((void*)0);
   }

   if (VAR_1->input_memory != ((void*)0))
   {
      FUNC_1(VAR_1->input_memory);
      VAR_1->input_memory = ((void*)0);
      VAR_1->input_memory_size = 0;
   }

   if (VAR_1->tmpfile_name[0] != 0 && (VAR_1->opts & VAR_0) == 0)
   {
      (void)FUNC_4(VAR_1->tmpfile_name);
      VAR_1->tmpfile_name[0] = 0;
   }
}
