
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int libretro_vfs_implementation_file ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {int error_flag; int eof_flag; scalar_t__ hfile; } ;
typedef TYPE_1__ RFILE ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,int) ;
 scalar_t__ VAR_0 ;

int64_t FUNC_2(RFILE *VAR_1, int64_t VAR_2, int VAR_3)
{
   int64_t VAR_4;

   if (&FUNC_0 != ((void*)0))
      VAR_4 = FUNC_0(VAR_1->hfile, VAR_2, VAR_3);
   else
      VAR_4 = FUNC_1((libretro_vfs_implementation_file*)VAR_1->hfile, VAR_2, VAR_3);

   if (VAR_4 == VAR_0)
      VAR_1->error_flag = 1;
   VAR_1->eof_flag = 0;

   return VAR_4;
}
