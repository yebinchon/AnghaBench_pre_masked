
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_vfs_interface_info {scalar_t__ required_interface_version; struct retro_vfs_interface* iface; } ;
struct retro_vfs_interface {int * closedir; int * dirent_is_dir; int * dirent_get_name; int * readdir; int * opendir; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

void FUNC_0(const struct retro_vfs_interface_info* VAR_6)
{
   const struct retro_vfs_interface* VAR_7;

   VAR_4 = ((void*)0);
   VAR_5 = ((void*)0);
   VAR_2 = ((void*)0);
   VAR_3 = ((void*)0);
   VAR_1 = ((void*)0);

   VAR_7 = VAR_6->iface;

   if (VAR_6->required_interface_version < VAR_0 || !VAR_7)
      return;

   VAR_4 = VAR_7->opendir;
   VAR_5 = VAR_7->readdir;
   VAR_2 = VAR_7->dirent_get_name;
   VAR_3 = VAR_7->dirent_is_dir;
   VAR_1 = VAR_7->closedir;
}
