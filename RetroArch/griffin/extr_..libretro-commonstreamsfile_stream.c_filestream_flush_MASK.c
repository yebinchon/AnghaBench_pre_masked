
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int libretro_vfs_implementation_file ;
struct TYPE_3__ {int error_flag; scalar_t__ hfile; } ;
typedef TYPE_1__ RFILE ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

int FUNC_2(RFILE *VAR_1)
{
   int VAR_2;

   if (&FUNC_0 != ((void*)0))
      VAR_2 = FUNC_0(VAR_1->hfile);
   else
      VAR_2 = FUNC_1((libretro_vfs_implementation_file*)VAR_1->hfile);

   if (VAR_2 == VAR_0)
      VAR_1->error_flag = 1;

   return VAR_2;
}
