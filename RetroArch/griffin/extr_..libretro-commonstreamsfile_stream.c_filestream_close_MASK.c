
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct retro_vfs_file_handle {int dummy; } ;
typedef int libretro_vfs_implementation_file ;
struct TYPE_4__ {struct retro_vfs_file_handle* hfile; } ;
typedef TYPE_1__ RFILE ;


 int FUNC_0 (struct retro_vfs_file_handle*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

int FUNC_3(RFILE *VAR_0)
{
   int VAR_1;
   struct retro_vfs_file_handle* VAR_2 = VAR_0->hfile;

   if (&FUNC_0 != ((void*)0))
      VAR_1 = FUNC_0(VAR_2);
   else
      VAR_1 = FUNC_2((libretro_vfs_implementation_file*)VAR_2);

   if (VAR_1 == 0)
      FUNC_1(VAR_0);

   return VAR_1;
}
