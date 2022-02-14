
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int savestate_thumbnail; int savestate_thumbnail_file_path; } ;
typedef TYPE_1__ stripes_handle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
   stripes_handle_t *VAR_2 = (stripes_handle_t*)VAR_1;
   if (!VAR_2)
      return;

   if (FUNC_0(VAR_2->savestate_thumbnail_file_path))
      FUNC_1(VAR_2->savestate_thumbnail_file_path,
            FUNC_2(), 0,
            VAR_0, ((void*)0));
   else
      FUNC_3(&VAR_2->savestate_thumbnail);
}
