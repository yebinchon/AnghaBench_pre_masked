
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
typedef int path_buf ;
struct TYPE_7__ {int * directory; int * entry; int error; int orig_path; } ;
typedef TYPE_2__ libretro_vfs_implementation_dir ;
struct TYPE_6__ {int dwFileAttributes; } ;


 int VAR_0 ;
 int * FUNC_0 (char*,int **) ;
 int * FUNC_1 (char*,int **) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (char const*,int **) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (char const*) ;
 int * FUNC_7 (char const*) ;
 int * FUNC_8 (char const*) ;
 int FUNC_9 (TYPE_2__*) ;
 int * FUNC_10 (char const*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char const*) ;
 size_t FUNC_13 (char*,char const*,int) ;
 unsigned int FUNC_14 (char const*) ;
 char* FUNC_15 (char*) ;
 char* FUNC_16 (char*) ;

libretro_vfs_implementation_dir *FUNC_17(
      const char *VAR_1, bool VAR_2)
{
   libretro_vfs_implementation_dir *VAR_3;


   if (!VAR_1 || (*VAR_1 == 0))
      return ((void*)0);


   VAR_3 = (libretro_vfs_implementation_dir*)FUNC_2(1, sizeof(*VAR_3));
   if (!VAR_3)
      return ((void*)0);

   VAR_3->orig_path = FUNC_11(VAR_1);
   VAR_3->directory = FUNC_6(VAR_1);
   VAR_3->entry = ((void*)0);
   if (VAR_3->directory && !FUNC_4(VAR_3))
      return VAR_3;

   FUNC_9(VAR_3);
   return ((void*)0);
}
