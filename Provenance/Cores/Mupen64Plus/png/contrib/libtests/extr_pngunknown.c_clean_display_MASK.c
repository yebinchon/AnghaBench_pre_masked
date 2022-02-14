
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* file; char* test; int * end_ptr; int * info_ptr; int * png_ptr; } ;
typedef TYPE_1__ display ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 (int **,int **,int **) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(display *VAR_1)
{
   FUNC_2(&VAR_1->png_ptr, &VAR_1->info_ptr, &VAR_1->end_ptr);


   if (VAR_1->png_ptr != ((void*)0) || VAR_1->info_ptr != ((void*)0) || VAR_1->end_ptr != ((void*)0))
   {
      FUNC_1(VAR_0, "%s(%s): png_destroy_read_struct error\n", VAR_1->file,
         VAR_1->test);
      FUNC_0(1);
   }
}
