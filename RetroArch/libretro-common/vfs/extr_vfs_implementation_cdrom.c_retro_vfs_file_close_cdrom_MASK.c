
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* orig_path; int fp; int fh; } ;
typedef TYPE_1__ libretro_vfs_implementation_file ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int VAR_0 ;

int FUNC_4(libretro_vfs_implementation_file *VAR_1)
{
   if (!VAR_1->fp || FUNC_1(VAR_1->fp))
      return -1;


   return 0;
}
