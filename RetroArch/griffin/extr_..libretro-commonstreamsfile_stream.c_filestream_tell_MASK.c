
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int libretro_vfs_implementation_file ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {int error_flag; scalar_t__ hfile; } ;
typedef TYPE_1__ RFILE ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;

int64_t FUNC_2(RFILE *VAR_2)
{
   int64_t VAR_3;

   if (VAR_0 != ((void*)0))
      VAR_3 = FUNC_0(VAR_2->hfile);
   else
      VAR_3 = FUNC_1((libretro_vfs_implementation_file*)VAR_2->hfile);

   if (VAR_3 == VAR_1)
      VAR_2->error_flag = 1;

   return VAR_3;
}
