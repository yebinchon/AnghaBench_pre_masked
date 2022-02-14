
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct retro_vfs_file_handle {int dummy; } ;
struct TYPE_3__ {int error_flag; int eof_flag; struct retro_vfs_file_handle* hfile; } ;
typedef TYPE_1__ RFILE ;


 scalar_t__ FUNC_0 (char const*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,unsigned int,unsigned int) ;

RFILE* FUNC_3(const char *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
   struct retro_vfs_file_handle *VAR_3 = ((void*)0);
   RFILE* VAR_4 = ((void*)0);

   if (&FUNC_0 != ((void*)0))
      VAR_3 = (struct retro_vfs_file_handle*)
         FUNC_0(VAR_0, VAR_1, VAR_2);
   else
      VAR_3 = (struct retro_vfs_file_handle*)
         FUNC_2(VAR_0, VAR_1, VAR_2);

   if (!VAR_3)
      return ((void*)0);

   VAR_4 = (RFILE*)FUNC_1(sizeof(RFILE));
   VAR_4->error_flag = 0;
   VAR_4->eof_flag = 0;
   VAR_4->hfile = VAR_3;
   return VAR_4;
}
