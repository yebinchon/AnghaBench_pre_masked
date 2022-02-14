
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* cue_buf; } ;
struct TYPE_7__ {scalar_t__ scheme; int hints; int fd; struct TYPE_7__* orig_path; struct TYPE_7__* buf; TYPE_1__ cdrom; int mapsize; int mapped; scalar_t__ fp; } ;
typedef TYPE_2__ libretro_vfs_implementation_file ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(libretro_vfs_implementation_file *VAR_3)
{
   if (!VAR_3)
      return -1;
   if ((VAR_3->hints & VAR_1) == 0)
   {
      if (VAR_3->fp)
      {
         FUNC_1(VAR_3->fp);
      }
   }
   else
   {




   }

   if (VAR_3->fd > 0)
   {




      FUNC_0(VAR_3->fd);

   }





   if (VAR_3->buf)
      FUNC_2(VAR_3->buf);

   if (VAR_3->orig_path)
      FUNC_2(VAR_3->orig_path);

   FUNC_2(VAR_3);

   return 0;
}
