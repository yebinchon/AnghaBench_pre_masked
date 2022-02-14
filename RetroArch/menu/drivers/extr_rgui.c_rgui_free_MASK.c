
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * thumbnail_path_data; } ;
typedef TYPE_1__ rgui_t ;
struct TYPE_4__ {int * data; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static void FUNC_4(void *VAR_4)
{
   rgui_t *VAR_5 = (rgui_t*)VAR_4;

   if (VAR_5)
   {
      if (VAR_5->thumbnail_path_data)
         FUNC_0(VAR_5->thumbnail_path_data);
   }

   FUNC_2();
   FUNC_1();
   FUNC_3(&VAR_0);
   FUNC_3(&VAR_2);
   FUNC_3(&VAR_1);

   if (VAR_3.data)
   {
      FUNC_0(VAR_3.data);
      VAR_3.data = ((void*)0);
   }
}
