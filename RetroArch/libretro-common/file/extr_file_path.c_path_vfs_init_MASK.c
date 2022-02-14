
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_vfs_interface_info {scalar_t__ required_interface_version; struct retro_vfs_interface* iface; } ;
struct retro_vfs_interface {int mkdir; int stat; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(const struct retro_vfs_interface_info* VAR_5)
{
   const struct retro_vfs_interface*
      VAR_6 = VAR_5->iface;

   VAR_2 = VAR_4;
   VAR_1 = VAR_3;

   if (VAR_5->required_interface_version < VAR_0 || !VAR_6)
      return;

   VAR_2 = VAR_6->stat;
   VAR_1 = VAR_6->mkdir;
}
