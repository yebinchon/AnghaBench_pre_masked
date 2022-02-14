
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* entry; } ;
typedef TYPE_3__ libretro_vfs_implementation_dir ;
struct TYPE_6__ {char const* d_name; } ;
struct TYPE_5__ {char* cFileName; char const* d_name; char const* name; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char*) ;

const char *FUNC_5(libretro_vfs_implementation_dir *VAR_0)
{
   if (!VAR_0 || !VAR_0->entry)
      return ((void*)0);
   return VAR_0->entry->d_name;

}
