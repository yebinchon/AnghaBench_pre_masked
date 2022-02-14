
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ directory; struct TYPE_4__* orig_path; int error; } ;
typedef TYPE_1__ libretro_vfs_implementation_dir ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

int FUNC_7(libretro_vfs_implementation_dir *VAR_1)
{
   if (!VAR_1)
      return -1;
   if (VAR_1->directory)
      FUNC_2(VAR_1->directory);


   if (VAR_1->orig_path)
      FUNC_3(VAR_1->orig_path);
   FUNC_3(VAR_1);
   return 0;
}
