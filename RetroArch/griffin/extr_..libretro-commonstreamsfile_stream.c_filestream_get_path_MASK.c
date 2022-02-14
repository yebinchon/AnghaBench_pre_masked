
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int libretro_vfs_implementation_file ;
struct TYPE_3__ {scalar_t__ hfile; } ;
typedef TYPE_1__ RFILE ;


 char const* FUNC_0 (scalar_t__) ;
 char const* FUNC_1 (int *) ;

const char* FUNC_2(RFILE *VAR_0)
{
   if (&FUNC_0 != ((void*)0))
      return FUNC_0(VAR_0->hfile);

   return FUNC_1((libretro_vfs_implementation_file*)VAR_0->hfile);
}
