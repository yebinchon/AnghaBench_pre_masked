
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_4__ {int hints; scalar_t__ scheme; int mappos; int mapsize; int fd; scalar_t__ mapped; int fp; } ;
typedef TYPE_1__ libretro_vfs_implementation_file ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,long,int) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (TYPE_1__*,int,int) ;

int64_t FUNC_8(libretro_vfs_implementation_file *VAR_3, int64_t VAR_4, int VAR_5)
{
   if (!VAR_3)
      return -1;

   if ((VAR_3->hints & VAR_1) == 0)
   {
      return FUNC_4(VAR_3->fp, (off_t)VAR_4, VAR_5);

   }
   if (FUNC_5(VAR_3->fd, VAR_4, VAR_5) < 0)
      return -1;

   return 0;
}
