
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int hints; int fd; int fp; } ;
typedef TYPE_1__ libretro_vfs_implementation_file ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void const*,int,size_t,int ) ;
 scalar_t__ FUNC_1 (int ,void const*,size_t) ;
 int FUNC_2 (int ,void const*,size_t) ;

int64_t FUNC_3(libretro_vfs_implementation_file *VAR_2, const void *VAR_3, uint64_t VAR_4)
{
   if (!VAR_2)
      return -1;

   if ((VAR_2->hints & VAR_1) == 0)
   {





      return FUNC_0(VAR_3, 1, (size_t)VAR_4, VAR_2->fp);

   }





   return FUNC_2(VAR_2->fd, VAR_3, (size_t)VAR_4);
}
