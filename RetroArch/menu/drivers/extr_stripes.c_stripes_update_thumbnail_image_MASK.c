
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * left_thumbnail_file_path; int left_thumbnail; int * thumbnail_file_path; int thumbnail; } ;
typedef TYPE_1__ stripes_handle_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_2)
{
   stripes_handle_t *VAR_3 = (stripes_handle_t*)VAR_2;
   bool VAR_4 = FUNC_4();
   if (!VAR_3)
      return;

   if (!(FUNC_2(VAR_3->thumbnail_file_path)))
      {
         if (FUNC_1(VAR_3->thumbnail_file_path))
            FUNC_3(VAR_3->thumbnail_file_path,
                  VAR_4, 0,
                  VAR_1, ((void*)0));
         else
            FUNC_5(&VAR_3->thumbnail);

         FUNC_0(VAR_3->thumbnail_file_path);
         VAR_3->thumbnail_file_path = ((void*)0);
      }

   if (!(FUNC_2(VAR_3->left_thumbnail_file_path)))
      {
         if (FUNC_1(VAR_3->left_thumbnail_file_path))
            FUNC_3(VAR_3->left_thumbnail_file_path,
                  VAR_4, 0,
                  VAR_0, ((void*)0));
         else
            FUNC_5(&VAR_3->left_thumbnail);

         FUNC_0(VAR_3->left_thumbnail_file_path);
         VAR_3->left_thumbnail_file_path = ((void*)0);
      }
}
