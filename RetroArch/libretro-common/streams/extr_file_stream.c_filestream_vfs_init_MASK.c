
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retro_vfs_interface_info {scalar_t__ required_interface_version; struct retro_vfs_interface* iface; } ;
struct retro_vfs_interface {int * rename; int * remove; int * flush; int * write; int * read; int * seek; int * tell; int * truncate; int * size; int * close; int * open; int * get_path; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;

void FUNC_0(const struct retro_vfs_interface_info* VAR_13)
{
   const struct retro_vfs_interface* VAR_14;

   VAR_3 = ((void*)0);
   VAR_4 = ((void*)0);
   VAR_1 = ((void*)0);
   VAR_10 = ((void*)0);
   VAR_9 = ((void*)0);
   VAR_11 = ((void*)0);
   VAR_8 = ((void*)0);
   VAR_5 = ((void*)0);
   VAR_12 = ((void*)0);
   VAR_2 = ((void*)0);
   VAR_6 = ((void*)0);
   VAR_7 = ((void*)0);

   VAR_14 = VAR_13->iface;

   if (VAR_13->required_interface_version < VAR_0
         || !VAR_14)
      return;

   VAR_3 = VAR_14->get_path;
   VAR_4 = VAR_14->open;
   VAR_1 = VAR_14->close;
   VAR_9 = VAR_14->size;
   VAR_11 = VAR_14->truncate;
   VAR_10 = VAR_14->tell;
   VAR_8 = VAR_14->seek;
   VAR_5 = VAR_14->read;
   VAR_12 = VAR_14->write;
   VAR_2 = VAR_14->flush;
   VAR_6 = VAR_14->remove;
   VAR_7 = VAR_14->rename;
}
