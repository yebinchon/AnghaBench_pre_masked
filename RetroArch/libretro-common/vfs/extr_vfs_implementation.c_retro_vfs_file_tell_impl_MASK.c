
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hints; scalar_t__ scheme; int mappos; int fd; scalar_t__ mapped; int fp; } ;
typedef TYPE_1__ libretro_vfs_implementation_file ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

int64_t FUNC_5(libretro_vfs_implementation_file *VAR_4)
{
   if (!VAR_4)
      return -1;

   if ((VAR_4->hints & VAR_1) == 0)
   {
      return FUNC_1(VAR_4->fp);


   }






   if (FUNC_2(VAR_4->fd, 0, VAR_2) < 0)
      return -1;

   return 0;
}
